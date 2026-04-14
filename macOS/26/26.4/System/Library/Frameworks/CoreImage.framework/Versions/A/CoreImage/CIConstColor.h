@interface CIConstColor : CIColor

+ (id)alloc;

- (struct CGColor { } *)cgColor;
- (double)green;
- (const double *)components;
- (struct CGColor { } *)rgbColor;
- (double)red;
- (double)blue;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (struct CGColorSpace { } *)colorSpace;
- (unsigned long long)numberOfComponents;
- (id)retain;
- (unsigned long long)hash;
- (oneway void)release;
- (double)alpha;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 colorSpace:(struct CGColorSpace { } *)a4;

@end
