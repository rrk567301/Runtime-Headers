@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface _DRCTaskingConnectionState : NSObject

@property (readonly, nonatomic) BOOL isClosed;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;

+ (id)sharedConnectionState;

- (BOOL)sendMessage:(id)a0;
- (id)init;
- (id)sendMessageWithReplySync:(id)a0;
- (void)cleanupState;
- (void).cxx_destruct;

@end
