@class NSString, WiFiP2PXPCConnection;
@protocol WiFiAwareDevicesStoreDelegate;

@interface WiFiAwareDevicesStore : NSObject <WiFiAwarePairedDevicesXPCDelegate, WiFiP2PXPCConnectionDelegate> {
    WiFiP2PXPCConnection *_xpcConnection;
}

@property (weak, nonatomic) id<WiFiAwareDevicesStoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteObjectInterface;
- (id)exportedInterface;
- (id)exportedObject;
- (id)init;
- (void)deactivate;
- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;
- (void)activate;
- (void).cxx_destruct;
- (void)authorizeNewPairedDeviceFor:(id)a0 pairingKeyStoreID:(id)a1 storageClass:(long long)a2 lifetime:(double)a3 client:(long long)a4 completionHandler:(id /* block */)a5;
- (unsigned long long)authorizeNewPairedDeviceFor:(id)a0 pairingKeyStoreID:(id)a1 storageClass:(long long)a2 lifetime:(double)a3 client:(long long)a4 error:(id *)a5;
- (id)deauthorizePairedDeviceFor:(id)a0 withDeviceID:(unsigned long long)a1 remove:(BOOL)a2;
- (void)deauthorizePairedDeviceFor:(id)a0 withDeviceID:(unsigned long long)a1 remove:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)pairedDeviceAdded:(id)a0;
- (void)pairedDeviceChanged:(id)a0;
- (void)pairedDeviceRemoved:(id)a0;
- (void)queryPairedDevicesInfo:(id /* block */)a0;
- (id)reauthorizePairedDeviceFor:(id)a0 withDeviceID:(unsigned long long)a1;
- (void)reauthorizePairedDeviceFor:(id)a0 withDeviceID:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)removeAllPairedDevices;
- (void)removeAllPairedDevices:(id /* block */)a0;
- (id)removeAllPairedDevicesFor:(id)a0;
- (void)removeAllPairedDevicesFor:(id)a0 completionHandler:(id /* block */)a1;
- (id)removePairedDeviceFor:(id)a0 withDeviceID:(unsigned long long)a1;
- (void)removePairedDeviceFor:(id)a0 withDeviceID:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)uninstallPairedDeviceFor:(id)a0 withDeviceID:(unsigned long long)a1;
- (void)uninstallPairedDeviceFor:(id)a0 withDeviceID:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)updatePairedDeviceNameFor:(id)a0 withDeviceID:(unsigned long long)a1 toNewName:(id)a2;
- (void)updatePairedDeviceNameFor:(id)a0 withDeviceID:(unsigned long long)a1 toNewName:(id)a2 completionHandler:(id /* block */)a3;

@end
