// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: diary.proto

#ifndef PROTOBUF_diary_2eproto__INCLUDED
#define PROTOBUF_diary_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_diary_2eproto();
void protobuf_AssignDesc_diary_2eproto();
void protobuf_ShutdownFile_diary_2eproto();

class Diary;
class Diary_Author;
class Diary_Note;

// ===================================================================

class Diary_Author : public ::google::protobuf::Message {
 public:
  Diary_Author();
  virtual ~Diary_Author();
  
  Diary_Author(const Diary_Author& from);
  
  inline Diary_Author& operator=(const Diary_Author& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Diary_Author& default_instance();
  
  void Swap(Diary_Author* other);
  
  // implements Message ----------------------------------------------
  
  Diary_Author* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Diary_Author& from);
  void MergeFrom(const Diary_Author& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string firstname = 1;
  inline bool has_firstname() const;
  inline void clear_firstname();
  static const int kFirstnameFieldNumber = 1;
  inline const ::std::string& firstname() const;
  inline void set_firstname(const ::std::string& value);
  inline void set_firstname(const char* value);
  inline void set_firstname(const char* value, size_t size);
  inline ::std::string* mutable_firstname();
  inline ::std::string* release_firstname();
  
  // optional string middlename = 2;
  inline bool has_middlename() const;
  inline void clear_middlename();
  static const int kMiddlenameFieldNumber = 2;
  inline const ::std::string& middlename() const;
  inline void set_middlename(const ::std::string& value);
  inline void set_middlename(const char* value);
  inline void set_middlename(const char* value, size_t size);
  inline ::std::string* mutable_middlename();
  inline ::std::string* release_middlename();
  
  // required string lastname = 3;
  inline bool has_lastname() const;
  inline void clear_lastname();
  static const int kLastnameFieldNumber = 3;
  inline const ::std::string& lastname() const;
  inline void set_lastname(const ::std::string& value);
  inline void set_lastname(const char* value);
  inline void set_lastname(const char* value, size_t size);
  inline ::std::string* mutable_lastname();
  inline ::std::string* release_lastname();
  
  // required string birthdate = 4;
  inline bool has_birthdate() const;
  inline void clear_birthdate();
  static const int kBirthdateFieldNumber = 4;
  inline const ::std::string& birthdate() const;
  inline void set_birthdate(const ::std::string& value);
  inline void set_birthdate(const char* value);
  inline void set_birthdate(const char* value, size_t size);
  inline ::std::string* mutable_birthdate();
  inline ::std::string* release_birthdate();
  
  // @@protoc_insertion_point(class_scope:Diary.Author)
 private:
  inline void set_has_firstname();
  inline void clear_has_firstname();
  inline void set_has_middlename();
  inline void clear_has_middlename();
  inline void set_has_lastname();
  inline void clear_has_lastname();
  inline void set_has_birthdate();
  inline void clear_has_birthdate();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* firstname_;
  ::std::string* middlename_;
  ::std::string* lastname_;
  ::std::string* birthdate_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_diary_2eproto();
  friend void protobuf_AssignDesc_diary_2eproto();
  friend void protobuf_ShutdownFile_diary_2eproto();
  
  void InitAsDefaultInstance();
  static Diary_Author* default_instance_;
};
// -------------------------------------------------------------------

class Diary_Note : public ::google::protobuf::Message {
 public:
  Diary_Note();
  virtual ~Diary_Note();
  
  Diary_Note(const Diary_Note& from);
  
