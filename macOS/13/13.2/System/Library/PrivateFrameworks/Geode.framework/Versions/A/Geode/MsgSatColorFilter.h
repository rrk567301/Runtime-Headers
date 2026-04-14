@interface MsgSatColorFilter : MsgImageFilter

+ (id)filterName;
+ (id)kernelArray;
+ (id)smartSaturate:(id)a0 amount:(float)a1;
+ (id)colorContrast:(id)a0 amount:(float)a1;
+ (id)colorContrastDarken:(id)a0 amount:(float)a1;
+ (id)smartVibrancy:(id)a0 amount:(float)a1;
+ (id)colorCast:(id)a0 amount:(float)a1;

@end
