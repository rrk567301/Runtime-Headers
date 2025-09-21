@class HIDRemoteDeviceAACPServer;

@interface HIDAACPRemoteEndpoint : HIDRemoteEndpoint

@property (retain) HIDRemoteDeviceAACPServer *server;

- (void)addDevice:(id)a0;
- (void)removeDevice:(id)a0;
- (void).cxx_destruct;
- (void)registerPropertyNotification:(id)a0;
- (void)removeAllDevices;
- (void)handlePropertyChange:(id)a0;

@end
