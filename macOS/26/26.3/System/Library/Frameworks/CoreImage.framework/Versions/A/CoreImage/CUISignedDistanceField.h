@class CIImage, NSNumber;

@interface CUISignedDistanceField : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputMaxDistance;

- (id)outputImage;
- (id)_remappingKernel;

@end
