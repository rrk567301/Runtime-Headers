@class CIImage, NSNumber;

@interface CUIDfDxDfDy : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputChannel;

- (id)outputImage;

@end
