@class CIImage;

@interface CIBlendWithMask : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputBackgroundImage;
@property (retain, nonatomic) CIImage *inputMaskImage;

+ (id)customAttributes;

- (id)_kernelB0;
- (id)outputImage;
- (id)_kernel;
- (float)_maskFillColorValue;

@end
