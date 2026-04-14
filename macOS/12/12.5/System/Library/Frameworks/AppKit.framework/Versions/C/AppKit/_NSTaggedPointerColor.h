@interface _NSTaggedPointerColor : NSColor

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)set;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (long long)type;
- (struct CGColor { } *)CGColor;
- (void)setStroke;
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
- (void)setFill;
- (void)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (double)whiteComponent;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (double)hueComponent;
- (double)saturationComponent;
- (double)brightnessComponent;

@end
