@class NSString, CPLBatchExtractionStrategy, CPLEngineScope, CPLTransportScopeMapping, CPLEngineTransientRepositoryBatchStorage, NSObject;
@protocol OS_dispatch_queue, CPLEngineTransportFixUpSparseRecordTask;

@interface CPLMingleChangesScopeTask : CPLEngineScopedTask <CPLEngineTransientRepositoryObserver> {
    NSObject<OS_dispatch_queue> *_lock;
    CPLEngineTransientRepositoryBatchStorage *_batchStorage;
    CPLBatchExtractionStrategy *_extractionStrategy;
    CPLEngineScope *_sharedScope;
    CPLTransportScopeMapping *_transportScopeMapping;
    id<CPLEngineTransportFixUpSparseRecordTask> _fixUpTask;
    char _shouldStashRecordsIfNecessary;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    char _didNotifySchedulerPullQueueIsFullOnce;
    char _needsToNotifySchedulerPullQueueIsFull;
    unsigned long long _minglingCount;
    char _isDoingInitialMingling;
    char _minglingHasBeenReset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)launch;
- (id)taskIdentifier;
- (void)_finishMingling;
- (char)checkScopeIsValidInTransaction:(id)a0;
- (void)_acknownledgeFixUpTasks:(id)a0;
- (id)_filteredBatchByStashingRecordsIfNecessary:(id)a0 error:(id *)a1;
- (void)_fixUpPrivateRecordsPointingToRemappedSharedRecords:(id)a0;
- (void)_mingleOtherChanges;
- (void)_mingleRemappings;
- (void)_mingleSharedRemappings;
- (void)_noteBatchWasAddedInPullQueue:(id)a0 fromBatch:(id)a1 transaction:(id)a2;
- (void)_notifySchedulerPullQueueIsFullInTransaction:(id)a0;
- (void)_notifySchedulerPullQueueIsFullNowIfNecessary;
- (void)_reallyNotifySchedulerPullQueueIsFull;
- (void)_unstashRecordsForScope:(id)a0;
- (id)initWithEngineLibrary:(id)a0 session:(id)a1 clientCacheIdentifier:(id)a2 scope:(id)a3 transportScope:(id)a4;
- (void)taskDidFinishWithError:(id)a0;
- (void)transientRepository:(id)a0 didResetMingledRecordsForScopesWithFiler:(id)a1;

@end
