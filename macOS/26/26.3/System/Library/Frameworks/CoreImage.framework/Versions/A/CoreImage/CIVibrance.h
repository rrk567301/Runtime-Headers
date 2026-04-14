@class CIImage, NSNumber;

@interface CIVibrance : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputAmount;

+ (id)customAttributes;

- (id)_initFromProperties:(id)a0;
- (BOOL)_isIdentity;
- (id)_kernelNeg;
- (id)outputImage;
- (id)_kernelPos;
- (id)_outputProperties;

@end
