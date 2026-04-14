@class CIImage, CIVector;

@interface CIColorCrossPolynomial : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputRedCoefficients;
@property (retain, nonatomic) CIVector *inputGreenCoefficients;
@property (retain, nonatomic) CIVector *inputBlueCoefficients;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)outputImage;
- (id)_kernel;

@end
