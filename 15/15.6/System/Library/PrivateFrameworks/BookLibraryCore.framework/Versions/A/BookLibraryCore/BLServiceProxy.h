@class NSXPCConnection;
@protocol BLProgressReceiving, BLServiceProxyConnectionMonitoring;

@interface BLServiceProxy : NSObject <BLServiceProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) id<BLProgressReceiving> progressReceiver;
@property (nonatomic) long long state;
@property (nonatomic) int notifyToken;
@property (weak, nonatomic) id<BLServiceProxyConnectionMonitoring> connectionMonitor;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithError:(out id *)a0;
- (void)shutdown;
- (void)resumeDownloadWithID:(id)a0 withReply:(id /* block */)a1;
- (void)cancelDownloadWithID:(id)a0 withReply:(id /* block */)a1;
- (id)initWithProgressReceiver:(id)a0 error:(out id *)a1;
- (void)_createAndStartConnection;
- (id)_remoteObjectWithErrorHandler:(id /* block */)a0;
- (id)_synchronousRemoteObjectWithErrorHandler:(id /* block */)a0;
- (void)cancelAllActiveDownloadsWithReply:(id /* block */)a0;
- (void)downloadWithPermlink:(id)a0 title:(id)a1 reply:(id /* block */)a2;
- (void)fetchDownloadFromDownloadID:(id)a0 withReply:(id /* block */)a1;
- (void)fetchDownloadListWithReply:(id /* block */)a0;
- (void)getCrashSimulationOverrideValuesWithReply:(id /* block */)a0;
- (void)getValueSimulateDeviceOutOfSpaceWithReply:(id /* block */)a0;
- (void)migrationInfoWithStoreID:(long long)a0 withReply:(id /* block */)a1;
- (void)migrationInfosWithStates:(id)a0 withReply:(id /* block */)a1;
- (void)migrationInfosWithStoreIDs:(id)a0 withReply:(id /* block */)a1;
- (void)monitorProgressWithReply:(id /* block */)a0;
- (void)pauseDownloadWithID:(id)a0 withReply:(id /* block */)a1;
- (void)prepareForRemoveAppWithReply:(id /* block */)a0;
- (void)processAutomaticDownloadsWithReply:(id /* block */)a0;
- (void)purchaseWithRequest:(id)a0 uiHostProxy:(id)a1 reply:(id /* block */)a2;
- (void)racGUIDForStoreID:(long long)a0 withReply:(id /* block */)a1;
- (void)reloadFromServerWithReply:(id /* block */)a0;
- (void)removeAllMigrationInfosExcludingStates:(id)a0 withReply:(id /* block */)a1;
- (void)removeMigrationInfoForStoreID:(long long)a0 withReply:(id /* block */)a1;
- (void)removeRacGUIDForStoreID:(long long)a0 withReply:(id /* block */)a1;
- (void)requestDownloadWithMetadata:(id)a0 isRestore:(char)a1 reply:(id /* block */)a2;
- (void)requestDownloadWithParameters:(id)a0 reply:(id /* block */)a1;
- (void)requestDownloadsWithManifestRequest:(id)a0 uiHostProxy:(id)a1 reply:(id /* block */)a2;
- (void)requestDownloadsWithMetadata:(id)a0 areRestore:(char)a1 reply:(id /* block */)a2;
- (void)resetAllCrashSimulationOverridesWithReply:(id /* block */)a0;
- (void)restartDownloadWithID:(id)a0 withReply:(id /* block */)a1;
- (void)setAutomaticDownloadEnabled:(char)a0 uiHostProxy:(id)a1 reply:(id /* block */)a2;
- (void)setMigrationState:(long long)a0 forStoreIDs:(id)a1 withReply:(id /* block */)a2;
- (void)setRacGUID:(id)a0 forStoreID:(long long)a1 withReply:(id /* block */)a2;
- (void)setValueSimulateCrashAtInstallDuringDecrypt:(char)a0 withReply:(id /* block */)a1;
- (void)setValueSimulateCrashAtInstallDuringFinish:(char)a0 withReply:(id /* block */)a1;
- (void)setValueSimulateCrashAtInstallDuringUnzip:(char)a0 withReply:(id /* block */)a1;
- (void)setValueSimulateCrashAtInstallStart:(char)a0 withReply:(id /* block */)a1;
- (void)setValueSimulateDeviceOutOfSpace:(char)a0 withReply:(id /* block */)a1;

@end
