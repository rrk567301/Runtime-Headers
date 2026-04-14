@class CIImage, NSNumber;

@interface NUToneTransferFilter : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputSourceImage;
@property (retain) CIImage *inputTargetImage;
@property (retain) NSNumber *inputStrength;

+ (id)toneTransferKernel;

- (id)outputImage;
- (void).cxx_destruct;

@end
