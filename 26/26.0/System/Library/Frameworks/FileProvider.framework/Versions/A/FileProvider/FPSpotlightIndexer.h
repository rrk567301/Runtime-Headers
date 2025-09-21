@class NSData, NSString, FPXDomainContext, FPProviderDomain, CSSearchableIndex, NSOperationQueue, FPSpotlightFetchClientStateOperation, NSURL, NSObject, NSOperation, NSFileProviderDomain;
@protocol OS_os_log, OS_dispatch_workloop, FPSpotlightDropIndexDelegate, OS_dispatch_semaphore, NSFileProviderEnumerator;

@interface FPSpotlightIndexer : NSObject {
    NSString *_indexName;
    NSString *_domainID;
    NSString *_providerIdentifier;
    NSOperationQueue *_operationQueue;
    NSOperation *_currentOperation;
    unsigned long long _clientState;
    FPSpotlightFetchClientStateOperation *_fetchStateOperation;
    BOOL _isCanceled;
    NSObject<OS_dispatch_semaphore> *_clientStateSemaphore;
    NSURL *_supportURL;
    BOOL _paused;
    NSObject<OS_dispatch_semaphore> *_pausedStateSemaphore;
}

@property (readonly) id<NSFileProviderEnumerator> vendorEnumerator;
@property (readonly, nonatomic) NSObject<OS_dispatch_workloop> *workloop;
@property (readonly, nonatomic) CSSearchableIndex *index;
@property (readonly, nonatomic) NSData *lastIndexState;
@property (nonatomic, getter=isIndexing) BOOL indexing;
@property (retain, nonatomic) NSFileProviderDomain *domain;
@property (retain, nonatomic) FPProviderDomain *providerDomain;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (weak, nonatomic) FPXDomainContext *domainContext;
@property (readonly, weak, nonatomic) id<FPSpotlightDropIndexDelegate> dropIndexDelegate;

+ (void)setIndexerProperty:(id)a0 forKey:(id)a1 supportURL:(id)a2;
+ (id)indexerPropertyOfClass:(Class)a0 forKey:(id)a1 supportURL:(id)a2;

- (void)pause;
- (void)learnNewIndexState:(id)a0;
- (void)invalidateAsync;
- (void)dealloc;
- (void)_indexOneBatchFromAnchor:(id)a0 toAnchor:(id)a1 updatedItems:(id)a2 deletedItems:(id)a3 completionHandler:(id /* block */)a4;
- (void)_indexOneBatchWithCompletionHandler:(id /* block */)a0;
- (void)dumpStateTo:(id)a0;
- (void)clearIndexState;
- (void)invalidate;
- (void)_invalidate;
- (id)initWithDomain:(id)a0 providerDomain:(id)a1 indexName:(id)a2 log:(id)a3 supportURL:(id)a4 dropIndexDelegate:(id)a5;
- (void)indexOneBatchWithCompletionHandler:(id /* block */)a0;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)a0 indexReason:(long long)a1 completionHandler:(id /* block */)a2;
- (void)dropIndexInQueue:(id)a0 dropReason:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)resume;
- (id)initWithDomain:(id)a0 providerDomain:(id)a1 log:(id)a2 supportURL:(id)a3 dropIndexDelegate:(id)a4;
- (void)indexOutOfBandUpdatedItems:(id)a0 deletedItems:(id)a1 indexReason:(long long)a2 completionHandler:(id /* block */)a3;
- (void)_indexOutOfBandUpdatedItems:(id)a0 deletedItems:(id)a1 indexReason:(long long)a2 completionHandler:(id /* block */)a3;
- (id)description;
- (id)_fetchClientStateIfNeeded;
- (void)fetchCurrentIndexingAnchorWithCompletionHandler:(id /* block */)a0;
- (void)_fetchCurrentIndexingAnchorWithCompletionHandler:(id /* block */)a0;
- (void)dropIndexWithDropReason:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)indexOneBatchFromAnchor:(id)a0 toAnchor:(id)a1 updatedItems:(id)a2 deletedItems:(id)a3 completionHandler:(id /* block */)a4;
- (void)dropIndexAndInvalidateWithDropReason:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
