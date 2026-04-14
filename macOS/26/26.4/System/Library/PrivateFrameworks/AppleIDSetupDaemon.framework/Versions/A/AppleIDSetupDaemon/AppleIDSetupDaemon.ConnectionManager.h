@interface AppleIDSetupDaemon.ConnectionManager : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ aisDaemonServiceListener;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;

@end