  inline Diary_Note& operator=(const Diary_Note& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Diary_Note& default_instance();
  
  void Swap(Diary_Note* other);
  
  // implements Message ----------------------------------------------
  
  Diary_Note* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Diary_Note& from);
  void MergeFrom(const Diary_Note& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string datetime = 2;
  inline bool has_datetime() const;
  inline void clear_datetime();
  static const int kDatetimeFieldNumber = 2;
  inline const ::std::string& datetime() const;
  inline void set_datetime(const ::std::string& value);
  inline void set_datetime(const char* value);
  inline void set_datetime(const char* value, size_t size);
  inline ::std::string* mutable_datetime();
  inline ::std::string* release_datetime();
  
  // optional string title = 3;
  inline bool has_title() const;
  inline void clear_title();
  static const int kTitleFieldNumber = 3;
  inline const ::std::string& title() const;
  inline void set_title(const ::std::string& value);
  inline void set_title(const char* value);
  inline void set_title(const char* value, size_t size);
  inline ::std::string* mutable_title();
  inline ::std::string* release_title();
  
  // required string text = 4;
  inline bool has_text() const;
  inline void clear_text();
  static const int kTextFieldNumber = 4;
  inline const ::std::string& text() const;
  inline void set_text(const ::std::string& value);
  inline void set_text(const char* value);
  inline void set_text(const char* value, size_t size);
  inline ::std::string* mutable_text();
  inline ::std::string* release_text();
  
  // @@protoc_insertion_point(class_scope:Diary.Note)
 private:
  inline void set_has_datetime();
  inline void clear_has_datetime();
  inline void set_has_title();
  inline void clear_has_title();
  inline void set_has_text();
  inline void clear_has_text();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* datetime_;
  ::std::string* title_;
  ::std::string* text_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_diary_2eproto();
  friend void protobuf_AssignDesc_diary_2eproto();
  friend void protobuf_ShutdownFile_diary_2eproto();
  
  void InitAsDefaultInstance();
  static Diary_Note* default_instance_;
};
// -------------------------------------------------------------------

class Diary : public ::google::protobuf::Message {
 public:
  Diary();
  virtual ~Diary();
  
  Diary(const Diary& from);
  
