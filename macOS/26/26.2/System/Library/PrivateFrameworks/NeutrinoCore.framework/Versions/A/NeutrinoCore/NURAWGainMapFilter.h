@class CIImage, NSNumber;

@interface NURAWGainMapFilter : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputGain;

+ (id)gainMapKernel;

- (id)outputImage;
- (void).cxx_destruct;

@end
