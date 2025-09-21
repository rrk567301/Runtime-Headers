@interface HALB_TailspinImpl : NSObject

+ (struct optional<std::string> { union { char x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char x0 : 1; unsigned char x1 : 7; } x0; char x1[0]; char x2[23]; } x0; struct __long { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; char *x2; } x1; } x0; } x0; } x1; } x0; BOOL x1; })dumpTailspinSync:(unsigned long long)a0 forReason:(id)a1;
+ (BOOL)enableTailspinSync;
+ (id)initOptionsDictionary;
+ (void)prepareDumpOptions:(unsigned long long)a0 outDict:(id *)a1;

@end
