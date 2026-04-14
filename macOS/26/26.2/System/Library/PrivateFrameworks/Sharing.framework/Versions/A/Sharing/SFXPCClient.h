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

- (void)invalidated;
- (void)connectionEstablished;
- (void)onqueue_invalidate;
- (void)onqueue_connectionInvalidated;
- (void)onqueue_activate;
- (void)getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)onqueue_invalidated;
- (void)onqueue_interrupted;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void).cxx_destruct;
- (id)machServiceName;
- (void)onqueue_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (BOOL)shouldEscapeXpcTryCatch;
- (id)exportedInterface;
- (void)onqueue_ensureXPCStarted;
- (void)onqueue_connectionInterrupted;
- (void)onqueue_ensureConnectionEstablished;
- (void)_activate;
- (id)remoteObjectInterface;
- (id)init;
- (void)onqueue_connectionEstablished;
- (void)interrupted;
- (void)_invalidate;
- (void)dealloc;

@end
