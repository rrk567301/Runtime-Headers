@class CKXPCConnection, NSXPCInterface;
@protocol NSObject, CKXPCProcessScopedDaemon;

@interface CKProcessScopedDaemonProxy : NSObject

@property (class, readonly, copy) NSXPCInterface *CKXPCClientToDaemonProcessScopedInterface;
@property (class, readonly, copy) NSXPCInterface *CKXPCDaemonToClientProcessScopedInterface;

@property (retain, nonatomic) id<CKXPCProcessScopedDaemon> processScopedDaemonProxyCreator;
@property BOOL hasValidProcessScopedDaemonProxyCreator;
@property (retain, nonatomic) id<NSObject> connectionInterruptedObserver;
@property (readonly, weak, nonatomic) CKXPCConnection *connection;

- (void)fetchUsabilityForTestAccountCredentials:(id)a0 completionHandler:(id /* block */)a1;
- (void)accountsDidRevokeAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)kill;
- (void)clearPCSCachesForKnownContainersWithCompletionHandler:(id /* block */)a0;
- (void)dumpAllClientsStatusReportToFileHandle:(id)a0 completionHandler:(id /* block */)a1;
- (void)wipeServerConfigurationsAndDie;
- (void)accountsDidGrantAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)_getProcessScopedDaemonProxySynchronous:(BOOL)a0 errorHandler:(id /* block */)a1 daemonProxyHandler:(id /* block */)a2;
- (id)initWithConnection:(id)a0;
- (void)accountWithID:(id)a0 changedWithChangeType:(long long)a1;
- (void).cxx_destruct;
- (unsigned long long)maxInlineMergeableDeltaSize;
- (void)_getProcessScopedDaemonProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)wipeAllCachesAndDie;
- (void)dealloc;
- (void)updatePushTokens;
- (void)accountsWillDeleteAccount:(id)a0 completionHandler:(id /* block */)a1;

@end
