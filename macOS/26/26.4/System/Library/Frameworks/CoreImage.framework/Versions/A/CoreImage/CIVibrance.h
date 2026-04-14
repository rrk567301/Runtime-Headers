@class CIImage, NSNumber;

@interface CIVibrance : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputAmount;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelNeg;
- (id)_kernelPos;
- (BOOL)_isIdentity;
- (id)_outputProperties;
- (id)_initFromProperties:(id)a0;

@end
