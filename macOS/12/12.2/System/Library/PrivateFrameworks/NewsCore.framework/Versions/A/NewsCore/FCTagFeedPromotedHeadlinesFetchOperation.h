@class FCCloudContext, FCFeedDescriptor, NSArray;
@protocol FCFeedPersonalizing, FCCoreConfiguration;

@interface FCTagFeedPromotedHeadlinesFetchOperation : FCOperation {
    id<FCCoreConfiguration> _configuration;
    FCCloudContext *_cloudContext;
    FCFeedDescriptor *_feedDescriptor;
    id<FCFeedPersonalizing> _personalizer;
    NSArray *_resultHeadlines;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)initWithConfiguration:(id)a0 cloudContext:(id)a1 feedDescriptor:(id)a2 personalizer:(id)a3;

@end
