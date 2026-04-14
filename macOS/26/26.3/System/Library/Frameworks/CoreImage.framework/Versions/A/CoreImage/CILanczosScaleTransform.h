@class CIImage, NSNumber;

@interface CILanczosScaleTransform : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) NSNumber *inputAspectRatio;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)outputImage;

@end
