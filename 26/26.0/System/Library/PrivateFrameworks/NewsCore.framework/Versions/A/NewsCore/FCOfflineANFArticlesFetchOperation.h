@class NSArray, FCOfflineDownloadsConfiguration;
@protocol FCANFHelper, FCContentContext;

@interface FCOfflineANFArticlesFetchOperation : FCOperation {
    BOOL _cachedOnly;
    unsigned long long _maxBatchSize;
    unsigned long long _maxMissingArticles;
    id /* block */ _progressHandler;
    id /* block */ _interestTokenHandler;
    id /* block */ _archiveHandler;
    id /* block */ _articleRecordHandler;
    id /* block */ _fetchCompletionHandler;
    id<FCContentContext> _context;
    FCOfflineDownloadsConfiguration *_config;
    id<FCANFHelper> _ANFHelper;
    NSArray *_articleIDs;
    NSArray *_inputHeadlines;
}

- (void)performOperation;
- (void)prepareOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;

@end
