@class NSArray, FCEdgeCacheHint;
@protocol FCContentContext;

@interface FCArticleListFeedItemsOperation : FCOperation {
    NSArray *_networkEvents;
    id<FCContentContext> _context;
    NSArray *_articleListIDs;
}

@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint;
@property (copy, nonatomic) id /* block */ feedItemHandler;
@property (copy, nonatomic) id /* block */ articleListHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSArray *networkEvents;

- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (void).cxx_destruct;
- (id)init;
- (id)initWithContext:(id)a0 articleListIDs:(id)a1;

@end
