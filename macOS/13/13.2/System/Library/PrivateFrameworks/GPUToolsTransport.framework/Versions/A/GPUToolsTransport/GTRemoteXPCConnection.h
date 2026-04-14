@class NSMutableArray, NSUUID, NSMutableDictionary, NSArray, NSObject, OS_xpc_remote_connection;
@protocol OS_xpc_object, OS_os_transaction;

@interface GTRemoteXPCConnection : NSObject <GTXPCConnection> {
    OS_xpc_remote_connection *_connection;
    NSObject<OS_os_transaction> *_transaction;
    NSMutableArray *_connectionHandlers;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly) unsigned long long originPort;
@property (readonly) NSUUID *originDeviceUUID;
@property (retain, nonatomic) NSMutableDictionary *observers;
@property (retain, nonatomic) NSObject<OS_xpc_object> *error;
@property (readonly) NSArray *proxyHandlers;

- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0;
- (void)sendMessage:(id)a0;
- (id)sendMessageWithReplySync:(id)a0;
- (void)dispatchMessage:(id)a0;
- (void)sendMessage:(id)a0 queue:(id)a1 replyHandler:(id /* block */)a2;
- (void)registerDispatcher:(id)a0 forServicePort:(unsigned long long)a1;
- (void)registerProxyHandler:(id /* block */)a0;
- (void)removeProxyHandler:(id /* block */)a0;
- (id)initWithTransactionScopedXPCConnection:(id)a0;

@end
