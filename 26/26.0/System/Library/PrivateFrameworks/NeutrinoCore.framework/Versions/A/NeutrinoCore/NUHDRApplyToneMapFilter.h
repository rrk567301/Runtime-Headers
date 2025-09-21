@class CIImage, NSNumber, NUColorSpace;

@interface NUHDRApplyToneMapFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputSourceHeadroom;
@property (retain, nonatomic) NSNumber *inputTargetHeadroom;
@property (retain, nonatomic) NUColorSpace *inputColorSpace;

- (id)outputImage;
- (void).cxx_destruct;

@end
