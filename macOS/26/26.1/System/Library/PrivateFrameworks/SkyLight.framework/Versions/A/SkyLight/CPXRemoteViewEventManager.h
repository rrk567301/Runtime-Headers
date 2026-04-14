@class WSEventDeliveryManager, NSMutableDictionary, BSServiceQueue;

@interface CPXRemoteViewEventManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientLock;
    NSMutableDictionary *_clientLock_clientsByPid;
    WSEventDeliveryManager *_deliveryManager;
    BSServiceQueue *_queue;
}

- (unsigned long long)clientCount;
- (void).cxx_destruct;
- (void)didReceiveConnection:(id)a0 config:(id)a1;
- (id)initWithDeliveryManager:(id)a0;
- (void)invalidateConnections;
- (oneway void)passEventUpstreamToHost:(id)a0 fullDispatch:(id)a1 reply:(id /* block */)a2;
- (int)pidForCurrentConnection;
- (void)sendEvent:(struct __CGEvent { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned int x1; struct SLSEventRecord *x2; } *)a0 toHostPid:(int)a1 fullDispatch:(id)a2 reply:(id /* block */)a3;

@end
