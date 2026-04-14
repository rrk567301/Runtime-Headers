@class NSArray, NSObject;
@protocol OS_dispatch_queue, FCContentContext;

@interface FCRecipeItemsOperation : FCOperation {
    NSArray *_networkEvents;
    id<FCContentContext> _context;
    NSArray *_recipeListIDs;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recipeItemHandlerQueue;
@property (copy, nonatomic) id /* block */ recipeItemHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSArray *networkEvents;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 recipeListIDs:(id)a1;

@end
