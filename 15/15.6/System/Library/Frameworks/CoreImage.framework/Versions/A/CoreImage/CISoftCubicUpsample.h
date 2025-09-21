@class CIImage, NSNumber;

@interface CISoftCubicUpsample : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputScale;

+ (id)customAttributes;

- (id)outputImage;
- (char)_isIdentity;
- (struct vec2 { })_scale;

@end
