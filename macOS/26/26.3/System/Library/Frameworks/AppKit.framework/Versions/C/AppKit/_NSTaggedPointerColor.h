@interface _NSTaggedPointerColor : NSColor

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (id)colorWithAlphaComponent:(double)a0;
- (double)alphaComponent;
- (void)getWhite:(double *)a0 alpha:(double *)a1;
- (void)setStroke;
- (void)set;
- (void)setFill;
- (long long)type;
- (id)colorSpaceName;
- (void)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (id)colorSpace;
- (struct CGColor { } *)CGColor;
- (id)description;
- (Class)classForCoder;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (long long)numberOfComponents;
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
