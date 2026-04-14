@interface NSCalibratedRGBColor : NSColor {
    double redComponent;
    double greenComponent;
    double blueComponent;
    double alphaComponent;
    struct CGColor { } *_cachedCGColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (struct CGColor { } *)CGColor;
- (id)colorSpace;
- (void)dealloc;
- (Class)classForCoder;
- (double)alphaComponent;
- (void)set;
- (long long)type;
- (void)encodeWithCoder:(id)a0;
- (void)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (void)setStroke;
- (id)colorWithAlphaComponent:(double)a0;
- (void)setFill;
- (long long)numberOfComponents;
- (id)description;
- (void)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (id)initWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)colorSpaceName;
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
