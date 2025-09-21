@class NSString, NSObject, NSXPCConnection;
@protocol PKInstallService, OS_dispatch_queue, OS_dispatch_semaphore;

@interface _PKInstallClientConnection : NSObject <PKInstallServiceClient> {
    NSXPCConnection *_connection;
    id<PKInstallService> _proxy;
    id<PKInstallService> _blockingProxy;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_semaphore> *_inProcessSema;
    char _isInProcessInstall;
}

@property (setter=setSilent:) char isSilent;
@property char isRecursive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (id)proxy;
- (void)inProcessSignal;
- (char)isServiceRemote;
- (char)_unprotectedConnectToDaemon:(char)a0 privileged:(char)a1 clientObject:(id)a2;
- (void)_unprotectedInvalidate;
- (id)blockingProxy;
- (char)connectToDaemon:(char)a0 privileged:(char)a1 clientObject:(id)a2;
- (char)inProcessWaitUntilDone;
- (void)installDidBeginCommitForToken:(id)a0;
- (void)installDidBeginForToken:(id)a0;
- (void)installDidEndForToken:(id)a0;

@end
