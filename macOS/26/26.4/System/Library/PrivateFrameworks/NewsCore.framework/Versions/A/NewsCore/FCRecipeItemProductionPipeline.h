@class FCRecipeListRecordSource, NSMutableArray, FCRecipeList;
@protocol FCRecipeItemFactoryType;

@interface FCRecipeItemProductionPipeline : NSObject {
    id<FCRecipeItemFactoryType> _recipeItemFactory;
    FCRecipeListRecordSource *_recipeListRecordSource;
    id /* block */ _recipeItemHandler;
    FCRecipeList *_recipeList;
    NSMutableArray *_pendingRecipeRecords;
}

- (void).cxx_destruct;
- (void)_flushRecipeRecord:(id)a0;
- (id)initWithRecipeItemFactory:(id)a0 recipeListRecordSource:(id)a1 recipeItemHandler:(id /* block */)a2;
- (void)processRecipeListRecord:(id)a0;
- (void)processRecipeRecord:(id)a0;

@end
