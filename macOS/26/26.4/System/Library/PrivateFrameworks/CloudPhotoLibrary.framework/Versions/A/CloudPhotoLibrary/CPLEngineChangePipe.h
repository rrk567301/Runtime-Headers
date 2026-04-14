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

- (BOOL)popNextBatchWithError:(id *)a0;
- (void)removeDequeueObserver:(id)a0;
- (BOOL)appendChangeBatch:(id)a0 error:(id *)a1;
- (BOOL)isEmpty;
- (BOOL)popChangeBatch:(id *)a0 error:(id *)a1;
- (BOOL)hasSomeChangeWithScopedIdentifier:(id)a0;
- (id)addDequeueObserverWithDequeueSignalBlock:(id /* block */)a0;
- (BOOL)hasQueuedBatches;
- (void)_notifyQueueRemovedChanges;
- (void).cxx_destruct;
- (BOOL)hasDequeueObservers;
- (BOOL)hasSomeChangeInScopesWithIdentifiers:(id)a0;
- (void)notifyClientWillAcknowledgeBatch:(id)a0;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (void)addDequeueObserver:(id)a0;
- (BOOL)deleteAllChangeBatchesWithError:(id *)a0;
- (id)nextBatch;
- (BOOL)compactChangeBatchesWithError:(id *)a0;
- (void)notifyClientDidAcknowledgeBatch:(id)a0;
- (unsigned long long)scopeType;
- (BOOL)hasSomeChangeWithScopeFilter:(id)a0;
- (BOOL)deleteAllChangesWithScopeFilter:(id)a0 error:(id *)a1;
- (id)allChangeBatches;

@end
