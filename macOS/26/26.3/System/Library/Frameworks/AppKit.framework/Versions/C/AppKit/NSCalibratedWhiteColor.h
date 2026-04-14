@interface NSCalibratedWhiteColor : NSColor {
    double whiteComponent;
    double alphaComponent;
    struct CGColor { } *_cachedCGColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (id)colorWithAlphaComponent:(double)a0;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (double)alphaComponent;
- (void)getWhite:(double *)a0 alpha:(double *)a1;
- (void)setStroke;
- (void)set;
- (void)setFill;
- (long long)type;
- (id)colorSpaceName;
- (id)colorSpace;
- (struct CGColor { } *)CGColor;
- (id)description;
- (Class)classForCoder;
- (void)dealloc;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (long long)numberOfComponents;
- (id)colorUsingType:(long long)a0;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (void)getComponents:(double *)a0;
- (BOOL)isUniform;
- (double)whiteComponent;

@end
