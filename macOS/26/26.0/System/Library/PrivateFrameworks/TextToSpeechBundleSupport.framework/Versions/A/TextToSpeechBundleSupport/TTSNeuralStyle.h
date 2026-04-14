@class NSString, NSArray;

@interface TTSNeuralStyle : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSArray *styleVector;

- (void).cxx_destruct;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; float *x2; })getStyleVector;
- (id)initWithName:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })a0 vector:(struct vector<float, std::allocator<float>> { float *x0; float *x1; float *x2; })a1;

@end
