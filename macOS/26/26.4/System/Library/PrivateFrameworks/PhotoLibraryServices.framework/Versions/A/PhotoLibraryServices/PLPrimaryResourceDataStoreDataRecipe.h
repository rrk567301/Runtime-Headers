@interface PLPrimaryResourceDataStoreDataRecipe : PLResourceRecipe

@property (nonatomic) unsigned int recipeID;

- (id)chooseIngredientsFrom:(id)a0 version:(unsigned int)a1;
- (id)uti;
- (id)codecFourCharCodeName;
- (id)colorSpaceGivenSourceColorSpace:(id)a0 inContext:(id)a1;
- (id)description;
- (id)supportedVersionsForLocalResourceGeneration;
- (void)generateAndStoreForAsset:(id)a0 options:(id)a1 progress:(id *)a2 completion:(id /* block */)a3;
- (id)initWithRecipeID:(unsigned int)a0;

@end
