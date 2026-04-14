@class NSArray, PKInstallRequest, NSTimer;

@interface PKInstallClient : NSObject {
    PKInstallRequest *_installRequest;
    id _delegate;
    BOOL _delegateWantsUpdates;
    id _conn;
    id _installToken;
    NSTimer *_statusTimer;
    double _lastProgress;
    BOOL _isRegistering;
    BOOL _isInitialized;
}

@property (readonly) PKInstallRequest *request;
@property (readonly) NSArray *displayNames;

+ (void)initialize;
+ (void)unregisterAuthorizations;
+ (BOOL)isCurrentlyStagedInstallRequest:(id)a0 purgeableSize:(id *)a1;
+ (BOOL)registerAuthorization:(struct AuthorizationOpaqueRef { } *)a0;
+ (id)_connectToDaemonForAuthLevel:(int)a0 privileged:(BOOL)a1 recursiveInstall:(BOOL)a2 silent:(BOOL)a3 forInstance:(id)a4;
+ (void)_modifyConnectionsForRegisteredAuthorizations:(id)a0;
+ (BOOL)_clientRunningInAquaSession;
+ (BOOL)_inProcessInstall;
+ (double)estimatedTimeForInstallRequest:(id)a0;

- (void)dealloc;
- (id)initWithRequest:(id)a0 inUserContext:(BOOL)a1 holdingBoostDuringInstall:(BOOL)a2 delegate:(id)a3 error:(id *)a4;
- (id)initWithRequest:(id)a0 inUserContext:(BOOL)a1 delegate:(id)a2 error:(id *)a3;
- (id)initWithRequest:(id)a0 delegate:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)_initWithRequest:(id)a0 options:(unsigned long long)a1 ignoringBlockingClients:(BOOL)a2 delegate:(id)a3 error:(id *)a4;
- (void)_scheduleStatusTimerOnCurrentThread;
- (void)_installDaemonDidEndInstallWithError:(id)a0 registrationPaths:(id)a1;
- (void)_installDaemonDidBeginInstall_OnMainThread;
- (void)_statusTimerHasFired:(id)a0;
- (id)_installStatusByConnectingToDaemon;
- (id)_localPackageForRemoteSpecifier:(id)a0;
- (void)_finishInstallClientOnMainThreadWithError:(id)a0;
- (id)initWithRequest:(id)a0 delegate:(id)a1 error:(id *)a2;
- (id)initForCurrentCommitWithDelegate:(id)a0 ignoringBlockingClients:(BOOL)a1 error:(id *)a2;
- (void)installDidBeginForToken:(id)a0;
- (void)installDidBeginCommitForToken:(id)a0;
- (void)installDidEndForToken:(id)a0;
- (void)installWillProceedForState:(int)a0 withSandbox:(id)a1 forToken:(id)a2 completion:(id /* block */)a3;

@end
