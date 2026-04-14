@class PLLocalVideoKeyFrameJobQueue;

@interface PLPrimaryResourceDataStoreLocalVideoKeyFrameRecipe : PLResourceRecipe {
    PLLocalVideoKeyFrameJobQueue *_jobQueue;
}

+ (void)generateKeyFrameFromVideoURL:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 completion:(id /* block */)a2;
+ (void)generateKeyFrameFromVideoURL:(id)a0 destinationURL:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completion:(id /* block */)a3;

- (id)chooseIngredientsFrom:(id)a0 version:(unsigned int)a1;
- (void).cxx_destruct;
- (id)codecFourCharCodeName;
- (id)colorSpaceGivenSourceColorSpace:(id)a0 inContext:(id)a1;
- (void)_runNextJob;
- (unsigned int)recipeID;
- (void)generateAndStoreForAsset:(id)a0 options:(id)a1 progress:(id *)a2 completion:(id /* block */)a3;
- (id)initWithRecipeID:(unsigned int)a0;
- (void)_generateAndStoreForAsset:(id)a0 networkAccessAllowed:(BOOL)a1 clientBundleID:(id)a2 progress:(id *)a3 completion:(id /* block */)a4;
- (void)_handleJobFinished:(id)a0 withMutatedMoc:(id)a1 error:(id)a2 storedRecipes:(id)a3 affectedRecipes:(id)a4 sourceMetadata:(id)a5;
- (void)_handleKeyFrameGeneratedWithAsset:(id)a0 destinationURL:(id)a1 completion:(id /* block */)a2;

@end
