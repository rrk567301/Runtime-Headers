@interface CIConstColor : CIColor

+ (id)alloc;

- (double)blue;
- (double)green;
- (const double *)components;
- (unsigned long long)retainCount;
- (id)autorelease;
- (struct CGColor { } *)cgColor;
- (struct CGColorSpace { } *)colorSpace;
- (double)red;
- (id)retain;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 colorSpace:(struct CGColorSpace { } *)a4;
- (struct CGColor { } *)rgbColor;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)alpha;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)numberOfComponents;
- (oneway void)release;

@end
