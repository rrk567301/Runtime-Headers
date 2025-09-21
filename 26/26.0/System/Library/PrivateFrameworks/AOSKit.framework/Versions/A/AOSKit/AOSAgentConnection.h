@class NSObject;
@protocol OS_xpc_object;

@interface AOSAgentConnection : NSObject

@property (nonatomic) NSObject<OS_xpc_object> *connection;
@property (nonatomic) BOOL isDisconnected;

+ (void)initialize;
+ (id)errorFromMessage:(id)a0;
+ (id)errorStringFromMessage:(id)a0;
+ (id)resultFromMessage:(id)a0;

- (void)disconnect;
- (BOOL)isConnected;
- (void)dealloc;
- (id)init;
- (BOOL)connect;
- (void)sendMessageWithPayload:(id)a0 replyHandler:(id /* block */)a1 isAsync:(BOOL)a2;

@end
