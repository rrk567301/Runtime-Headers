@class CIImage, NSNumber;

@interface CIVignette : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputIntensity;
@property (retain, nonatomic) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)_kernel;
- (BOOL)_isIdentity;
- (id)outputImage;

@end
