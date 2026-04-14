@interface CIConstColor : CIColor

+ (id)alloc;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)autorelease;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (const double *)components;
- (unsigned long long)numberOfComponents;
- (struct CGColorSpace { } *)colorSpace;
- (double)alpha;
- (struct CGColor { } *)cgColor;
- (double)red;
- (double)green;
- (double)blue;
- (struct CGColor { } *)rgbColor;

@end
