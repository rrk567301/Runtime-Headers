@class CIImage, CIVector, NSNumber;

@interface CIConvolution9Horizontal : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputWeights;
@property (retain, nonatomic) NSNumber *inputBias;

+ (id)customAttributes;

- (id)outputImage;
- (char)_isIdentity;

@end
