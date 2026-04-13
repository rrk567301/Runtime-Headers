@interface SessionStoreServiceListener : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ sessionServiceMachServiceName;
    void /* unknown type, empty encoding */ listener;
}

@property (class, nonatomic, readonly) SessionStoreServiceListener *shared;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)setUpSessionStoreServiceListener;

@end
