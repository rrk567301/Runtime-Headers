@class CIImage, NSNumber;

@interface CIVibrance : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputAmount;

+ (id)customAttributes;

- (id)outputImage;
- (id)_initFromProperties:(id)a0;
- (char)_isIdentity;
- (id)_kernelNeg;
- (id)_kernelPos;
- (id)_outputProperties;

@end
