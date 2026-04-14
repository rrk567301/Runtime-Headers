@class CIImage, NSNumber, CIVector;

@interface CUIShapeAwareGradientMask : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputBorderWidth;
@property (retain, nonatomic) NSNumber *inputMinOpacity;
@property (retain, nonatomic) CIVector *inputOpaqueEnd;
@property (retain, nonatomic) NSNumber *inputLength;
@property (retain, nonatomic) CIVector *inputLightDirection;
@property (retain, nonatomic) NSNumber *inputSDFScale;
@property (retain, nonatomic) NSNumber *inputSDFZero;

- (id)outputImage;

@end
