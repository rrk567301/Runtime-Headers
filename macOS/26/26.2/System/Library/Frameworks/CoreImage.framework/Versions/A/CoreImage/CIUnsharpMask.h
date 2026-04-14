@class CIImage, NSNumber;

@interface CIUnsharpMask : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputIntensity;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)outputImage;
- (id)_kernel;

@end
