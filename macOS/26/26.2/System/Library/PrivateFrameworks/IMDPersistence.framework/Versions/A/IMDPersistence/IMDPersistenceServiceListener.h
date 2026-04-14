@class OS_dispatch_queue;

@interface IMDPersistenceServiceListener : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ anonymousListener;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, readonly) OS_dispatch_queue *listenerQueue;

- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)resume;
- (void).cxx_destruct;
- (id)init;
- (void)connection:(id)a0 registerCleanupHandlerWithID:(id)a1 usingBlock:(id /* block */)a2;
- (void)connection:(id)a0 unregisterCleanupHandlerWithID:(id)a1;
- (void)serviceResetting:(id)a0;

@end
