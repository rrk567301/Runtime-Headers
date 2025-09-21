@class CIImage, NSNumber;

@interface CIFaceBalance : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputOrigI;
@property (retain, nonatomic) NSNumber *inputOrigQ;
@property (retain, nonatomic) NSNumber *inputStrength;
@property (retain, nonatomic) NSNumber *inputWarmth;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;
- (id)_initFromProperties:(id)a0;
- (char)_isIdentity;
- (id)_outputProperties;

@end
