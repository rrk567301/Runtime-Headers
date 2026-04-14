@class NSColorSpace;

@interface NSColorSpaceColor : NSColor {
    NSColorSpace *colorSpace;
    struct CGColor { } *_cachedCGColor;
    long long numComponents;
    double components[0];
}

+ (void)load;
+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;
+ (id)newWithColorSpace:(id)a0 components:(const double *)a1 count:(long long)a2;

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
- (double)redComponent;
- (double)greenComponent;
- (double)blueComponent;
- (void)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (double)hueComponent;
- (double)saturationComponent;
- (double)brightnessComponent;
- (void)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (double)whiteComponent;
- (void)getWhite:(double *)a0 alpha:(double *)a1;
- (double)cyanComponent;
- (double)magentaComponent;
- (double)yellowComponent;
- (double)blackComponent;
- (void)getCyan:(double *)a0 magenta:(double *)a1 yellow:(double *)a2 black:(double *)a3 alpha:(double *)a4;
- (long long)numberOfComponents;
- (void)getComponents:(double *)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (void)setFill;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (void)_release;
- (id)initWithColorSpace:(id)a0 components:(const double *)a1 count:(long long)a2;

@end
