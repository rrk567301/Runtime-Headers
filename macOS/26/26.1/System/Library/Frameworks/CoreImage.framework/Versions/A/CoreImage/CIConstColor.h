@interface CIConstColor : CIColor

+ (id)alloc;

- (double)red;
- (struct CGColor { } *)cgColor;
- (const double *)components;
- (double)blue;
- (double)green;
- (id)retain;
- (double)alpha;
- (unsigned long long)hash;
- (struct CGColorSpace { } *)colorSpace;
- (oneway void)release;
- (unsigned long long)retainCount;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 colorSpace:(struct CGColorSpace { } *)a4;
- (void)dealloc;
- (unsigned long long)numberOfComponents;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;
- (struct CGColor { } *)rgbColor;
- (BOOL)isEqual:(id)a0;

@end
