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
- (void)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (id)colorSpaceName;
- (void)setStroke;
- (double)alphaComponent;
- (void)setFill;
- (void)set;
- (id)initWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
- (id)colorWithAlphaComponent:(double)a0;
- (struct CGColor { } *)CGColor;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)colorSpace;
- (long long)numberOfComponents;
- (unsigned long long)hash;
- (long long)type;
- (id)description;
- (Class)classForCoder;
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
