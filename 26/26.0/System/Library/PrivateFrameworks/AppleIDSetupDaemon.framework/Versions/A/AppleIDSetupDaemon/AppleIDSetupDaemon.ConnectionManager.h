@interface AppleIDSetupDaemon.ConnectionManager : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ aisDaemonServiceListener;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
