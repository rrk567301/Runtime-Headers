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

- (void)dealloc;
- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)_invalidate;
- (id)exportedInterface;
- (id)remoteObjectInterface;
- (void)interrupted;
- (void)invalidated;
- (id)machServiceName;
- (BOOL)shouldEscapeXpcTryCatch;
- (void)onqueue_activate;
- (void)onqueue_invalidate;
- (void)onqueue_connectionEstablished;
- (void)onqueue_connectionInterrupted;
- (void)getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)onqueue_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)onqueue_ensureXPCStarted;
- (void)onqueue_ensureConnectionEstablished;
- (void)onqueue_interrupted;
- (void)onqueue_invalidated;
- (void)connectionEstablished;
- (void)onqueue_connectionInvalidated;

@end
