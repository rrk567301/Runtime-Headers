@interface CIConstColor : CIColor

+ (id)alloc;

- (double)green;
- (struct CGColor { } *)cgColor;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 colorSpace:(struct CGColorSpace { } *)a4;
- (double)blue;
- (double)red;
- (const double *)components;
- (id)retain;
- (struct CGColorSpace { } *)colorSpace;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)numberOfComponents;
- (unsigned long long)retainCount;
- (id)autorelease;
- (struct CGColor { } *)rgbColor;
- (double)alpha;
- (oneway void)release;
- (void)dealloc;

@end
