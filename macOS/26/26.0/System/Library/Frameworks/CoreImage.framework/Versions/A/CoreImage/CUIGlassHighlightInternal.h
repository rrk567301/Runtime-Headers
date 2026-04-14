@class CIVector, CIColor, CIImage, NSNumber;

@interface CUIGlassHighlightInternal : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputHeight;
@property (retain, nonatomic) NSNumber *inputInset;
@property (retain, nonatomic) NSNumber *inputSpread;
@property (retain, nonatomic) NSNumber *inputBiasAmount;
@property (retain, nonatomic) NSNumber *inputCurvature;
@property (retain, nonatomic) CIVector *inputAngleSinCos;
@property (retain, nonatomic) CIColor *inputColor;
@property (retain, nonatomic) NSNumber *inputSDFScaleFactor;
@property (retain, nonatomic) NSNumber *inputSDFZeroValue;
@property (retain, nonatomic) CIVector *inputCenter;

- (id)_kernel;
- (id)outputImage;

@end
