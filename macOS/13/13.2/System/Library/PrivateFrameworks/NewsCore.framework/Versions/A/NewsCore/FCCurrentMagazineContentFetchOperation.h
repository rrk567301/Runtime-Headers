@class FCCloudContext, NSArray, NSString, FCCachePolicy;
@protocol FCFeedTransforming;

@interface FCCurrentMagazineContentFetchOperation : FCOperation {
    FCCloudContext *_context;
    NSArray *_configIssueIDs;
    NSArray *_configArticleIDs;
    NSString *_trendingArticleListID;
    id<FCFeedTransforming> _currentHeadlinesTransformation;
    NSArray *_resultConfigIssues;
    NSArray *_resultConfigHeadlines;
    NSArray *_resultCurrentIssues;
    NSArray *_resultCurrentFeatureHeadlines;
    NSArray *_resultTrendingHeadlines;
}

@property (retain, nonatomic) FCCachePolicy *cachedPolicy;
@property (nonatomic) long long contentOptions;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)initWithContext:(id)a0 configIssueIDs:(id)a1 configArticleIDs:(id)a2 trendingArticleListID:(id)a3 currentHeadlinesTransformation:(id)a4;

@end
