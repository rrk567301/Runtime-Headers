@interface _NSTaggedPointerColor : NSColor

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)setFill;
- (long long)type;
- (unsigned long long)hash;
- (id)colorWithAlphaComponent:(double)a0;
- (id)colorSpace;
- (id)colorSpaceName;
- (void)getWhite:(double *)a0 alpha:(double *)a1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (struct CGColor { } *)CGColor;
- (void)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (void)set;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (void)setStroke;
- (long long)numberOfComponents;
- (double)alphaComponent;
- (void)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (BOOL)isEqual:(id)a0;
- (id)colorUsingType:(long long)a0;
- (id)colorByApplyingContentHeadroom:(double)a0;
- (BOOL)_isNSTaggedPointerColor;
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
