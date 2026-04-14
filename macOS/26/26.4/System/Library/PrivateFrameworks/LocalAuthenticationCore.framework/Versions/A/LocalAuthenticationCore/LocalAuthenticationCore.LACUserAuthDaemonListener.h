@interface LocalAuthenticationCore.LACUserAuthDaemonListener : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ daemonService;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ queue;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
