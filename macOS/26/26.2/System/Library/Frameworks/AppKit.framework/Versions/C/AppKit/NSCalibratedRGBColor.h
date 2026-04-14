@interface NSCalibratedRGBColor : NSColor {
    double redComponent;
    double greenComponent;
    double blueComponent;
    double alphaComponent;
    struct CGColor { } *_cachedCGColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (void)setStroke;
- (struct CGColor { } *)CGColor;
- (void)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (double)alphaComponent;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)setFill;
- (id)initWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
- (void)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
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
