@class CIImage, NSNumber;

@interface CIColorPosterize : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputLevels;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (BOOL)_isIdentity;

@end
