@class NSError;

@interface PXStoryNullPersistableRecipeWriter : NSObject <PXStoryPersistableRecipeWriter>

@property (readonly, nonatomic) NSError *error;

- (id)init;
- (void).cxx_destruct;
- (id)initWithError:(id)a0;
- (id)writePersistableRecipe:(id)a0 assetEdits:(id)a1 resultHandler:(id /* block */)a2;

@end
