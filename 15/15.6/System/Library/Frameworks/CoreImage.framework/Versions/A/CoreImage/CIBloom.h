@class CIImage, NSNumber;

@interface CIBloom : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputIntensity;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;
- (char)_isIdentity;

@end
