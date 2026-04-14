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

- (void)onqueue_invalidate;
- (void)onqueue_ensureXPCStarted;
- (void)onqueue_ensureConnectionEstablished;
- (id)remoteObjectInterface;
- (void)connectionEstablished;
- (BOOL)shouldEscapeXpcTryCatch;
- (void)onqueue_interrupted;
- (void)invalidated;
- (void)onqueue_connectionEstablished;
- (void)onqueue_connectionInterrupted;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (id)init;
- (void)onqueue_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)_activate;
- (void)onqueue_invalidated;
- (void)interrupted;
- (void)onqueue_activate;
- (void)onqueue_connectionInvalidated;
- (void)getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (id)exportedInterface;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_invalidate;
- (id)machServiceName;

@end
