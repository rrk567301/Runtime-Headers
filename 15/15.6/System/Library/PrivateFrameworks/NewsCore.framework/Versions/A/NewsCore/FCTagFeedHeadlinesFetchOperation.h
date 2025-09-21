@class FCFeedRange, NSArray, FCCloudContext, NSSet, NSDate, FCFeedDescriptor;
@protocol FCFeedPersonalizing, FCCoreConfiguration;

@interface FCTagFeedHeadlinesFetchOperation : FCOperation {
    char _fetchOrdinaryItemsFromCache;
    char _resultFinished;
    id<FCCoreConfiguration> _configuration;
    FCCloudContext *_cloudContext;
    FCFeedDescriptor *_feedDescriptor;
    id<FCFeedPersonalizing> _personalizer;
    NSSet *_shownArticleIDs;
    NSSet *_shownClusterIDs;
    NSArray *_resultOrdinaryHeadlines;
    FCFeedRange *_resultFetchedFreeRange;
    FCFeedRange *_resultFetchedPaidRange;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;
@property (copy, nonatomic) NSDate *topOfFeedDate;
@property (copy, nonatomic) FCFeedRange *freeFeedRange;
@property (copy, nonatomic) FCFeedRange *paidFeedRange;
@property (nonatomic) long long maxFetchCount;
@property (copy, nonatomic) NSArray *precedingHeadlines;

- (void).cxx_destruct;
- (void)performOperation;
- (unsigned long long)maxRetries;
- (char)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (void)resetForRetry;
- (id)initWithConfiguration:(id)a0 cloudContext:(id)a1 feedDescriptor:(id)a2 personalizer:(id)a3;

@end
