@class NSString, CPLPlatformObject, NSMutableSet, NSDate, NSMutableDictionary;

@interface CPLEngineStatusCenter : CPLEngineStorage <CPLAbstractObject> {
    unsigned long long _currentGeneration;
    NSDate *_transactionStartDate;
    NSMutableSet *_persistedScopedIdentifiers;
    NSMutableDictionary *_pendingTransientStatuses;
    NSMutableSet *_pendingDeletedTransientStatuses;
    NSMutableDictionary *_transientStatuses;
}

@property (readonly, nonatomic) char hasStatusChanges;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)status;
- (unsigned long long)scopeType;
- (id)_allScopedIdentifierInCollection:(id)a0 withScopeIdentifier:(id)a1;
- (void)_fillStatus:(id)a0;
- (void)_fillStatus:(id)a0 withClientCacheRecordView:(id)a1 cloudCacheRecord:(id)a2 isConfirmed:(char)a3 isStaged:(char)a4 isInIDMapping:(char)a5;
- (void)_removeScopedIdentifiersFromSet:(id)a0 withScopeIdentifier:(id)a1;
- (void)_removeStatusesInDictionary:(id)a0 withScopeIdentifier:(id)a1;
- (id)_statusFromCachesWithRecordScopedIdentifier:(id)a0;
- (char)acknowledgeChangedStatuses:(id)a0 error:(id *)a1;
- (id)allStatusChanges;
- (char)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (char)discardNotificationForRecordWithScopedIdentifier:(id)a0 error:(id *)a1;
- (id)initWithEngineStore:(id)a0 name:(id)a1;
- (char)notifyStatusForRecordHasChanged:(id)a0 persist:(char)a1 error:(id *)a2;
- (char)notifyStatusForRecordViewHasChanged:(id)a0 persist:(char)a1 error:(id *)a2;
- (char)notifyStatusForRecordWithScopedIdentifierHasChanged:(id)a0 recordClass:(Class)a1 persist:(char)a2 error:(id *)a3;
- (id)recordForStatusWithScopedIdentifier:(id)a0;
- (id)recordViewForStatusWithScopedIdentifier:(id)a0;
- (void)resetAllTransientStatuses;
- (void)resetTransientStatusesWithScopeIdentifier:(id)a0;
- (id)statusChanges;
- (id)statusesForRecordsWithIdentifiers:(id)a0;
- (id)statusesForRecordsWithScopedIdentifiers:(id)a0;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
