@class CIImage, NSNumber;

@interface CIBloom : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputIntensity;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (BOOL)_isIdentity;

@end
