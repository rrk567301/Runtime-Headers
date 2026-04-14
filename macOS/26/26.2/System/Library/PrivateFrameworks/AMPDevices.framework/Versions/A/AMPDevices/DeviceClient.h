@class NSXPCConnection;

@interface DeviceClient : NSObject <DeviceClientProtocol>

@property (weak, nonatomic) NSXPCConnection *connectionToDiscoveryService;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)pairDeviceWithIdentifier:(id)a0 withReply:(id /* block */)a1;

@end
