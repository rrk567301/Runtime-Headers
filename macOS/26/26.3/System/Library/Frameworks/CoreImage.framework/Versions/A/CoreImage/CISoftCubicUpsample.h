@class CIImage, NSNumber;

@interface CISoftCubicUpsample : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputScale;

+ (id)customAttributes;

- (struct vec2 { })_scale;
- (BOOL)_isIdentity;
- (id)outputImage;

@end
