@protocol PFStoryRecipe;

@interface PXStoryPassthroughPersistableRecipeProducer : NSObject <PXStoryPersistableRecipeProducer>

@property (readonly, nonatomic) id<PFStoryRecipe> persistableRecipe;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPersistableRecipe:(id)a0;
- (id)requestPersistableRecipeWithOptions:(unsigned long long)a0 resultHandler:(id /* block */)a1;

@end
