@class CIImage, CIColor, NSString;

@interface PIColorWashDuoFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIColor *inputShadowColor;
@property (retain, nonatomic) CIColor *inputHighlightColor;
@property (retain, nonatomic) NSString *inputMode;

+ (id)customAttributes;
+ (id)colorWashKernels;
+ (id)iptColorWashDuoKernel;
+ (id)iptColorWashDuoFixedKernel;
+ (id)iptColorWashDuoVariableKernel;
+ (id)hueChromaColorWashDuoKernel;
+ (id)hueChromaColorWashDuoFixedKernel;
+ (id)hueChromaColorWashDuoVariableKernel;
+ (id)rgbColorWashDuoKernel;
+ (id)rgbColorWashDuoFixedKernel;
+ (id)rgbColorWashDuoVariableKernel;

- (void).cxx_destruct;
- (id)outputImage;

@end
