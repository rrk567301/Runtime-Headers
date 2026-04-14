@class NSObject;
@protocol OS_xpc_object, GTXPCConnection;

@interface GTRelayedXPCConnection : NSObject <GTXPCConnection> {
    id<GTXPCConnection> _connection;
    struct MessageRemoteRoutingInfo { unsigned long long hostPort; unsigned long long hostPid; unsigned long long remotePid; BOOL onRemote; char _padding[7]; } _routingInfo;
    BOOL _handleDeviceLocally;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *error;

- (void)sendMessage:(id)a0;
- (void)cancel;
- (BOOL)isTrusted;
- (void).cxx_destruct;
- (void)sendMessage:(id)a0 replyHandler:(id /* block */)a1;
- (id)initWithConnection:(id)a0 routingInfo:(struct MessageRemoteRoutingInfo { unsigned long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; char x4[7]; })a1;
- (void)activateWithMessageHandler:(id /* block */)a0 andErrorHandler:(id /* block */)a1;
- (void)dispatchMessage:(id)a0 replyConnection:(id)a1;
- (void)registerDispatcher:(id)a0 forPort:(unsigned long long)a1;
- (id)sendMessageWithReplySync:(id)a0 error:(id *)a1;
- (void)_setRoutingPropertiesForMessage:(id)a0;
- (void)deregisterDispatcher:(unsigned long long)a0;
- (unsigned long long)registerDispatcher:(id)a0;
- (void)sendMessageAndWaitForDelivery:(id)a0;
- (void)setHandleDeviceLocally;

@end
