@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, AXHeardServerDelegate;

@interface AXHeardServer : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (weak, nonatomic) id<AXHeardServerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)terminateConnection;
- (void)resetConnection;
- (void)handleReply:(id)a0;
- (void)sendMessageWithPayload:(id)a0 andIdentifier:(unsigned long long)a1;
- (void)handleMessageWithPayload:(id)a0 forIdentifier:(unsigned long long)a1;
- (void)handleMessageError:(id)a0 destructive:(BOOL)a1;
- (id)setupServerIfNecessary;
- (void)startServerWithDelegate:(id)a0;
- (void)sendSynchronousMessageWithPayload:(id)a0 andIdentifier:(unsigned long long)a1;

@end
