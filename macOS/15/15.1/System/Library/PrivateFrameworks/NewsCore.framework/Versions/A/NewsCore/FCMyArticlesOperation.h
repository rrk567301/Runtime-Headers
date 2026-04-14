@class FCMyArticlesTiming, FCCloudContext, NSArray, NSDictionary, FCDateRange;
@protocol FCForYouQuerySidecar, FCCoreConfiguration;

@interface FCMyArticlesOperation : FCOperation {
    NSArray *_resultFeedItems;
    NSDictionary *_resultFeedContextByFeedID;
    double _timeSpentScoring;
}

@property (copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (copy, nonatomic) FCDateRange *dateRange;
@property (retain, nonatomic) id<FCForYouQuerySidecar> sidecar;
@property (nonatomic) BOOL includeEvergreenFeedItems;
@property (nonatomic) long long binOverride;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ feedItemCompletionBlock;
@property (nonatomic) unsigned long long maxNumberOfFeedsToQuery;
@property (nonatomic) unsigned long long perFeedLimit;
@property (readonly, nonatomic) FCMyArticlesTiming *timing;

+ (BOOL)prewarmDateRange:(id)a0 context:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;

@end
