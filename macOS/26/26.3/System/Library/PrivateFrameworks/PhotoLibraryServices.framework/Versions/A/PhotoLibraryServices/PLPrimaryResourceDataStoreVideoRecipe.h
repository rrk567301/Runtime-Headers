@interface PLPrimaryResourceDataStoreVideoRecipe : PLResourceRecipe

@property (nonatomic) unsigned int recipeID;

- (id)initWithRecipeID:(unsigned int)a0;
- (id)colorSpaceGivenSourceColorSpace:(id)a0 inContext:(id)a1;
- (id)chooseIngredientsFrom:(id)a0 version:(unsigned int)a1;
- (BOOL)isMarkedFullSize;
- (id)expectedFileURLForVersion:(unsigned int)a0 asset:(id)a1;
- (id)description;
- (id)uti;
- (id)codecFourCharCodeName;
- (void)generateAndStoreForAsset:(id)a0 options:(id)a1 progress:(id *)a2 completion:(id /* block */)a3;
- (id)supportedVersionsForLocalResourceGeneration;
- (void)_generateAndStoreUsingMediaConversionServicesForAsset:(id)a0 version:(unsigned int)a1 conversionClient:(id)a2 conversionServiceOptions:(id)a3 isHighPriority:(BOOL)a4 progress:(id *)a5 reason:(id)a6 completion:(id /* block */)a7;
- (id)_mediaConversionServiceOptionsForAsset:(id)a0 conversionServiceOptions:(id)a1 adjustmentData:(id)a2 largeAdjustmentData:(id)a3 isHighPriority:(BOOL)a4 reason:(id)a5;

@end
