@class CIImage, NSNumber;

@interface NUHDRDivideGainMapFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputLightMap;
@property (retain, nonatomic) NSNumber *inputPreserveColor;
@property (retain, nonatomic) NSNumber *inputMixFactor;

+ (id)lightMapDivideKernel;
+ (id)lightMapDivideRGBKernel;
+ (id)lightMapLogDivideKernel;
+ (id)lightMapLogDivideRGBKernel;

- (id)outputImage;
- (void).cxx_destruct;

@end
