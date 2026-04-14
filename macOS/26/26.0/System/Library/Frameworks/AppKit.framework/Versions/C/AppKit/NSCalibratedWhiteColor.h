@interface NSCalibratedWhiteColor : NSColor {
    double whiteComponent;
    double alphaComponent;
    struct CGColor { } *_cachedCGColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (struct CGColor { } *)CGColor;
- (id)colorSpace;
- (void)dealloc;
- (Class)classForCoder;
- (double)alphaComponent;
- (void)set;
- (long long)type;
- (void)encodeWithCoder:(id)a0;
- (void)setStroke;
- (id)colorWithAlphaComponent:(double)a0;
- (void)setFill;
- (long long)numberOfComponents;
- (void)getWhite:(double *)a0 alpha:(double *)a1;
- (id)description;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)colorSpaceName;
- (id)colorUsingType:(long long)a0;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (void)getComponents:(double *)a0;
- (BOOL)isUniform;
- (double)whiteComponent;

@end
