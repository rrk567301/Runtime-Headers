@class CIImage, NSNumber;

@interface CIFaceBalance : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputOrigI;
@property (retain, nonatomic) NSNumber *inputOrigQ;
@property (retain, nonatomic) NSNumber *inputStrength;
@property (retain, nonatomic) NSNumber *inputWarmth;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)outputImage;
- (id)_kernel;
- (id)_outputProperties;
- (id)_initFromProperties:(id)a0;

@end
