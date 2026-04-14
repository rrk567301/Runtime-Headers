@interface NSCalibratedWhiteColor : NSColor {
    double whiteComponent;
    double alphaComponent;
    struct CGColor { } *_cachedCGColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (void)setFill;
- (long long)type;
- (unsigned long long)hash;
- (id)colorWithAlphaComponent:(double)a0;
- (id)colorSpace;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)colorSpaceName;
- (void)getWhite:(double *)a0 alpha:(double *)a1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (struct CGColor { } *)CGColor;
- (void)dealloc;
- (void)set;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (void)setStroke;
- (long long)numberOfComponents;
- (double)alphaComponent;
- (BOOL)isEqual:(id)a0;
- (id)colorUsingType:(long long)a0;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (void)getComponents:(double *)a0;
- (BOOL)isUniform;
- (double)whiteComponent;

@end
