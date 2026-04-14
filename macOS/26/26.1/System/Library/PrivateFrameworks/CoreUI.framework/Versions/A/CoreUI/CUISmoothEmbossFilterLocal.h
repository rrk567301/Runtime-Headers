@class CIImage, NSNumber, CIColor;

@interface CUISmoothEmbossFilterLocal : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputAngle;
@property (retain, nonatomic) NSNumber *inputAltitude;
@property (retain, nonatomic) CIColor *inputHighlightColor;
@property (retain, nonatomic) CIColor *inputShadowColor;

+ (id)filterWithName:(id)a0;

- (id)outputImage;
- (void)dealloc;
- (id)customAttributes;

@end
