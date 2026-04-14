@class CPLBatchExtractionStrategy, CPLEngineScope, CPLTransportScopeMapping, NSObject;
@protocol OS_dispatch_queue, CPLEngineTransportFixUpSparseRecordTask;

@interface CPLMingleChangesScopeTask : CPLEngineScopedTask {
    NSObject<OS_dispatch_queue> *_lock;
    CPLBatchExtractionStrategy *_extractionStrategy;
    CPLEngineScope *_sharedScope;
    CPLTransportScopeMapping *_transportScopeMapping;
    id<CPLEngineTransportFixUpSparseRecordTask> _fixUpTask;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    BOOL _didNotifySchedulerPullQueueIsFullOnce;
    BOOL _needsToNotifySchedulerPullQueueIsFull;
    unsigned long long _minglingCount;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)launch;
- (id)taskIdentifier;
- (BOOL)checkScopeIsValidInTransaction:(id)a0;
- (void)taskDidFinishWithError:(id)a0;
- (id)initWithEngineLibrary:(id)a0 session:(id)a1 clientCacheIdentifier:(id)a2 scope:(id)a3 transportScope:(id)a4;
- (void)_reallyNotifySchedulerPullQueueIsFull;
- (void)_notifySchedulerPullQueueIsFullInTransaction:(id)a0;
- (void)_notifySchedulerPullQueueIsFullNowIfNecessary;
- (void)_noteBatchWasAddedInPullQueue:(id)a0 fromBatch:(id)a1 transaction:(id)a2;
- (void)_finishMingling;
- (void)_mingleOtherChanges;
- (void)_acknownledgeFixUpTasks:(id)a0;
- (void)_fixUpPrivateRecordsPointingToRemappedSharedRecords:(id)a0;
- (void)_mingleSharedRemappings;
- (void)_mingleRemappings;

@end
