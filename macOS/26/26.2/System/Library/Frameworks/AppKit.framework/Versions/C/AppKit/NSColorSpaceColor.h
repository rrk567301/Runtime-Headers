@class NSColorSpace;

@interface NSColorSpaceColor : NSColor {
    NSColorSpace *colorSpace;
    struct CGColor { } *_cachedCGColor;
    long long numComponents;
    double _headroom;
    double components[0];
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;
+ (id)newWithColorSpace:(id)a0 components:(const double *)a1 count:(long long)a2;
+ (id)newWithColorSpace:(id)a0 components:(const double *)a1 count:(long long)a2 headroom:(double)a3;

- (void)setStroke;
- (double)contentHeadroom;
- (struct CGColor { } *)CGColor;
- (void)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (double)alphaComponent;
- (void)getWhite:(double *)a0 alpha:(double *)a1;
- (void)setFill;
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
- (double)yellowComponent;
- (id)colorByApplyingContentHeadroom:(double)a0;
- (void)_release;
- (double)blackComponent;
- (double)blueComponent;
- (double)brightnessComponent;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (double)cyanComponent;
- (void)getComponents:(double *)a0;
- (void)getCyan:(double *)a0 magenta:(double *)a1 yellow:(double *)a2 black:(double *)a3 alpha:(double *)a4;
- (double)greenComponent;
- (double)hueComponent;
- (id)initWithColorSpace:(id)a0 components:(const double *)a1 count:(long long)a2;
- (id)initWithColorSpace:(id)a0 components:(const double *)a1 count:(long long)a2 headroom:(double)a3;
- (BOOL)isUniform;
- (double)magentaComponent;
- (double)redComponent;
- (double)saturationComponent;
- (double)whiteComponent;

@end
