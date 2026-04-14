@class NSString, NSMutableArray, WiFiP2PXPCConnection;

@interface WiFiP2PDNSServiceDiscoveryManager : NSObject <WiFiP2PDNSServiceDiscoveryXPCDelegate, WiFiP2PXPCConnectionDelegate> {
    BOOL _useWiFiAware;
    id /* block */ _serviceCallback;
    NSMutableArray *_registeredServices;
    WiFiP2PXPCConnection *_xpcConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedObject;
- (void)startServiceDiscoveryWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleEventType:(unsigned long long)a0 keyData:(id)a1 valueData:(id)a2;
- (void)handleConnectionEstablishedWithProxy:(id)a0;
- (id)initUsingWiFiAware:(BOOL)a0 serviceCallback:(id /* block */)a1;
- (id)remoteObjectInterface;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)startServiceDiscoveryWithConfiguration:(id)a0;
- (void)stopServiceDiscoveryWithConfiguration:(id)a0;
- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;

@end
