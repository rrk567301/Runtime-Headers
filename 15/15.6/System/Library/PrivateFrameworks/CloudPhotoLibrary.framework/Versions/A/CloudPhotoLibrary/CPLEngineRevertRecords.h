@class NSString, CPLPlatformObject;

@interface CPLEngineRevertRecords : CPLEngineStorage <CPLAbstractObject>

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)scopeType;
- (char)addRecordsToRevertWithLocalScopedIdentifier:(id)a0 class:(Class)a1 error:(id *)a2;
- (char)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (char)deleteRecordsToRevertFromBatch:(id)a0 error:(id *)a1;
- (id)nextBatchOfRecordsToRevert;
- (char)shouldRevertRecordWithLocalScopedIdentifier:(id)a0;

@end
