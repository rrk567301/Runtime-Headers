@class NSColorSpace;

@interface NSColorSpaceColor : NSColor {
    NSColorSpace *colorSpace;
    struct CGColor { } *_cachedCGColor;
    long long numComponents;
    double components[0];
}

+ (void)load;
+ (id)newWithColorSpace:(id)a0 components:(const double *)a1 count:(long long)a2;
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
- (double)cyanComponent;
- (double)magentaComponent;
- (double)yellowComponent;
- (double)blackComponent;
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
- (void)getWhite:(double *)a0 alpha:(double *)a1;
- (void)getCyan:(double *)a0 magenta:(double *)a1 yellow:(double *)a2 black:(double *)a3 alpha:(double *)a4;
- (void)setFill;
- (void)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (double)whiteComponent;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (BOOL)isUniform;
- (double)hueComponent;
- (double)saturationComponent;
- (double)brightnessComponent;
- (id)initWithColorSpace:(id)a0 components:(const double *)a1 count:(long long)a2;
- (void)_release;

@end
