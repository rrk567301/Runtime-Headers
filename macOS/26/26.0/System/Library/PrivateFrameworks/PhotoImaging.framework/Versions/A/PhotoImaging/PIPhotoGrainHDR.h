@class CIImage, NSNumber;

@interface PIPhotoGrainHDR : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputISO;
@property (copy, nonatomic) NSNumber *inputAmount;
@property (copy, nonatomic) NSNumber *inputSeed;

+ (id)customAttributes;

- (id)_grainBlendAndMixKernel;
- (id)outputImage;
- (id)_paddedTileKernel;
- (id)_interpolateGrainKernel;
- (void).cxx_destruct;

@end
