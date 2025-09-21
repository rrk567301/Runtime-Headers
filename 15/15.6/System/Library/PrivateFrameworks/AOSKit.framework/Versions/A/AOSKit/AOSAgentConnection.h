@class NSObject;
@protocol OS_xpc_object;

@interface AOSAgentConnection : NSObject

@property (nonatomic) NSObject<OS_xpc_object> *connection;
@property (nonatomic) char isDisconnected;

+ (void)initialize;
+ (id)errorFromMessage:(id)a0;
+ (id)errorStringFromMessage:(id)a0;
+ (id)resultFromMessage:(id)a0;

- (void)dealloc;
- (id)init;
- (void)disconnect;
- (char)connect;
- (char)isConnected;
- (void)sendMessageWithPayload:(id)a0 replyHandler:(id /* block */)a1 isAsync:(char)a2;

@end
