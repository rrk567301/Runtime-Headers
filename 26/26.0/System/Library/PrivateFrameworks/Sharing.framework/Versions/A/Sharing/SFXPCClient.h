@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFXPCClient : NSObject <NSXPCConnectionDelegate> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteObjectInterface;
- (id)exportedInterface;
- (void)invalidated;
- (void)onqueue_activate;
- (BOOL)shouldEscapeXpcTryCatch;
- (void)onqueue_invalidate;
- (void)onqueue_connectionInvalidated;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (id)machServiceName;
- (void)onqueue_invalidated;
- (void)dealloc;
- (void)interrupted;
- (void)onqueue_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)onqueue_ensureConnectionEstablished;
- (void)onqueue_interrupted;
- (void)onqueue_ensureXPCStarted;
- (void)_invalidate;
- (void)connectionEstablished;
- (void)getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)onqueue_connectionInterrupted;
- (id)init;
- (void)onqueue_connectionEstablished;
- (void)_activate;
- (void).cxx_destruct;

@end
