@interface AppleIDSetupDaemon.ConnectionManager : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ aisDaemonServiceListener;
}

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
