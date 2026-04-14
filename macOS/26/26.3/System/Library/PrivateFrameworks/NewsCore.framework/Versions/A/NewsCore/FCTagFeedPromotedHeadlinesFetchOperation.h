@class FCCloudContext, NSString, NSArray;
@protocol FCCoreConfiguration;

@interface FCTagFeedPromotedHeadlinesFetchOperation : FCOperation {
    id<FCCoreConfiguration> _configuration;
    FCCloudContext *_cloudContext;
    NSString *_tagID;
    double _expireAfterTimeWindow;
    NSArray *_resultHeadlines;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudContext:(id)a1 tagID:(id)a2 expireAfterTimeWindow:(double)a3;

@end
