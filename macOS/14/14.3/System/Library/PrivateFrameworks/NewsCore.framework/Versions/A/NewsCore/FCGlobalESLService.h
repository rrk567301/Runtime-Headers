@class FCCloudContext;

@interface FCGlobalESLService : NSObject <FCFeedItemServiceType>

@property (readonly, nonatomic) FCCloudContext *context;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)_promiseConfiguration;
- (id)_promiseCuratedFeedItemsWithConfiguration:(id)a0;
- (id)_promiseFeedItemsWithIssues:(id)a0 configuration:(id)a1;
- (id)_promiseIssueFeedItemsWithConfiguration:(id)a0;
- (id)_promiseIssuesWithConfiguration:(id)a0;
- (void)fetchFeedItemsWithCompletion:(id /* block */)a0;

@end
