@class NSUUID, NSMutableDictionary, NSArray, NSObject;
@protocol OS_xpc_object, GTXPCConnection;

@interface GTServiceConnection : NSObject <GTXPCConnection> {
    id<GTXPCConnection> _connection;
    unsigned long long _servicePort;
}

@property (readonly) NSUUID *deviceUUID;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly) unsigned long long originPort;
@property (readonly) NSUUID *originDeviceUUID;
@property (retain, nonatomic) NSMutableDictionary *observers;
@property (retain, nonatomic) NSObject<OS_xpc_object> *error;
@property (readonly) NSArray *proxyHandlers;

- (void).cxx_destruct;
- (void)sendMessage:(id)a0;
- (id)sendMessageWithReplySync:(id)a0;
- (void)dispatchMessage:(id)a0;
- (void)sendMessage:(id)a0 queue:(id)a1 replyHandler:(id /* block */)a2;
- (void)registerDispatcher:(id)a0 forServicePort:(unsigned long long)a1;
- (void)registerProxyHandler:(id /* block */)a0;
- (void)removeProxyHandler:(id /* block */)a0;
- (id)initWithConnection:(id)a0 device:(id)a1 port:(unsigned long long)a2;
- (void)_setRoutingPropertiesForMessage:(id)a0;
- (id)_newNotificationForName:(id)a0;
- (void)addObserverForName:(id)a0 usingBlock:(id /* block */)a1;
- (void)removeObserverForName:(id)a0;

@end
