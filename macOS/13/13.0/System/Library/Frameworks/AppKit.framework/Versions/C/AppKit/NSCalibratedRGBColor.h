@interface NSCalibratedRGBColor : NSColor {
    double redComponent;
    double greenComponent;
    double blueComponent;
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
- (void)_setAsSystemColor;
- (double)redComponent;
- (double)greenComponent;
- (double)blueComponent;
- (void)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (double)hueComponent;
- (double)saturationComponent;
- (double)brightnessComponent;
- (void)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (long long)numberOfComponents;
- (void)getComponents:(double *)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (void)setFill;
- (id)initWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;

@end
