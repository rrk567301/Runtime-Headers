@interface CIConstColor : CIColor

+ (id)alloc;

- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (const double *)components;
- (struct CGColor { } *)cgColor;
- (double)alpha;
- (struct CGColorSpace { } *)colorSpace;
- (unsigned long long)numberOfComponents;
- (double)red;
- (double)blue;
- (double)green;
- (struct CGColor { } *)rgbColor;

@end
