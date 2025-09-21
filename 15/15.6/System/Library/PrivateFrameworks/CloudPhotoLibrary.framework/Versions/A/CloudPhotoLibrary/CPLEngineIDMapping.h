@class NSString, CPLPlatformObject;

@interface CPLEngineIDMapping : CPLEngineStorage <CPLAbstractObject, CPLEngineIDMapping>

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)scopeType;
- (char)addAddEventForRecordWithLocalScopedIdentifier:(id)a0 direction:(unsigned long long)a1 error:(id *)a2;
- (char)addCloudScopedIdentifier:(id)a0 forLocalScopedIdentifier:(id)a1 isFinal:(char)a2 direction:(unsigned long long)a3 error:(id *)a4;
- (char)addDeleteEventForRecordWithLocalScopedIdentifier:(id)a0 direction:(unsigned long long)a1 error:(id *)a2;
- (id)cloudScopedIdentifierForLocalScopedIdentifier:(id)a0 isFinal:(char *)a1;
- (char)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (id)firstAvailableCloudScopedIdentifierForProposedCloudScopedIdentifier:(id)a0;
- (char)hasPendingIdentifiers;
- (id)localScopedIdentifierForCloudScopedIdentifier:(id)a0 isFinal:(char *)a1;
- (id)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:(id)a0;
- (char)markAllPendingIdentifiersForScopeWithIdentifier:(id)a0 asFinalWithError:(id *)a1;
- (char)removeMappingForCloudScopedIdentifier:(id)a0 error:(id *)a1;
- (char)resetAllFinalCloudIdentifiersForScopeWithIdentifier:(id)a0 error:(id *)a1;
- (char)setFinalCloudScopedIdentifier:(id)a0 forPendingCloudScopedIdentifier:(id)a1 error:(id *)a2;
- (id)setupCloudScopedIdentifier:(id)a0 forLocalScopedIdentifier:(id)a1 isFinal:(char)a2 direction:(unsigned long long)a3 error:(id *)a4;

@end
