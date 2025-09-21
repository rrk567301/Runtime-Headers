@class NSDate, NSString, NSError, FPDExtension, NSObject, FPDSharedSystemScheduler, FPDDomainIndexerState, FPDDomain;
@protocol OS_dispatch_group, OS_dispatch_source, OS_dispatch_queue, FPDDomainIndexerDelegate;

@interface FPDDomainIndexer : NSObject <FPDSharedSystemSchedulerWatcher> {
    NSString *_providerDomainID;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_group> *_stableGroup;
    char _isIndexing;
    char _enabled;
    char _invalidated;
    char _isStarted;
    char _clearNeedsIndexing;
    unsigned long long _batchIndexedCount;
    unsigned long long _batchIndexedCountSinceLastIndexing;
    unsigned long long _consecutiveBatchErrorCount;
    NSDate *_lastIndexingStartDate;
    NSError *_lastError;
    NSString *_spotlightDomainIdentifier;
    char _registeredWithScheduler;
}

@property (class, readonly, nonatomic) FPDSharedSystemScheduler *indexingScheduler;

@property (weak, nonatomic) FPDExtension *extension;
@property (retain, nonatomic) FPDDomainIndexerState *state;
@property (readonly, nonatomic) char needsAuthentication;
@property (readonly, nonatomic) char learnNeedsAuthenticationFromBatchError;
@property (retain, nonatomic) NSString *domainIdentifier;
@property (weak, nonatomic) id<FPDDomainIndexerDelegate> delegate;
@property (nonatomic) unsigned long long maxRetryDelayInSec;
@property (readonly, nonatomic) char isIndexed;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) FPDDomain *domain;
@property (readonly, nonatomic) NSString *watcherLabel;

- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (void)start;
- (void)_cancelTimer;
- (void)dumpStateTo:(id)a0;
- (void)indexOneBatchWithCompletionHandler:(id /* block */)a0;
- (void)setIndexingEnabled:(char)a0 completionHandler:(id /* block */)a1;
- (char)needsIndexing;
- (void)__indexOneBatchIfPossibleClearingNeedsIndexing:(char)a0;
- (void)_handleOneBatchCompletionWithError:(id)a0 hasMoreChanges:(char)a1;
- (void)_indexOneBatchIfPossibleClearingNeedsIndexing:(char)a0;
- (void)_signalChangesWithCompletionHandler:(id /* block */)a0;
- (void)_unregisterFromScheduler;
- (void)clearNeedsAuth;
- (void)dropIndexForReason:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)dumpStateTo:(id)a0 withName:(id)a1;
- (id)initWithExtension:(id)a0 domain:(id)a1 enabled:(char)a2;
- (id)localSpotlightIndexer;
- (void)setNeedsAuth;
- (void)sharedSchedulerCanRun:(id)a0;
- (void)sharedSchedulerIsDeferred:(id)a0;
- (void)signalChangesWithCompletionHandler:(id /* block */)a0;
- (void)signalNeedsReindexFromScratchWithDropReason:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)signalNeedsReindexItemsWithIdentifiers:(id)a0 indexReason:(long long)a1 completionHandler:(id /* block */)a2;

@end
