@interface NSCalibratedWhiteColor : NSColor {
    double whiteComponent;
    double alphaComponent;
    struct CGColor { } *_cachedCGColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)set;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (long long)type;
- (struct CGColor { } *)CGColor;
- (void)setStroke;
- (id)colorUsingType:(long long)a0;
- (void)getWhite:(double *)a0 alpha:(double *)a1;
- (void)setFill;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (double)alphaComponent;
- (id)colorSpace;
- (id)colorSpaceName;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (id)colorWithAlphaComponent:(double)a0;
- (void)getComponents:(double *)a0;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (char)isUniform;
- (long long)numberOfComponents;
- (double)whiteComponent;

@end
