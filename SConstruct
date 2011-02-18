env = DefaultEnvironment()
env.ParseConfig('pkg-config --libs --cflags protobuf')

diaryenv = env.Clone()
runenv = env.Clone()

diaryenv.VariantDir("build", "src", duplicate = 0)
runenv.VariantDir("bin", "src", duplicate = 0)

diarylib = diaryenv.Library("build/diary.pb.cc")

runenv.Append(LIBS = ['boost_date_time', 'boost_program_options', diarylib])

runenv.Program("bin/diary.cc")
