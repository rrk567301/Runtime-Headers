@interface CoreAudioOrchestration.NSXPCService : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ interface;
    void /* unknown type, empty encoding */ interfaceDelegate;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ entitlementString;
}

- (id)init;
- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
