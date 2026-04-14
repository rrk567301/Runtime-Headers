@class CIImage, CIColor, NSString;

@interface PIColorWashFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIColor *inputColor;
@property (retain, nonatomic) NSString *inputMode;

+ (id)customAttributes;
+ (id)colorWashKernels;
+ (id)hueChromaColorWashKernel;
+ (id)hueChromaFixedColorWashKernel;
+ (id)hueChromaVariableColorWashKernel;
+ (id)colorWashFixedKernel;
+ (id)colorWashVariableKernel;
+ (id)colorWashFixedSmoothKernel;
+ (id)colorWashVariableSmoothKernel;

- (void).cxx_destruct;
- (id)outputImage;

@end
