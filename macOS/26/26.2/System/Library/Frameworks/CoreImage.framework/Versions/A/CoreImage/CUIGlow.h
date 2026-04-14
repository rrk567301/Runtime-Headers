@class CIImage, NSNumber, CIColor;

@interface CUIGlow : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputRadius;
@property (copy, nonatomic) NSNumber *inputBiasAmount;
@property (retain, nonatomic) CIColor *inputColor;
@property (copy, nonatomic) NSNumber *inputSDFScale;
@property (copy, nonatomic) NSNumber *inputSDFZero;
@property (copy, nonatomic) NSNumber *inputMaskOpposite;

+ (id)customAttributes;

- (id)outputImage;

@end
