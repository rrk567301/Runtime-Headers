@interface CIConstColor : CIColor

+ (id)alloc;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (unsigned long long)retainCount;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (const double *)components;
- (struct CGColor { } *)cgColor;
- (struct CGColorSpace { } *)colorSpace;
- (unsigned long long)numberOfComponents;
- (double)alpha;
- (double)red;
- (double)green;
- (double)blue;
- (struct CGColor { } *)rgbColor;

@end
