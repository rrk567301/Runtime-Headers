@class CIImage, CIColor;

@interface CIWhitePointAdjust : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIColor *inputColor;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (BOOL)_isIdentity;

@end
