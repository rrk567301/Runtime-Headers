@class NSString, CPLPlatformObject, CPLBatchExtractionStrategy, NSMutableDictionary, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface CPLEnginePushRepository : CPLEngineStorage <CPLAbstractObject, CPLBatchExtractionStrategyStorage> {
    NSMutableDictionary *_propertiesPerClass;
    CPLBatchExtractionStrategy *_extractionStrategy;
    NSString *_lastStrategyName;
    NSObject<OS_dispatch_queue> *_uploadRateQueue;
    NSObject<OS_dispatch_queue> *_timingStatisticQueue;
    NSDate *_lastUploadRateUpdateDate;
    NSMutableDictionary *_timingStatistics;
    double _lastApproximativeUploadRate;
    NSMutableDictionary *_pushObservers;
}

@property (readonly, nonatomic) BOOL shouldManageOutgoingResources;
@property (readonly, nonatomic) BOOL shouldManageExtractedBatch;
@property (retain, nonatomic) CPLBatchExtractionStrategy *extractionStrategy;
@property (readonly, nonatomic) unsigned long long maximumResourceSizePerBatch;
@property (readonly, nonatomic) unsigned long long maximumRecordCountPerBatch;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)status;
- (unsigned long long)scopeType;
- (id)allChangesWithClass:(Class)a0 relatedScopedIdentifier:(id)a1;
- (id)allChangesWithClass:(Class)a0 scopeIdentifier:(id)a1 changeType:(unsigned long long)a2;
- (id)allChangesWithScopeIdentifier:(id)a0;
- (id)allNonDeletedChangesWithClass:(Class)a0 scopeIdentifier:(id)a1;
- (BOOL)hasChangesInScopeWithIdentifier:(id)a0;
- (BOOL)removeChange:(id)a0 error:(id *)a1;
- (void)beginExtractingBatch;
- (void)cleanupAfterExtractingBatch;
- (id)allChangesWithClass:(Class)a0 scopeIdentifier:(id)a1 trashed:(BOOL)a2;
- (id)allChangesWithClass:(Class)a0 secondaryScopedIdentifier:(id)a1;
- (id)changeWithScopedIdentifier:(id)a0;
- (unsigned long long)effectiveResourceSizeToUploadForUploadIdentifier:(id)a0;
- (id)initWithEngineStore:(id)a0 name:(id)a1;
- (void)notePushRepositoryStoredSomeChanges;
- (id)_outgoingResources;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (unsigned long long)countOfChangesInScopeWithIdentifier:(id)a0;
- (BOOL)hasChangesWithScopeFilter:(id)a0;
- (BOOL)storeChange:(id)a0 pushContext:(id)a1 error:(id *)a2;
- (BOOL)reinjectChange:(id)a0 dequeueOrder:(long long)a1 overwrittenRecord:(BOOL *)a2 error:(id *)a3;
- (BOOL)hasSomeChangeWithScopedIdentifier:(id)a0;
- (BOOL)discardChangeWithScopedIdentifier:(id)a0 error:(id *)a1;
- (BOOL)deleteAllChangesWithError:(id *)a0;
- (BOOL)storeExtractedBatch:(id)a0 error:(id *)a1;
- (BOOL)reinjectExtractedBatch:(id)a0 overwrittenRecordIdentifiers:(id *)a1 error:(id *)a2;
- (id)storedExtractedBatch;
- (BOOL)hasChangesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (void)updateApproximativeUploadRate:(double)a0;
- (void)noteLastBatchWasTooLarge;
- (void)resetMaximumRecordCountPerBatchIfPossible;
- (void)updateTimingStatisticForKey:(id)a0 duration:(double)a1 recordCount:(unsigned long long)a2 error:(BOOL)a3 cancelled:(BOOL)a4;
- (id)_timingStatisticStatuses;
- (BOOL)getRelatedScopedIdentifier:(id *)a0 forRecordWithScopedIdentifier:(id)a1;
- (id)countPerFlagsForScopeWithIdentifier:(id)a0;
- (id)scopedIdentifiersForChangesWithFlag:(long long)a0 forScopeWithIdentifier:(id)a1;
- (BOOL)deleteSharingFlagsWithMaxCount:(unsigned long long)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (void)addPushObserver:(id /* block */)a0 withIdentifier:(id)a1;
- (void)removePushObserverWithIdentifier:(id)a0;

@end
