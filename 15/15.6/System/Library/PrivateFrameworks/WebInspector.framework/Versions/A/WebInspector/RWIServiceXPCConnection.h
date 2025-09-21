@class NSObject;
@protocol OS_xpc_object;

@interface RWIServiceXPCConnection : RWIServiceConnection {
    char _validated;
    NSObject<OS_xpc_object> *_connection;
}

- (void).cxx_destruct;
- (void)sendMessage:(id)a0;
- (char)isConnected;
- (void)_handleXPCEvent:(id)a0;
- (void)closeInternal;
- (id)initWithMachine:(id)a0 xpcServiceName:(const char *)a1 delegate:(id)a2;

@end
