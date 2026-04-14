@class CIImage, NSNumber, CIVector;

@interface CUISimplifiedShapeAwareGradientMask : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputBorderWidth;
@property (retain, nonatomic) CIVector *inputOpacityBounds;
@property (retain, nonatomic) CIVector *inputContourOpacityBounds;
@property (retain, nonatomic) NSNumber *inputSDFScale;
@property (retain, nonatomic) NSNumber *inputSDFZero;
@property (retain, nonatomic) CIVector *inputBounds;

- (id)outputImage;

@end
