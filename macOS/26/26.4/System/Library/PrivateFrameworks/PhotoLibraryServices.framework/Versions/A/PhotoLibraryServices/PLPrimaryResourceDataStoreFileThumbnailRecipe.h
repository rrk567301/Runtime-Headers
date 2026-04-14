@interface PLPrimaryResourceDataStoreFileThumbnailRecipe : PLPrimaryResourceDataStoreImageRecipe

@property (nonatomic) unsigned int recipeID;

- (id)expectedFileURLForVersion:(unsigned int)a0 asset:(id)a1;
- (id)chooseIngredientsFrom:(id)a0 version:(unsigned int)a1;
- (id)uti;
- (struct CGSize { double x0; double x1; })sizeForAssetWidth:(long long)a0 height:(long long)a1;
- (double)_longSideTargetLength;
- (BOOL)_isAspectShortSizing;
- (id)colorSpaceGivenSourceColorSpace:(id)a0 inContext:(id)a1;
- (double)_shortSideTargetLength;
- (id)description;
- (id)supportedVersionsForLocalResourceGeneration;
- (void)generateAndStoreForAsset:(id)a0 options:(id)a1 progress:(id *)a2 completion:(id /* block */)a3;
- (id)initWithRecipeID:(unsigned int)a0;

@end
