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
- (void)set;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (long long)type;
- (struct CGColor { } *)CGColor;
- (void)setStroke;
- (double)alphaComponent;
- (id)colorWithAlphaComponent:(double)a0;
- (id)colorUsingColorSpace:(id)a0;
- (double)redComponent;
- (double)greenComponent;
- (double)blueComponent;
- (id)colorUsingType:(long long)a0;
- (long long)numberOfComponents;
- (void)getComponents:(double *)a0;
- (id)colorSpace;
- (void)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (id)colorSpaceName;
- (void)setFill;
- (void)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (BOOL)isUniform;
- (void)_setAsSystemColor;
- (double)hueComponent;
- (double)saturationComponent;
- (double)brightnessComponent;
- (id)initWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;

@end
