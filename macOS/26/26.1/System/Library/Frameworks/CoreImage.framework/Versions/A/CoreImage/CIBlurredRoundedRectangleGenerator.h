@class CIVector, NSNumber, CIColor;

@interface CIBlurredRoundedRectangleGenerator : CIFilter

@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputSmoothness;
@property (retain, nonatomic) NSNumber *inputSigma;
@property (retain, nonatomic) CIColor *inputColor;

+ (id)customAttributes;

- (id)outputImage;

@end
