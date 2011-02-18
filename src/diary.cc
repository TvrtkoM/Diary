#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "boost/date_time/gregorian/gregorian.hpp"
#include "boost/date_time/posix_time/posix_time.hpp"
#include "boost/program_options/options_description.hpp"
#include "boost/program_options/positional_options.hpp"
#include "boost/program_options/variables_map.hpp"
#include "boost/program_options/parsers.hpp"
#include "diary.pb.h"

using namespace std;
using namespace boost;

void note_input(Diary_Note *note);
bool author_input(Diary_Author *author);
void author_output(Diary_Author *author);
void note_output(Diary_Note *note);

int main(int argc, char *argv[])
{
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    // supported options
    program_options::options_description read_opts("Read options");
    read_opts.add_options()
        ("noteixs,n", program_options::value< vector<int> >()->multitoken(), "print the note at indexes (ex. -n 12 54 65)")
        ("author,a", "print author information")
        ("list,l", "print all notes");
    program_options::options_description all_opts("Usage:\n"
            "  Write note or create new diary:\n\tdiary [filename]\n"
            "  Read data from diary:\n\tdiary [filename] [read options]\n\nGeneral");
    all_opts.add_options()
        ("help,h", "print help")
        ("file,f", program_options::value<string>(), "diary file");
    all_opts.add(read_opts);

    program_options::positional_options_description p;
    p.add("file", 1);

    program_options::variables_map vm;
    try
    {
        program_options::store(program_options::command_line_parser(argc, argv).
                options(all_opts).positional(p).run(), vm);
    }
    catch(std::exception &e)
    {
        cerr << "Cannot parse options. Type 'diary --help' to display usage" << endl;
        return 1;
    }
    program_options::notify(vm);

    string filename;

    if(vm.count("help") && argc == 2)
    {
        cout << all_opts << endl;
    }
    else if(!vm.count("file"))
    {
        cerr << "No filename given." << endl;
    }
    else if(vm.count("file") && argc == 2)
    {
        Diary diary;
        filename = vm["file"].as<string>();

        fstream diary_file_in(filename.c_str(), ios::in | ios::binary);
        if(!diary_file_in)
        {
            cerr << filename << " file not found!\ncreate new file [Y/n] ? ";
            string c;
            for(int i = 0; i < 4; i++)
            {
                getline(cin,c);
                if(c == "" || c == "Y" || c == "y")
                {
                    cout << "Enter author information." << endl;
                    if(!author_input(diary.mutable_author()))
                        return 1;
                    break;
                }
                else if(c == "N" || c == "n")
                {
                    cout << "Ok, good bye." << endl;
                    return 0;
                }
                else if(i < 2)
                {
                    cerr << "wrong input. create new file [Y/n] ? ";
                }
                else if(i == 2)
                {
                    cerr << "wrong input. Good bye." << endl;
                    return 1;
                }
            }
        }
        else if(!diary.ParseFromIstream(&diary_file_in))
        {
            cerr << "Cannot parse " << filename << "." << endl;
            return 1;
        }
        note_input(diary.add_note());
        fstream diary_file_out(filename.c_str(), ios::out | ios::trunc | ios::binary);
        if(!diary.SerializeToOstream(&diary_file_out))
        {
            cerr << "Failed writing to " << filename << endl;
            return 1;
        }
    }
    else if(vm.count("file") && argc > 2)
    {
        bool nignore = (vm.count("noteixs") && vm.count("list"));
        if(nignore)
            cout << "ignoring noteixs option..." << endl;
        filename = vm["file"].as<string>();
        Diary diary;
        fstream diary_file_in(filename.c_str(), ios::in | ios::binary);
        if(!diary.ParseFromIstream(&diary_file_in))
        {
            cerr << "Cannot parse " << filename << "." << endl;
            return 1;
        }
        if(vm.count("author"))
        {
            Diary_Author *author = diary.mutable_author();
            author_output(author);
        }
        if(vm.count("list") && diary.note_size() != 0)
        {
            for(int i = 0; i < diary.note_size(); i++)
            {
                Diary_Note *note = diary.mutable_note(i);
                note_output(note);
            }
        }
        if(vm.count("noteixs") && !nignore && diary.note_size() != 0)
        {
            vector<int> noteixs = vm["noteixs"].as< vector<int> >();
            sort(noteixs.begin(), noteixs.end());
            for(vector<int>::iterator it = noteixs.begin(); it != noteixs.end(); it++)
            {
                if(*it > diary.note_size())
                {
                    cerr << "No note on index " << *it << endl;
                }
                else
                {
                    Diary_Note *note = diary.mutable_note(*it-1);
                    note_output(note);
                }
            }
        }
    }

    return 0;
}

void note_input(Diary_Note *note)
{
    string tmp;
    posix_time::ptime datetime = posix_time::second_clock::local_time();
    tmp = posix_time::to_iso_extended_string(datetime);
    note->set_datetime(tmp);
    cout << "Note title (optional): ";
    getline(cin, tmp);
    if(tmp != "")
        note->set_title(tmp);
    cout << "Type note text (CTRL-D to save & exit)" << endl;
    string text;
    int numempty = 0;
    // leaving only single empty lines in text
    while(!cin.eof())
    {
        cout << "> ";
        getline(cin, tmp);
        if(tmp == "")
        {
            numempty++;
            if(numempty == 1) text += "\n";
        }
        else
        {
            text += tmp + "\n";
            numempty = 0;
        }
    }
    // delete empty lines at beginning and end
    int tlen = text.length();
    if(text[0] == '\n') text.erase(0,1);
    if(text[tlen-1] == '\n') text.erase(tlen-1,1);
    note->set_text(text);
    cout << endl;
}

bool author_input(Diary_Author *author)
{
    string tmp;
    cout << "First name: ";
    getline(cin, tmp);
    author->set_firstname(tmp);
    cout << "Middle name (optional): ";
    getline(cin, tmp);
    if(tmp != "")
        author->set_middlename(tmp);
    cout << "Last name: ";
    getline(cin, tmp);
    author->set_lastname(tmp);
    cout << "Birth date (YYYY-MM-DD): ";
    getline(cin, tmp);
    try
    {
        gregorian::date bdate = gregorian::from_string(tmp);
        tmp = gregorian::to_iso_extended_string(bdate);
    } 
    catch (std::exception &e)
    {
        cerr << "Date invalid. exiting..." << endl;
        return false;
    }
    author->set_birthdate(tmp);
    return true;
}

void author_output(Diary_Author *author)
{
    string separator = "---";
    cout << separator << endl;
    cout << "Author" << endl;
    cout << separator << endl;
    cout << "First Name:\t" << author->firstname() << endl;
    if(author->has_middlename())
        cout << "Middle Name:\t" << author->middlename() << endl;
    cout << "Last Name:\t" << author->lastname() << endl;
    cout << "Birth Date:\t" << author->birthdate() << endl << endl;
}
void note_output(Diary_Note *note)
{
    string separator = "---";
    cout << separator << endl;
    cout << note->datetime();
    if(note->has_title())
        cout << " - " << note->title();
    cout << endl << endl << note->text() << endl;
}
