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

- (void)connectionEstablished;
- (void)_invalidate;
- (void)onqueue_connectionEstablished;
- (void)onqueue_interrupted;
- (void)onqueue_activate;
- (void)interrupted;
- (id)remoteObjectInterface;
- (void)invalidated;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)onqueue_connectionInterrupted;
- (id)machServiceName;
- (void)onqueue_connectionInvalidated;
- (void)_activate;
- (void)getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)onqueue_invalidated;
- (void)onqueue_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (id)exportedInterface;
- (void)onqueue_invalidate;
- (void)onqueue_ensureConnectionEstablished;
- (void)onqueue_ensureXPCStarted;
- (BOOL)shouldEscapeXpcTryCatch;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
