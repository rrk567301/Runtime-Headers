@interface NSCalibratedWhiteColor : NSColor {
    double whiteComponent;
    double alphaComponent;
    struct CGColor { } *_cachedCGColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (long long)type;
- (void)set;
- (struct CGColor { } *)CGColor;
- (void)setStroke;
- (id)colorWithAlphaComponent:(double)a0;
- (double)alphaComponent;
- (id)colorSpace;
- (id)colorSpaceName;
- (id)colorUsingType:(long long)a0;
- (BOOL)isUniform;
- (id)colorUsingColorSpace:(id)a0;
- (double)whiteComponent;
- (void)getWhite:(double *)a0 alpha:(double *)a1;
- (long long)numberOfComponents;
- (void)getComponents:(double *)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (void)setFill;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (id)initWithWhite:(double)a0 alpha:(double)a1;

@end
