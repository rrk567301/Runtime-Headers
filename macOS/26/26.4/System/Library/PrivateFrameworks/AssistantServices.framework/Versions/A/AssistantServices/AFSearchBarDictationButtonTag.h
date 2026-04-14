@interface AFSearchBarDictationButtonTag : AFDictationButtonTag

+ (BOOL)supportsSecureCoding;

- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 titleOrigin:(struct CGPoint { double x0; double x1; })a1 titleWidth:(double)a2 secureName:(unsigned int)a3;

@end
