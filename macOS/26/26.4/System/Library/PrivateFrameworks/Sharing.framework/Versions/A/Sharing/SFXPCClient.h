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

- (void)onqueue_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)onqueue_ensureConnectionEstablished;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)onqueue_invalidated;
- (void)_invalidate;
- (id)remoteObjectInterface;
- (void)onqueue_connectionEstablished;
- (void)onqueue_interrupted;
- (void)onqueue_invalidate;
- (void)onqueue_connectionInterrupted;
- (void)onqueue_connectionInvalidated;
- (void).cxx_destruct;
- (id)exportedInterface;
- (BOOL)shouldEscapeXpcTryCatch;
- (id)machServiceName;
- (id)init;
- (void)interrupted;
- (void)_activate;
- (void)onqueue_activate;
- (void)invalidated;
- (void)onqueue_ensureXPCStarted;
- (void)dealloc;
- (void)connectionEstablished;

@end
