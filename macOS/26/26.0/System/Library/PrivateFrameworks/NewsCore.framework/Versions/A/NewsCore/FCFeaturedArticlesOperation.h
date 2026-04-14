@class NSArray;
@protocol FCContentContext;

@interface FCFeaturedArticlesOperation : FCOperation {
    NSArray *_networkEvents;
    id<FCContentContext> _context;
    NSArray *_resultFeedItems;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;
@property (readonly, nonatomic) NSArray *networkEvents;

- (void)performOperation;
- (id)initWithContext:(id)a0;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (id)init;
- (void).cxx_destruct;

@end
