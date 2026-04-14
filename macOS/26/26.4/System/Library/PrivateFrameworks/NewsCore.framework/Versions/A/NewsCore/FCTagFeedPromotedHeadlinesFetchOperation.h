@class FCCloudContext, NSString, NSArray;
@protocol FCCoreConfiguration;

@interface FCTagFeedPromotedHeadlinesFetchOperation : FCOperation {
    id<FCCoreConfiguration> _configuration;
    FCCloudContext *_cloudContext;
    NSString *_tagID;
    double _expireAfterTimeWindow;
    unsigned long long _filterOptions;
    NSArray *_resultHeadlines;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void)performOperation;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudContext:(id)a1 tagID:(id)a2 expireAfterTimeWindow:(double)a3 filterOptions:(unsigned long long)a4;

@end
