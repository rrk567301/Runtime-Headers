@class CIImage, NSNumber;

@interface CUIClampHDR : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputMaxComponent;

- (id)outputImage;

@end
