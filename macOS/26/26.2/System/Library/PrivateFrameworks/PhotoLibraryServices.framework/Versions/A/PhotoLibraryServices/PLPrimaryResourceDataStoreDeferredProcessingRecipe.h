@interface PLPrimaryResourceDataStoreDeferredProcessingRecipe : PLResourceRecipe

@property (nonatomic) unsigned int recipeID;

- (id)colorSpaceGivenSourceColorSpace:(id)a0 inContext:(id)a1;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)initWithRecipeID:(unsigned int)a0;
- (id)description;
- (BOOL)isMarkedFullSize;
- (void)generateAndStoreForAsset:(id)a0 options:(id)a1 progress:(id *)a2 completion:(id /* block */)a3;

@end
