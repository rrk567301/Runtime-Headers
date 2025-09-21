@class CIImage;

@interface CUIComputeNormals : CIFilter

@property (retain, nonatomic) CIImage *inputImage;

- (id)outputImage;

@end
