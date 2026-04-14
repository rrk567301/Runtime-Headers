@class NSXPCConnection;
@protocol MTRDeviceControllerServerProtocol;

@interface MTRDeviceControllerXPCProxyHandle : NSObject

@property (readonly, weak, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic, getter=proxy) id<MTRDeviceControllerServerProtocol> proxy;

- (id)initWithXPCConnection:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
