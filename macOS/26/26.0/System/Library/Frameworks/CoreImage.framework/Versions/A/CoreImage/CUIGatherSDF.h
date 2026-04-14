@class CIImage, NSNumber;

@interface CUIGatherSDF : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputBelow;
@property (copy, nonatomic) NSNumber *inputAbove;

- (id)outputImage;

@end
