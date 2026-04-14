@class HIDRemoteDeviceAACPServer;

@interface HIDAACPRemoteEndpoint : HIDRemoteEndpoint

@property (retain) HIDRemoteDeviceAACPServer *server;

- (void).cxx_destruct;
- (void)addDevice:(id)a0;
- (void)registerPropertyNotification:(id)a0;
- (void)removeAllDevices;
- (void)handlePropertyChange:(id)a0;

@end
