@interface SiriUIBridge.UIBridgeConnectionListener : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ machServiceName;
    void /* unknown type, empty encoding */ connectionQueue;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ uiBridgeService;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;

@end
