@class CIImage, NSNumber;

@interface CUISDFFill : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) NSNumber *inputBias;

- (id)outputImage;

@end
