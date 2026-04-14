@class NSXPCConnection;
@protocol CHIPDeviceControllerServerProtocol;

@interface CHIPDeviceControllerXPCProxyHandle : NSObject

@property (readonly, weak, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic, getter=proxy) id<CHIPDeviceControllerServerProtocol> proxy;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0;

@end
