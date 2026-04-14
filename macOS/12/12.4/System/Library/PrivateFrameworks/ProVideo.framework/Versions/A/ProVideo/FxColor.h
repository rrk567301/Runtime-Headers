@interface FxColor : NSObject <NSCoding> {
    void *_priv;
    void *_pad[3];
}

+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithCIColor:(id)a0;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2;
+ (id)colorWithString:(id)a0;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (id)stringRepresentation;
- (const double *)components;
- (unsigned long long)numberOfComponents;
- (struct CGColorSpace { } *)colorSpace;
- (double)alpha;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (double)red;
- (double)green;
- (double)blue;
- (struct CGColor { } *)_cgColor;
- (id)ciColor;
- (void)convertToRGBA:(double *)a0;

@end
