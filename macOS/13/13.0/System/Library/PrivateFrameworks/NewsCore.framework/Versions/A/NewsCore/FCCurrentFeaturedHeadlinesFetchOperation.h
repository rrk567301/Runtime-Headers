@class NSArray;
@protocol FCFeedTransforming, FCContentContext;

@interface FCCurrentFeaturedHeadlinesFetchOperation : FCOperation {
    BOOL _useFallbackArticleSource;
    id<FCContentContext> _context;
    id<FCFeedTransforming> _transformation;
    NSArray *_resultHeadlines;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)initWithContext:(id)a0 transformation:(id)a1;
- (id)initWithContext:(id)a0 transformation:(id)a1 useFallbackArticleSource:(BOOL)a2;

@end
