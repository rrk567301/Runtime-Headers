@class CIImage, CIVector;

@interface CUISDFClamp : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputFrame;

- (id)outputImage;

@end
