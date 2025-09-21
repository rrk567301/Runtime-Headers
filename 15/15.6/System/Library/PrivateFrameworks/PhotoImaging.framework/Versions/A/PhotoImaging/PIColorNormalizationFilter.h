@class CIImage, PFStoryRecipeDisplayAssetNormalization;

@interface PIColorNormalizationFilter : CIFilter

@property (class, readonly, nonatomic, getter=isAnalysisAvailable) char analysisAvailable;

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) PFStoryRecipeDisplayAssetNormalization *inputNormalization;
@property (readonly, nonatomic) PFStoryRecipeDisplayAssetNormalization *outputNormalization;

+ (id)logger;
+ (id)colorCubeForNormalization:(id)a0 dimension:(long long)a1 targetColorSpace:(struct CGColorSpace { } *)a2;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)outputImage;

@end
