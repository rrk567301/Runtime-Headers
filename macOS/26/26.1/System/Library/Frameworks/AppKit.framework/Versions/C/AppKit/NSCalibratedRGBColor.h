@interface NSCalibratedRGBColor : NSColor {
    double redComponent;
    double greenComponent;
    double blueComponent;
    double alphaComponent;
    struct CGColor { } *_cachedCGColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (void)setFill;
- (long long)type;
- (unsigned long long)hash;
- (id)colorWithAlphaComponent:(double)a0;
- (id)colorSpace;
- (id)colorSpaceName;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (struct CGColor { } *)CGColor;
- (void)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (void)dealloc;
- (void)set;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (void)setStroke;
- (long long)numberOfComponents;
- (id)initWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
- (double)alphaComponent;
- (void)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (BOOL)isEqual:(id)a0;
- (id)colorUsingType:(long long)a0;
- (void)_setAsSystemColor;
- (double)blueComponent;
- (double)brightnessComponent;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (void)getComponents:(double *)a0;
- (double)greenComponent;
- (double)hueComponent;
- (BOOL)isUniform;
- (double)redComponent;
- (double)saturationComponent;

@end
