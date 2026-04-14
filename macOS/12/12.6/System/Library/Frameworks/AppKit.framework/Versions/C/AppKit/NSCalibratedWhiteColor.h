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
- (void)set;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (long long)type;
- (struct CGColor { } *)CGColor;
- (void)setStroke;
- (double)alphaComponent;
- (id)colorWithAlphaComponent:(double)a0;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingType:(long long)a0;
- (long long)numberOfComponents;
- (void)getComponents:(double *)a0;
- (id)colorSpace;
- (id)colorSpaceName;
- (void)getWhite:(double *)a0 alpha:(double *)a1;
- (void)setFill;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (double)whiteComponent;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (BOOL)isUniform;

@end
