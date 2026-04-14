@interface HomeKitCore.XPCServer : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ homesStore;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ storeServer;
    void /* unknown type, empty encoding */ proxies;
}

- (void).cxx_destruct;
- (id)init;
- (void)start;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
