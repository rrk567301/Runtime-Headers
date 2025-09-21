@class NSString, NSArray;

@interface EARTokenPronounciations : NSObject

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSArray *pronunciations;

- (void).cxx_destruct;
- (struct TokenProns { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char x0 : 1; unsigned char x1 : 7; } x0; char x1[0]; char x2[23]; } x0; struct __long { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; char *x2; } x1; } x0; } x0; } x0; struct vector<quasar::PronChoice, std::allocator<quasar::PronChoice>> { struct PronChoice *x0; struct PronChoice *x1; struct __compressed_pair<quasar::PronChoice *, std::allocator<quasar::PronChoice>> { struct PronChoice *x0; } x2; } x1; struct vector<quasar::PronChoice, std::allocator<quasar::PronChoice>> { struct PronChoice *x0; struct PronChoice *x1; struct __compressed_pair<quasar::PronChoice *, std::allocator<quasar::PronChoice>> { struct PronChoice *x0; } x2; } x2; })_quasarProns;
- (id)initWithToken:(id)a0 pronunciations:(id)a1;

@end
