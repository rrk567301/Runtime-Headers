@interface PLPrimaryResourceDataStoreDataRecipe : PLResourceRecipe

@property (nonatomic) unsigned int recipeID;

- (id)uti;
- (id)colorSpaceGivenSourceColorSpace:(id)a0 inContext:(id)a1;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)initWithRecipeID:(unsigned int)a0;
- (id)description;
- (id)codecFourCharCodeName;
- (void)generateAndStoreForAsset:(id)a0 options:(id)a1 progress:(id *)a2 completion:(id /* block */)a3;
- (id)chooseIngredientsFrom:(id)a0 version:(unsigned int)a1;

@end
