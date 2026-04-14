@class NSObject;
@protocol OS_xpc_object;

@interface CSDeviceActivationXPCClient : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;

- (void)connect;
- (void)notifyActivationEvent:(id)a0 completion:(id /* block */)a1;
- (id)initWithMachServiceName:(const char *)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_decodeError:(id)a0;
- (id)init;
- (void)_handleListenerEvent:(id)a0;
- (void)_handleListenerError:(id)a0;
- (void)_sendMessage:(id)a0 connection:(id)a1 completion:(id /* block */)a2;

@end
