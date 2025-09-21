@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface _DRCConnectionState : NSObject

@property (readonly, nonatomic) char hasConnection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;

+ (id)sharedConnectionState;

- (id)init;
- (void).cxx_destruct;
- (char)sendMessage:(id)a0;
- (id)sendMessageWithReplySync:(id)a0;

@end
