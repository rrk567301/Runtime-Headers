@class CIImage, NSNumber;

@interface CIColorPosterize : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputLevels;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)outputImage;
- (id)_kernel;

@end
