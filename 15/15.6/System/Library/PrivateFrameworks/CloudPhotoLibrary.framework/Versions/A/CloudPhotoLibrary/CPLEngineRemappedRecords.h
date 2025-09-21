@class NSString, NSMutableDictionary, CPLPlatformObject;

@interface CPLEngineRemappedRecords : CPLEngineStorage <CPLAbstractObject> {
    NSMutableDictionary *_perTransactionRemappedScopedIdentifiers;
}

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)scopeType;
- (id)_fixupRemappedRecordsAndReturnBestCloudScopedIdentifierFromRemappedScopedIdentifiers:(id)a0 fallback:(id)a1;
- (char)addRemappedRecordWithScopedIdentifier:(id)a0 realScopedIdentifier:(id)a1 error:(id *)a2;
- (char)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (char)isRecordWithScopedIdentifierRemapped:(id)a0;
- (id)realScopedIdentifierForRemappedScopedIdentifier:(id)a0;
- (char)removeRemappedRecordWithScopedIdentifier:(id)a0 error:(id *)a1;
- (id)scopedIdentifiersRemappedToScopedIdentifier:(id)a0;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
