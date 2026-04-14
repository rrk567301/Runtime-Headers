@class NSString, NSMutableArray, CPLPlatformObject;

@interface CPLEngineChangePipe : CPLEngineStorage <CPLAbstractObject> {
    NSMutableArray *_dequeueObservers;
}

@property (readonly, nonatomic) unsigned long long countOfQueuedBatches;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)scopeType;
- (void)_notifyQueueRemovedChanges;
- (void)addDequeueObserver:(id)a0;
- (id)nextBatch;
- (BOOL)hasSomeChangeWithScopeFilter:(id)a0;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (BOOL)hasQueuedBatches;
- (id)allChangeBatches;
- (void).cxx_destruct;
- (BOOL)deleteAllChangesWithScopeFilter:(id)a0 error:(id *)a1;
- (BOOL)popNextBatchWithError:(id *)a0;
- (BOOL)hasSomeChangeInScopesWithIdentifiers:(id)a0;
- (id)addDequeueObserverWithDequeueSignalBlock:(id /* block */)a0;
- (BOOL)hasSomeChangeWithScopedIdentifier:(id)a0;
- (BOOL)compactChangeBatchesWithError:(id *)a0;
- (BOOL)hasDequeueObservers;
- (void)notifyClientWillAcknowledgeBatch:(id)a0;
- (void)removeDequeueObserver:(id)a0;
- (BOOL)popChangeBatch:(id *)a0 error:(id *)a1;
- (BOOL)isEmpty;
- (BOOL)appendChangeBatch:(id)a0 error:(id *)a1;
- (void)notifyClientDidAcknowledgeBatch:(id)a0;
- (BOOL)deleteAllChangeBatchesWithError:(id *)a0;

@end
