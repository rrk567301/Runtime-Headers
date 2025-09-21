@class FCOfflineDownloadsConfiguration, NSString, FCThreadSafeMutableArray, NSObject;
@protocol OS_dispatch_queue, FCANFHelper, FCContentContext;

@interface FCOfflineArticleFetchOperation : FCOperation <FCOfflineFetchOperationType> {
    id<FCContentContext> _context;
    id<FCANFHelper> _ANFHelper;
    NSString *_articleID;
    FCOfflineDownloadsConfiguration *_config;
    FCThreadSafeMutableArray *_resultInterestTokens;
}

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
- (id)initWithContext:(id)a0 ANFHelper:(id)a1 articleID:(id)a2;
- (void).cxx_destruct;

@end
