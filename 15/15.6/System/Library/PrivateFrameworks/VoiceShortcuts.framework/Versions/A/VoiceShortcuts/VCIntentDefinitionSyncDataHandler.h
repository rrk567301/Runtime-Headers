@class SwiftVCDaemonXPCEventHandler;

@interface VCIntentDefinitionSyncDataHandler : VCSyncDataHandler

@property (readonly, nonatomic) SwiftVCDaemonXPCEventHandler *eventHandler;

+ (int)messageType;

- (void)dealloc;
- (void).cxx_destruct;
- (void)installedApplicationsDidChange:(id)a0;
- (id)initWithEventHandler:(id)a0;
- (char)resetSyncStateForService:(id)a0 error:(id *)a1;
- (char)applyChanges:(id)a0 fromSyncService:(id)a1 error:(id *)a2;
- (char)deleteSyncedData:(id *)a0;
- (char)markChangesAsSynced:(id)a0 withSyncService:(id)a1 metadata:(id)a2 error:(id *)a3;
- (id)unsyncedChangesForSyncService:(id)a0 metadata:(id *)a1 error:(id *)a2;

@end
