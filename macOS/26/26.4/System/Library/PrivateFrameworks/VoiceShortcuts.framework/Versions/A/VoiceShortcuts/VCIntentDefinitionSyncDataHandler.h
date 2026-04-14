@interface VCIntentDefinitionSyncDataHandler : VCSyncDataHandler

+ (int)messageType;

- (BOOL)resetSyncStateForService:(id)a0 error:(id *)a1;
- (BOOL)applyChanges:(id)a0 fromSyncService:(id)a1 error:(id *)a2;
- (BOOL)deleteSyncedData:(id *)a0;
- (BOOL)markChangesAsSynced:(id)a0 withSyncService:(id)a1 metadata:(id)a2 error:(id *)a3;
- (id)unsyncedChangesForSyncService:(id)a0 metadata:(id *)a1 error:(id *)a2;

@end
