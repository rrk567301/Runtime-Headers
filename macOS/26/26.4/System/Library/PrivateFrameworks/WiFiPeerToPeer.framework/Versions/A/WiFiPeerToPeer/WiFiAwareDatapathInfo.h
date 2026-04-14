@class NSString, WiFiP2PXPCConnection, WiFiMACAddress;

@interface WiFiAwareDatapathInfo : NSObject <WiFiP2PXPCConnectionDelegate> {
    WiFiP2PXPCConnection *_xpcConnection;
    unsigned char _datapathID;
    long long _role;
    WiFiMACAddress *_peerMacAddress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activate;
- (void)handleError:(long long)a0;
- (void)deactivate;
- (id)remoteObjectInterface;
- (void).cxx_destruct;
- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;
- (void)deriveSharedSecretForProtocolName:(id)a0 context:(id)a1 derivationMethod:(long long)a2 completion:(id /* block */)a3;
- (id)initWithDatapathID:(unsigned char)a0 role:(long long)a1 peerMacAddress:(id)a2;
- (void)performance:(id /* block */)a0;

@end
