@class NSString, NSObject, NSXPCConnection;
@protocol PKInstallService, OS_dispatch_queue, OS_dispatch_semaphore;

@interface _PKInstallClientConnection : NSObject <PKInstallServiceClient> {
    NSXPCConnection *_connection;
    id<PKInstallService> _proxy;
    id<PKInstallService> _blockingProxy;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_semaphore> *_inProcessSema;
    BOOL _isInProcessInstall;
}

@property (setter=setSilent:) BOOL isSilent;
@property BOOL isRecursive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (id)proxy;
- (id)blockingProxy;
- (void)inProcessSignal;
- (BOOL)inProcessWaitUntilDone;
- (BOOL)isServiceRemote;
- (BOOL)connectToDaemon:(BOOL)a0 privileged:(BOOL)a1 clientObject:(id)a2;
- (void)installDidBeginForToken:(id)a0;
- (void)installDidBeginCommitForToken:(id)a0;
- (void)installDidEndForToken:(id)a0;
- (BOOL)_unprotectedConnectToDaemon:(BOOL)a0 privileged:(BOOL)a1 clientObject:(id)a2;
- (BOOL)_unprotectedIsServiceRemote;
- (id)_unprotectedProxy;
- (id)_unprotectedBlockingProxy;
- (void)_unprotectedInvalidate;

@end
