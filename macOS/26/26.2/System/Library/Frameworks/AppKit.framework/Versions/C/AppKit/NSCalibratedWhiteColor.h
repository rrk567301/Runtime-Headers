@interface NSCalibratedWhiteColor : NSColor {
    double whiteComponent;
    double alphaComponent;
    struct CGColor { } *_cachedCGColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (void)setStroke;
- (struct CGColor { } *)CGColor;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (double)alphaComponent;
- (void)getWhite:(double *)a0 alpha:(double *)a1;
- (void)setFill;
- (id)colorWithAlphaComponent:(double)a0;
- (id)colorSpaceName;
- (void)set;
- (id)colorSpace;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)numberOfComponents;
- (long long)type;
- (id)description;
- (void)dealloc;
- (id)colorUsingType:(long long)a0;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (void)getComponents:(double *)a0;
- (BOOL)isUniform;
- (double)whiteComponent;

@end
