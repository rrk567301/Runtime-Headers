@interface SessionCore.PushTokenServer : NSObject <BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ requestProcessingQueue;
    void /* unknown type, empty encoding */ pushServer;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ processManager;
    void /* unknown type, empty encoding */ activityStore;
    void /* unknown type, empty encoding */ authorizationManager;
    void /* unknown type, empty encoding */ knownClientStore;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ lock_clients;
    void /* unknown type, empty encoding */ lock_tokens;
}

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
