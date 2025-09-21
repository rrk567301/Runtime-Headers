@interface CIConstColor : CIColor

+ (id)alloc;

- (double)blue;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 colorSpace:(struct CGColorSpace { } *)a4;
- (double)green;
- (id)autorelease;
- (struct CGColorSpace { } *)colorSpace;
- (struct CGColor { } *)cgColor;
- (const double *)components;
- (double)red;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)retain;
- (double)alpha;
- (unsigned long long)retainCount;
- (unsigned long long)numberOfComponents;
- (oneway void)release;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (struct CGColor { } *)rgbColor;

@end
