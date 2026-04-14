@interface _NSTaggedPointerColor : NSColor

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (void)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (id)colorSpaceName;
- (void)setStroke;
- (double)alphaComponent;
- (void)setFill;
- (void)set;
- (void)getWhite:(double *)a0 alpha:(double *)a1;
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
