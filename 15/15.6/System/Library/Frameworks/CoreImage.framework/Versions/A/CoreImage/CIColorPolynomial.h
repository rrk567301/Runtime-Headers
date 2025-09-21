@class CIImage, CIVector;

@interface CIColorPolynomial : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputRedCoefficients;
@property (retain, nonatomic) CIVector *inputGreenCoefficients;
@property (retain, nonatomic) CIVector *inputBlueCoefficients;
@property (retain, nonatomic) CIVector *inputAlphaCoefficients;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;
- (char)_isIdentity;
- (char)_isIdentityAlpha;
- (id)_kernelRGB;

@end
