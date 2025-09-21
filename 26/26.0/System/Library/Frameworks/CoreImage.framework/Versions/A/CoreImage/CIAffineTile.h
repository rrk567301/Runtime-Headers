@class CIImage, NSAffineTransform;

@interface CIAffineTile : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSAffineTransform *inputTransform;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
