@class CIImage, NSNumber;

@interface CISepiaTone : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputIntensity;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (BOOL)_isIdentity;

@end
