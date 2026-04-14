@interface NSCalibratedRGBColor : NSColor {
    double redComponent;
    double greenComponent;
    double blueComponent;
    double alphaComponent;
    struct CGColor { } *_cachedCGColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (id)colorWithAlphaComponent:(double)a0;
- (double)alphaComponent;
- (void)setStroke;
- (void)set;
- (void)setFill;
- (long long)type;
- (id)colorSpaceName;
- (void)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (id)colorSpace;
- (struct CGColor { } *)CGColor;
- (id)initWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
- (id)description;
- (Class)classForCoder;
- (void)dealloc;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (long long)numberOfComponents;
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
