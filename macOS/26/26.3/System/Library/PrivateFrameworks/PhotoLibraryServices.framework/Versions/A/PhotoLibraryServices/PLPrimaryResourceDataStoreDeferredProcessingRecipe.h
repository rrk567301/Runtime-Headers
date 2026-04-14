@interface PLPrimaryResourceDataStoreDeferredProcessingRecipe : PLResourceRecipe

@property (nonatomic) unsigned int recipeID;

- (id)initWithRecipeID:(unsigned int)a0;
- (id)colorSpaceGivenSourceColorSpace:(id)a0 inContext:(id)a1;
- (BOOL)isMarkedFullSize;
- (id)description;
- (void)generateAndStoreForAsset:(id)a0 options:(id)a1 progress:(id *)a2 completion:(id /* block */)a3;
- (id)supportedVersionsForLocalResourceGeneration;

@end
