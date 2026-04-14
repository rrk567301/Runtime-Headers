@interface _NSTaggedPointerColor : NSColor

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (void)setStroke;
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
