@class NSArray, PKInstallRequest, NSTimer;

@interface PKInstallClient : NSObject {
    PKInstallRequest *_installRequest;
    id _delegate;
    char _delegateWantsUpdates;
    id _conn;
    id _installToken;
    NSTimer *_statusTimer;
    double _lastProgress;
    char _isRegistering;
    char _isInitialized;
}

@property (readonly) PKInstallRequest *request;
@property (readonly) NSArray *displayNames;

+ (void)initialize;
+ (char)isCurrentlyStagedInstallRequest:(id)a0 purgeableSize:(id *)a1;
+ (char)registerAuthorization:(struct AuthorizationOpaqueRef { } *)a0;
+ (void)unregisterAuthorizations;
+ (double)estimatedTimeForInstallRequest:(id)a0;
+ (char)_clientRunningInAquaSession;
+ (id)_connectToDaemonForAuthLevel:(int)a0 privileged:(char)a1 recursiveInstall:(char)a2 silent:(char)a3 forInstance:(id)a4;
+ (char)_inProcessInstall;
+ (void)_modifyConnectionsForRegisteredAuthorizations:(id)a0;

- (void)dealloc;
- (id)initWithRequest:(id)a0 inUserContext:(char)a1 holdingBoostDuringInstall:(char)a2 delegate:(id)a3 error:(id *)a4;
- (id)initWithRequest:(id)a0 delegate:(id)a1 error:(id *)a2;
- (id)initForCurrentCommitWithDelegate:(id)a0 ignoringBlockingClients:(char)a1 error:(id *)a2;
- (char)_connectionEstablished;
- (void)_finishInstallClientOnMainThreadWithError:(id)a0;
- (id)_initWithRequest:(id)a0 options:(unsigned long long)a1 ignoringBlockingClients:(char)a2 delegate:(id)a3 error:(id *)a4;
- (void)_installDaemonDidBeginInstall_OnMainThread;
- (void)_installDaemonDidEndInstallWithError:(id)a0 registrationPaths:(id)a1;
- (id)_installStatusByConnectingToDaemon;
- (id)_localPackageForRemoteSpecifier:(id)a0;
- (void)_scheduleStatusTimerOnCurrentThread;
- (void)_statusTimerHasFired:(id)a0;
- (id)initWithRequest:(id)a0 delegate:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)initWithRequest:(id)a0 inUserContext:(char)a1 delegate:(id)a2 error:(id *)a3;
- (void)installDidBeginCommitForToken:(id)a0;
- (void)installDidBeginForToken:(id)a0;
- (void)installDidEndForToken:(id)a0;
- (void)installWillProceedForState:(int)a0 withSandbox:(id)a1 forToken:(id)a2 completion:(id /* block */)a3;

@end
