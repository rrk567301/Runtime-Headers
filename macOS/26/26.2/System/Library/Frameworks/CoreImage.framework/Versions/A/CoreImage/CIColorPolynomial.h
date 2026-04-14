@class CIImage, CIVector;

@interface CIColorPolynomial : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputRedCoefficients;
@property (retain, nonatomic) CIVector *inputGreenCoefficients;
@property (retain, nonatomic) CIVector *inputBlueCoefficients;
@property (retain, nonatomic) CIVector *inputAlphaCoefficients;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)outputImage;
- (id)_kernel;
- (BOOL)_isIdentityAlpha;
- (id)_kernelRGB;

@end
