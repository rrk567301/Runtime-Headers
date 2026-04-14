@class NSString, NSXPCConnection, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface PKInstallDaemonClient : NSObject <PKInstallService, PKInstallServiceClient> {
    int _clientPID;
    struct { unsigned int val[8]; } _clientAuditToken;
    unsigned int _clientUID;
    NSString *_clientPath;
    NSMutableSet *_outstandingInstallTokens;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property (readonly) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)initWithConnection:(id)a0;
- (void)registerAuthorizationFromInstallRequest:(id)a0 reply:(id /* block */)a1;
- (void)currentStageStatusOfInstallRequest:(id)a0 calculatePurgeableSize:(BOOL)a1 reply:(id /* block */)a2;
- (void)tokenForInstallRequest:(id)a0 reply:(id /* block */)a1;
- (void)tokenForCurrentCommitIgnoringBlockingClients:(BOOL)a0 reply:(id /* block */)a1;
- (void)addToken:(id)a0 reply:(id /* block */)a1;
- (void)adoptToken:(id)a0 reply:(id /* block */)a1;
- (void)displayNamesForToken:(id)a0 reply:(id /* block */)a1;
- (void)installStatusForToken:(id)a0 reply:(id /* block */)a1;
- (void)installDidBeginForToken:(id)a0;
- (void)installDidBeginCommitForToken:(id)a0;
- (void)installDidEndForToken:(id)a0;
- (BOOL)isWatchingInstallWithToken:(id)a0;
- (BOOL)clientPermitted;
- (void)cancelInstallsWherePossible;
- (void)installWillProceedForState:(int)a0 withSandbox:(id)a1 withToken:(id)a2 completion:(id /* block */)a3;

@end
