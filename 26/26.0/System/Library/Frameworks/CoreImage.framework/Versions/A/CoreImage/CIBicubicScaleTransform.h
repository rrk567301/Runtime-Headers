@class CIImage, NSNumber;

@interface CIBicubicScaleTransform : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) NSNumber *inputAspectRatio;
@property (retain, nonatomic) NSNumber *inputB;
@property (retain, nonatomic) NSNumber *inputC;

+ (id)customAttributes;

- (struct vec2 { })_scale;
- (id)outputImage;
- (BOOL)_isIdentity;

@end
