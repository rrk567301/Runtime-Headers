@interface NSCalibratedWhiteColor : NSColor {
    double whiteComponent;
    double alphaComponent;
    struct CGColor { } *_cachedCGColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (id)colorSpaceName;
- (void)setStroke;
- (double)alphaComponent;
- (void)setFill;
- (void)set;
- (void)getWhite:(double *)a0 alpha:(double *)a1;
- (id)colorWithAlphaComponent:(double)a0;
- (struct CGColor { } *)CGColor;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)colorSpace;
- (long long)numberOfComponents;
- (unsigned long long)hash;
- (long long)type;
- (id)description;
- (Class)classForCoder;
- (void)dealloc;
- (id)colorUsingType:(long long)a0;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (void)getComponents:(double *)a0;
- (BOOL)isUniform;
- (double)whiteComponent;

@end
