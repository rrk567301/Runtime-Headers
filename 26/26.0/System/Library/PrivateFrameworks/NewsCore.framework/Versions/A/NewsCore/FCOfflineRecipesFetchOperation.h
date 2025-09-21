@class FCOfflineDownloadsConfiguration, NSArray, FCThreadSafeMutableArray, NSObject;
@protocol OS_dispatch_queue, FCContentContext;

@interface FCOfflineRecipesFetchOperation : FCOperation <FCOfflineFetchOperationType> {
    id<FCContentContext> _context;
    NSArray *_recipeIDs;
    FCOfflineDownloadsConfiguration *_config;
    FCThreadSafeMutableArray *_resultInterestTokens;
}

@property (nonatomic) unsigned long long maxBatchSize;
@property (nonatomic) BOOL cachedOnly;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressQueue;
@property (copy, nonatomic) id /* block */ archiveHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *archiveQueue;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchCompletionQueue;

- (void)performOperation;
- (void)prepareOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 recipeID:(id)a1;
- (id)initWithContext:(id)a0 recipeIDs:(id)a1;

@end
