@interface PLPrimaryResourceDataStoreFileThumbnailRecipe : PLPrimaryResourceDataStoreImageRecipe

@property (nonatomic) unsigned int recipeID;

- (id)uti;
- (id)colorSpaceGivenSourceColorSpace:(id)a0 inContext:(id)a1;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)initWithRecipeID:(unsigned int)a0;
- (id)description;
- (id)expectedFileURLForVersion:(unsigned int)a0 asset:(id)a1;
- (BOOL)_isAspectShortSizing;
- (struct CGSize { double x0; double x1; })sizeForAssetWidth:(long long)a0 height:(long long)a1;
- (void)generateAndStoreForAsset:(id)a0 options:(id)a1 progress:(id *)a2 completion:(id /* block */)a3;
- (id)chooseIngredientsFrom:(id)a0 version:(unsigned int)a1;
- (double)_shortSideTargetLength;
- (double)_longSideTargetLength;

@end
