@class CIImage, NSNumber;

@interface CIGloom : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputIntensity;

+ (id)customAttributes;

- (id)_kernel;
- (BOOL)_isIdentity;
- (id)outputImage;

@end