  inline Diary& operator=(const Diary& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Diary& default_instance();
  
  void Swap(Diary* other);
  
  // implements Message ----------------------------------------------
  
  Diary* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Diary& from);
  void MergeFrom(const Diary& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  typedef Diary_Author Author;
  typedef Diary_Note Note;
  
  // accessors -------------------------------------------------------
  
  // required .Diary.Author author = 1;
  inline bool has_author() const;
  inline void clear_author();
  static const int kAuthorFieldNumber = 1;
  inline const ::Diary_Author& author() const;
  inline ::Diary_Author* mutable_author();
  inline ::Diary_Author* release_author();
  
  // repeated .Diary.Note note = 2;
  inline int note_size() const;
  inline void clear_note();
  static const int kNoteFieldNumber = 2;
  inline const ::Diary_Note& note(int index) const;
  inline ::Diary_Note* mutable_note(int index);
  inline ::Diary_Note* add_note();
  inline const ::google::protobuf::RepeatedPtrField< ::Diary_Note >&
      note() const;
  inline ::google::protobuf::RepeatedPtrField< ::Diary_Note >*
      mutable_note();
  
  // @@protoc_insertion_point(class_scope:Diary)
 private:
  inline void set_has_author();
  inline void clear_has_author();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::Diary_Author* author_;
  ::google::protobuf::RepeatedPtrField< ::Diary_Note > note_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_diary_2eproto();
  friend void protobuf_AssignDesc_diary_2eproto();
  friend void protobuf_ShutdownFile_diary_2eproto();
  
  void InitAsDefaultInstance();
  static Diary* default_instance_;
};
// ===================================================================


// ===================================================================

// Diary_Author

// required string firstname = 1;
inline bool Diary_Author::has_firstname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Diary_Author::set_has_firstname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Diary_Author::clear_has_firstname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Diary_Author::clear_firstname() {
  if (firstname_ != &::google::protobuf::internal::kEmptyString) {
    firstname_->clear();
  }
  clear_has_firstname();
}
inline const ::std::string& Diary_Author::firstname() const {
  return *firstname_;
}
inline void Diary_Author::set_firstname(const ::std::string& value) {
  set_has_firstname();
  if (firstname_ == &::google::protobuf::internal::kEmptyString) {
    firstname_ = new ::std::string;
  }
  firstname_->assign(value);
}
inline void Diary_Author::set_firstname(const char* value) {
  set_has_firstname();
  if (firstname_ == &::google::protobuf::internal::kEmptyString) {
    firstname_ = new ::std::string;
  }
  firstname_->assign(value);
}
inline void Diary_Author::set_firstname(const char* value, size_t size) {
  set_has_firstname();
  if (firstname_ == &::google::protobuf::internal::kEmptyString) {
    firstname_ = new ::std::string;
  }
  firstname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Diary_Author::mutable_firstname() {
  set_has_firstname();
  if (firstname_ == &::google::protobuf::internal::kEmptyString) {
    firstname_ = new ::std::string;
  }
  return firstname_;
}
inline ::std::string* Diary_Author::release_firstname() {
  clear_has_firstname();
  if (firstname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = firstname_;
    firstname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string middlename = 2;
inline bool Diary_Author::has_middlename() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Diary_Author::set_has_middlename() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Diary_Author::clear_has_middlename() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Diary_Author::clear_middlename() {
  if (middlename_ != &::google::protobuf::internal::kEmptyString) {
    middlename_->clear();
  }
  clear_has_middlename();
}
inline const ::std::string& Diary_Author::middlename() const {
  return *middlename_;
}
inline void Diary_Author::set_middlename(const ::std::string& value) {
  set_has_middlename();
  if (middlename_ == &::google::protobuf::internal::kEmptyString) {
    middlename_ = new ::std::string;
  }
  middlename_->assign(value);
}
inline void Diary_Author::set_middlename(const char* value) {
  set_has_middlename();
  if (middlename_ == &::google::protobuf::internal::kEmptyString) {
    middlename_ = new ::std::string;
  }
  middlename_->assign(value);
}
inline void Diary_Author::set_middlename(const char* value, size_t size) {
  set_has_middlename();
  if (middlename_ == &::google::protobuf::internal::kEmptyString) {
    middlename_ = new ::std::string;
  }
  middlename_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Diary_Author::mutable_middlename() {
  set_has_middlename();
  if (middlename_ == &::google::protobuf::internal::kEmptyString) {
    middlename_ = new ::std::string;
  }
  return middlename_;
}
inline ::std::string* Diary_Author::release_middlename() {
  clear_has_middlename();
  if (middlename_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = middlename_;
    middlename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string lastname = 3;
inline bool Diary_Author::has_lastname() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Diary_Author::set_has_lastname() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Diary_Author::clear_has_lastname() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Diary_Author::clear_lastname() {
  if (lastname_ != &::google::protobuf::internal::kEmptyString) {
    lastname_->clear();
  }
  clear_has_lastname();
}
inline const ::std::string& Diary_Author::lastname() const {
  return *lastname_;
}
inline void Diary_Author::set_lastname(const ::std::string& value) {
  set_has_lastname();
  if (lastname_ == &::google::protobuf::internal::kEmptyString) {
    lastname_ = new ::std::string;
  }
  lastname_->assign(value);
}
inline void Diary_Author::set_lastname(const char* value) {
  set_has_lastname();
  if (lastname_ == &::google::protobuf::internal::kEmptyString) {
    lastname_ = new ::std::string;
  }
  lastname_->assign(value);
}
inline void Diary_Author::set_lastname(const char* value, size_t size) {
  set_has_lastname();
  if (lastname_ == &::google::protobuf::internal::kEmptyString) {
    lastname_ = new ::std::string;
  }
  lastname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Diary_Author::mutable_lastname() {
  set_has_lastname();
  if (lastname_ == &::google::protobuf::internal::kEmptyString) {
    lastname_ = new ::std::string;
  }
  return lastname_;
}
inline ::std::string* Diary_Author::release_lastname() {
  clear_has_lastname();
  if (lastname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = lastname_;
    lastname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string birthdate = 4;
inline bool Diary_Author::has_birthdate() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Diary_Author::set_has_birthdate() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Diary_Author::clear_has_birthdate() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Diary_Author::clear_birthdate() {
  if (birthdate_ != &::google::protobuf::internal::kEmptyString) {
    birthdate_->clear();
  }
  clear_has_birthdate();
}
inline const ::std::string& Diary_Author::birthdate() const {
  return *birthdate_;
}
inline void Diary_Author::set_birthdate(const ::std::string& value) {
  set_has_birthdate();
  if (birthdate_ == &::google::protobuf::internal::kEmptyString) {
    birthdate_ = new ::std::string;
  }
  birthdate_->assign(value);
}
inline void Diary_Author::set_birthdate(const char* value) {
  set_has_birthdate();
  if (birthdate_ == &::google::protobuf::internal::kEmptyString) {
    birthdate_ = new ::std::string;
  }
  birthdate_->assign(value);
}
inline void Diary_Author::set_birthdate(const char* value, size_t size) {
  set_has_birthdate();
  if (birthdate_ == &::google::protobuf::internal::kEmptyString) {
    birthdate_ = new ::std::string;
  }
  birthdate_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Diary_Author::mutable_birthdate() {
  set_has_birthdate();
  if (birthdate_ == &::google::protobuf::internal::kEmptyString) {
    birthdate_ = new ::std::string;
  }
  return birthdate_;
}
inline ::std::string* Diary_Author::release_birthdate() {
  clear_has_birthdate();
  if (birthdate_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = birthdate_;
    birthdate_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// Diary_Note

// required string datetime = 2;
inline bool Diary_Note::has_datetime() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Diary_Note::set_has_datetime() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Diary_Note::clear_has_datetime() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Diary_Note::clear_datetime() {
  if (datetime_ != &::google::protobuf::internal::kEmptyString) {
    datetime_->clear();
  }
  clear_has_datetime();
}
inline const ::std::string& Diary_Note::datetime() const {
  return *datetime_;
}
inline void Diary_Note::set_datetime(const ::std::string& value) {
  set_has_datetime();
  if (datetime_ == &::google::protobuf::internal::kEmptyString) {
    datetime_ = new ::std::string;
  }
  datetime_->assign(value);
}
inline void Diary_Note::set_datetime(const char* value) {
  set_has_datetime();
  if (datetime_ == &::google::protobuf::internal::kEmptyString) {
    datetime_ = new ::std::string;
  }
  datetime_->assign(value);
}
inline void Diary_Note::set_datetime(const char* value, size_t size) {
  set_has_datetime();
  if (datetime_ == &::google::protobuf::internal::kEmptyString) {
    datetime_ = new ::std::string;
  }
  datetime_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Diary_Note::mutable_datetime() {
  set_has_datetime();
  if (datetime_ == &::google::protobuf::internal::kEmptyString) {
    datetime_ = new ::std::string;
  }
  return datetime_;
}
inline ::std::string* Diary_Note::release_datetime() {
  clear_has_datetime();
  if (datetime_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = datetime_;
    datetime_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string title = 3;
inline bool Diary_Note::has_title() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Diary_Note::set_has_title() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Diary_Note::clear_has_title() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Diary_Note::clear_title() {
  if (title_ != &::google::protobuf::internal::kEmptyString) {
    title_->clear();
  }
  clear_has_title();
}
inline const ::std::string& Diary_Note::title() const {
  return *title_;
}
inline void Diary_Note::set_title(const ::std::string& value) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(value);
}
inline void Diary_Note::set_title(const char* value) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(value);
}
inline void Diary_Note::set_title(const char* value, size_t size) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Diary_Note::mutable_title() {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  return title_;
}
inline ::std::string* Diary_Note::release_title() {
  clear_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = title_;
    title_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string text = 4;
inline bool Diary_Note::has_text() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Diary_Note::set_has_text() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Diary_Note::clear_has_text() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Diary_Note::clear_text() {
  if (text_ != &::google::protobuf::internal::kEmptyString) {
    text_->clear();
  }
  clear_has_text();
}
inline const ::std::string& Diary_Note::text() const {
  return *text_;
}
inline void Diary_Note::set_text(const ::std::string& value) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    text_ = new ::std::string;
  }
  text_->assign(value);
}
inline void Diary_Note::set_text(const char* value) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    text_ = new ::std::string;
  }
  text_->assign(value);
}
inline void Diary_Note::set_text(const char* value, size_t size) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    text_ = new ::std::string;
  }
  text_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Diary_Note::mutable_text() {
  set_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    text_ = new ::std::string;
  }
  return text_;
}
inline ::std::string* Diary_Note::release_text() {
  clear_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = text_;
    text_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// Diary

// required .Diary.Author author = 1;
inline bool Diary::has_author() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Diary::set_has_author() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Diary::clear_has_author() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Diary::clear_author() {
  if (author_ != NULL) author_->::Diary_Author::Clear();
  clear_has_author();
}
inline const ::Diary_Author& Diary::author() const {
  return author_ != NULL ? *author_ : *default_instance_->author_;
}
inline ::Diary_Author* Diary::mutable_author() {
  set_has_author();
  if (author_ == NULL) author_ = new ::Diary_Author;
  return author_;
}
inline ::Diary_Author* Diary::release_author() {
  clear_has_author();
  ::Diary_Author* temp = author_;
  author_ = NULL;
  return temp;
}

// repeated .Diary.Note note = 2;
inline int Diary::note_size() const {
  return note_.size();
}
inline void Diary::clear_note() {
  note_.Clear();
}
inline const ::Diary_Note& Diary::note(int index) const {
  return note_.Get(index);
}
inline ::Diary_Note* Diary::mutable_note(int index) {
  return note_.Mutable(index);
}
inline ::Diary_Note* Diary::add_note() {
  return note_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Diary_Note >&
Diary::note() const {
  return note_;
}
inline ::google::protobuf::RepeatedPtrField< ::Diary_Note >*
Diary::mutable_note() {
  return &note_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_diary_2eproto__INCLUDED
