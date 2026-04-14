@class CIImage, CIVector;

@interface CIStretch : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputPoint;
@property (retain, nonatomic) CIVector *inputSize;

+ (id)customAttributes;

- (void)setDefaults;
- (id)outputImage;
- (id)_kernel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeDOD:(struct vec4 { })a0;

@end
