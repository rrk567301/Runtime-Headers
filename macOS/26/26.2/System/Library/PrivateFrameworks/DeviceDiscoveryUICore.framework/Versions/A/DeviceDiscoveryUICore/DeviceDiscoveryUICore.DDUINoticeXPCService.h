@interface DeviceDiscoveryUICore.DDUINoticeXPCService : NSObject <NSXPCListenerDelegate, DeviceDiscoveryUICore.UserAcceptProtocol> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ continuation;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)userDidRespondWithAccepted:(BOOL)a0;

@end
