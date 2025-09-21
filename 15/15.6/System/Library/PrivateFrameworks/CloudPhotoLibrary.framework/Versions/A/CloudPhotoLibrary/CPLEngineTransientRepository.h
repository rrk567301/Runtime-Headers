@class NSString, NSMutableArray, CPLPlatformObject;

@interface CPLEngineTransientRepository : CPLEngineStorage <CPLAbstractObject> {
    NSMutableArray *_observers;
}

@property (readonly, nonatomic) unsigned long long countOfUnmingledRecords;
@property (nonatomic) unsigned long long maximumCountOfRecordsInBatches;
@property (readonly, nonatomic) char hasUnmingledChanges;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)orderedClassesForChanges;
+ (id)orderedClassesForChangesForLargeSync;
+ (id)orderedClassesForDelete;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)status;
- (char)openWithError:(id *)a0;
- (unsigned long long)scopeType;
- (char)_appendBatchToStorage:(id)a0 alreadyMingled:(char)a1 countOfAssetChanges:(unsigned long long *)a2 error:(id *)a3;
- (id)_sharedDeleteFromDelete:(id)a0;
- (id)allUnmingledChangesWithClass:(Class)a0 relatedScopedIdentifier:(id)a1;
- (id)allUnmingledChangesWithClass:(Class)a0 scopeIdentifier:(id)a1;
- (id)allUnmingledChangesWithScopeIdentifier:(id)a0;
- (id)allUnmingledDeletedChangesWithClass:(Class)a0 scopeIdentifier:(id)a1;
- (id)allUnmingledNonDeletedChangesWithClass:(Class)a0 scopeIdentifier:(id)a1;
- (char)appendBatch:(id)a0 alreadyMingled:(char)a1 countOfAssetChanges:(unsigned long long *)a2 error:(id *)a3;
- (id)batchStorageForScope:(id)a0;
- (id)cachedRecordWithScopedIdentifier:(id)a0;
- (id)changeWithScopedIdentifier:(id)a0;
- (char)deleteMingledRecordsForScopeWithIdentifier:(id)a0 error:(id *)a1;
- (char)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (char)hasMingledRecordsForScopeWithIdentifier:(id)a0;
- (char)hasOnlyMingledRecordsWithScopeIdentifier:(id)a0;
- (char)hasRecordWithScopedIdentifier:(id)a0;
- (char)hasStashedChangesForScopeWithIdentifier:(id)a0;
- (char)hasStashedRecordWithScopedIdentifier:(id)a0;
- (char)hasUnmingledChangesForScope:(id)a0;
- (char)hasUnmingledNonStashedRecordsForScopeWithIdentifier:(id)a0;
- (char)hasUnmingledOrStashedRecordsWithScopeFilter:(id)a0;
- (id)initWithEngineStore:(id)a0 name:(id)a1;
- (char)markUnmingledChangeWithScopedIdentifierAsMingled:(id)a0 error:(id *)a1;
- (id)nextBatchOfRemappedRecordsInScope:(id)a0 maximumCount:(unsigned long long)a1;
- (char)popChangeBatchOfRemappedRecords:(id *)a0 scope:(id)a1 maximumCount:(unsigned long long)a2 error:(id *)a3;
- (char)resetMingledRecordsWithScopeFilter:(id)a0 error:(id *)a1;
- (char)resetTransientRepositoryForScopeWithIdentifier:(id)a0 error:(id *)a1;
- (char)shouldKeepDeleteChange:(id)a0 forRecordWithScopedIdentifier:(id)a1;
- (char)stashChangeWithScopedIdentifier:(id)a0 error:(id *)a1;
- (id)unmingledChangeWithScopedIdentifier:(id)a0;
- (char)unstashRecordsForScopeWithIdentifier:(id)a0 maxCount:(unsigned long long)a1 hasMore:(char *)a2 error:(id *)a3;

@end
