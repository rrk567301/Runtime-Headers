@interface AppStoreComponentsDaemonKit.Daemon : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ dialogHandler;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ intentsListener;
    void /* unknown type, empty encoding */ connections;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ shutdownTimer;
    void /* unknown type, empty encoding */ keepAlive;
}

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end
