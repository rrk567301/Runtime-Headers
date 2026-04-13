@protocol NSObject, CKXPCProcessScopedDaemon;

@interface CKProcessScopedDaemonProxy : NSObject

@property (retain, nonatomic) id<CKXPCProcessScopedDaemon> processScopedDaemonProxyCreator;
@property BOOL hasValidProcessScopedDaemonProxyCreator;
@property (retain, nonatomic) id<NSObject> connectionInterruptedObserver;

+ (id)sharedProcessScopedDaemonProxy;
+ (id)CKXPCClientToDaemonProcessScopedInterface;
+ (id)CKXPCDaemonToClientProcessScopedInterface;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_init;
- (void)wipeAllCachesAndDie;
- (void)accountsDidGrantAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)_getProcessScopedDaemonProxySynchronous:(BOOL)a0 errorHandler:(id /* block */)a1 daemonProxyHandler:(id /* block */)a2;
- (void)accountsDidRevokeAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)accountsWillDeleteAccount:(id)a0 completionHandler:(id /* block */)a1;
- (void)accountWithID:(id)a0 changedWithChangeType:(long long)a1;
- (void)wipeServerConfigurationsAndDie;
- (void)updatePushTokens;
- (void)flushOperationMetricsToPowerLog;
- (void)dumpAllClientsStatusReportToFileHandle:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearPCSCachesForKnownContainersWithCompletionHandler:(id /* block */)a0;
- (void)_getProcessScopedDaemonProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)kill;

@end
