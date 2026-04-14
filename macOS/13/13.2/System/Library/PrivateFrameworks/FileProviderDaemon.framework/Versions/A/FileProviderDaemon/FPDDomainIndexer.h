@class FPDDomain, NSString, NSError, NSURL, NSDate, NSObject, FPDExtension;
@protocol FPDDomainIndexerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface FPDDomainIndexer : NSObject {
    NSString *_providerDomainID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timerSource;
    NSURL *_stateURL;
    NSURL *_needsAuthURL;
    NSURL *_droppedIndexURL;
    BOOL _needsIndexing;
    BOOL _isIndexing;
    BOOL _enabled;
    BOOL _invalidated;
    BOOL _isStarted;
    BOOL _clearNeedsIndexing;
    BOOL _droppedIndex;
    unsigned long long _batchIndexedCount;
    unsigned long long _batchIndexedCountSinceLastIndexing;
    unsigned long long _consecutiveBatchErrorCount;
    NSDate *_lastIndexingStartDate;
    NSError *_lastError;
    BOOL _registeredWithScheduler;
}

@property (weak, nonatomic) FPDExtension *extension;
@property (nonatomic) BOOL needsAuthentication;
@property (readonly, nonatomic) BOOL learnNeedsAuthenticationFromBatchError;
@property (retain, nonatomic) NSString *domainIdentifier;
@property (weak, nonatomic) id<FPDDomainIndexerDelegate> delegate;
@property (nonatomic) unsigned long long maxRetryDelayInSec;
@property (readonly, nonatomic) BOOL isIndexed;
@property (readonly, weak, nonatomic) FPDDomain *domain;

- (id)description;
- (void)invalidate;
- (void).cxx_destruct;
- (void)start;
- (void)_cancelTimer;
- (void)indexOneBatchWithCompletionHandler:(id /* block */)a0;
- (void)dumpStateTo:(id)a0;
- (id)initWithExtension:(id)a0 domain:(id)a1 enabled:(BOOL)a2;
- (void)_unregisterFromScheduler;
- (void)persistNeedsIndexingOnDisk;
- (void)clearNeedsIndexingOnDisk;
- (BOOL)readNeedsIndexingFromDisk;
- (void)clearNeedsAuth;
- (void)setNeedsAuth;
- (void)clearNeedsAuthOnDisk;
- (void)persistsNeedsAuthOnDisk;
- (BOOL)readNeedsAuthFromDisk;
- (void)persistDroppedIndexOnDisk;
- (void)clearDroppedIndexOnDisk;
- (BOOL)readDroppedIndexFromDisk;
- (void)_handleOneBatchCompletionWithError:(id)a0 hasMoreChanges:(BOOL)a1;
- (void)_indexOneBatchIfPossibleClearingNeedsIndexing:(BOOL)a0;
- (void)__indexOneBatchIfPossibleClearingNeedsIndexing:(BOOL)a0;
- (void)signalNeedsReindexFromScratchWithCompletionHandler:(id /* block */)a0;
- (id)localSpotlightIndexer;
- (BOOL)dropIndexWithError:(id *)a0;
- (void)dropIndexWithCompletion:(id /* block */)a0;
- (void)_signalChangesWithCompletionHandler:(id /* block */)a0;
- (void)signalChangesWithCompletionHandler:(id /* block */)a0;
- (void)setIndexingEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
