@interface ChronoCore.ActivityRendererServer : NSObject <BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ _services;
    void /* unknown type, empty encoding */ _listener;
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _subscriptions;
    void /* unknown type, empty encoding */ _clientsLock;
    void /* unknown type, empty encoding */ _clientsLock_clients;
}

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
