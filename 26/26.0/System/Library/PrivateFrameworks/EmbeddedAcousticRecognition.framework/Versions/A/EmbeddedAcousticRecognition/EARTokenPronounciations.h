@class NSString, NSArray;

@interface EARTokenPronounciations : NSObject

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSArray *pronunciations;

- (void).cxx_destruct;
- (struct TokenProns { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; struct vector<quasar::PronChoice, std::allocator<quasar::PronChoice>> { struct PronChoice *x0; struct PronChoice *x1; struct PronChoice *x2; } x1; struct vector<quasar::PronChoice, std::allocator<quasar::PronChoice>> { struct PronChoice *x0; struct PronChoice *x1; struct PronChoice *x2; } x2; })_quasarProns;
- (id)initWithToken:(id)a0 pronunciations:(id)a1;

@end
