@interface _NSTaggedPointerColor : NSColor

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (struct CGColor { } *)CGColor;
- (id)colorSpace;
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
- (void)getWhite:(double *)a0 alpha:(double *)a1;
- (id)description;
- (void)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)colorSpaceName;
- (id)colorByApplyingContentHeadroom:(double)a0;
- (id)colorUsingType:(long long)a0;
- (double)blueComponent;
- (double)brightnessComponent;
- (id)colorUsingColorSpace:(id)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (void)getComponents:(double *)a0;
- (double)greenComponent;
- (double)hueComponent;
- (double)redComponent;
- (double)saturationComponent;
- (double)whiteComponent;

@end
