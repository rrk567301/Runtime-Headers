@class NSString, CPLPlatformObject;

@interface CPLEngineCloudCache : CPLEngineStorage <CPLAbstractObject>

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)scopeType;
- (id)targetForRecordWithCloudScopedIdentifier:(id)a0 trustRecordChangeData:(char)a1;
- (id)_invalidCloudCacheErrorWithInvalidRecord:(id)a0 method:(id)a1;
- (id)_otherScopedIdentifierForCloudScopedIdentifier:(id)a0 sharedScoped:(id)a1;
- (id)_targetWithRecord:(id)a0 cloudScopedIdentifier:(id)a1 trustRecordChangeData:(char)a2;
- (id)_targetWithShareableRecord:(id)a0 cloudScopedIdentifier:(id)a1 otherScopedIdentifier:(id)a2 sharedScope:(id)a3 trustRecordChangeData:(char)a4;
- (char)ackownledgeRecordWithScopedIdentifier:(id)a0 error:(id *)a1;
- (char)addRecord:(id)a0 isFinal:(char)a1 error:(id *)a2;
- (id)allRecordsIsFinal:(char)a0;
- (char)applyBatch:(id)a0 isFinal:(char)a1 direction:(unsigned long long)a2 withError:(id *)a3;
- (id)cloudChangeBatchFromBatch:(id)a0 usingMapping:(id)a1 isFinal:(char)a2 withError:(id *)a3;
- (char)commitStagedChangesForScopeWithIdentifier:(id)a0 error:(id *)a1;
- (char)confirmAllRecordsWithError:(id *)a0;
- (unsigned long long)countOfRecordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (char)deleteRecordWithScopedIdentifier:(id)a0 isFinal:(char)a1 error:(id *)a2;
- (char)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (char)discardStagedChangesForScopeWithIdentifier:(id)a0 error:(id *)a1;
- (char)discardStagedChangesWithScopeFilter:(id)a0 error:(id *)a1;
- (void)getCommittedRecord:(id *)a0 stagedRecord:(id *)a1 forScopedIdentifier:(id)a2;
- (char)hasAnyRecordWithRelatedScopedIdentifier:(id)a0;
- (char)hasRecordAcknowledgedByClientWithScopedIdentifier:(id)a0;
- (char)hasRecordWithScopedIdentifier:(id)a0;
- (id)recordAcknowledgedByClientWithScopedIdentifier:(id)a0;
- (id)recordWithScopedIdentifier:(id)a0 isConfirmed:(char *)a1 isStaged:(char *)a2;
- (id)recordWithScopedIdentifier:(id)a0 isFinal:(char)a1;
- (id)recordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (id)recordsOfClass:(Class)a0 isFinal:(char)a1;
- (id)recordsWithRelatedScopedIdentifier:(id)a0 class:(Class)a1 isFinal:(char)a2;
- (id)recordsWithRelatedScopedIdentifier:(id)a0 isFinal:(char)a1;
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)a0 isFinal:(char)a1;
- (char)remapAllRecordsWithPreviousScopedIdentifier:(id)a0 newScopedIdentifier:(id)a1 error:(id *)a2;
- (id)resourceOfType:(unsigned long long)a0 forRecordWithScopedIdentifier:(id)a1 record:(id *)a2 target:(id *)a3 error:(id *)a4;
- (id)targetForRecordWithCloudScopedIdentifier:(id)a0;
- (id)targetForRecordWithSharedCloudScopedIdentifier:(id)a0;
- (id)targetForRecordWithSharedCloudScopedIdentifier:(id)a0 trustRecordChangeData:(char)a1;
- (char)updateFinalRecord:(id)a0 confirmed:(char)a1 error:(id *)a2;
- (char)updateStagedRecord:(id)a0 error:(id *)a1;
- (void)updateStoredTargetsFromTargetMapping:(id)a0;

@end
