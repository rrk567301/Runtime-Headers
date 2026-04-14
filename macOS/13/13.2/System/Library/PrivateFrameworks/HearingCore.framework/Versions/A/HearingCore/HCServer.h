@class NSObject;
@protocol AXHeardServerMessageDelegate, OS_xpc_object, OS_dispatch_queue, AXHeardServerDelegate;

@interface HCServer : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic) BOOL deadConnection;
@property (weak, nonatomic) id<AXHeardServerDelegate> delegate;
@property (weak, nonatomic) id<AXHeardServerMessageDelegate> messageDelegate;
@property (readonly, nonatomic) BOOL isConnected;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resetConnection;
- (void)handleReply:(id)a0;
- (void)sendMessageWithPayload:(id)a0 andIdentifier:(unsigned long long)a1;
- (void)terminateConnectionAndNotify:(BOOL)a0;
- (void)handleMessageWithPayload:(id)a0 forIdentifier:(unsigned long long)a1;
- (void)handleMessageError:(id)a0 destructive:(BOOL)a1;
- (BOOL)shouldRestartOnInterruption;
- (void)startServerWithDelegate:(id)a0;
- (id)setupServerIfNecessary;
- (void)sendSynchronousMessageWithPayload:(id)a0 andIdentifier:(unsigned long long)a1;
- (void)startServerAndBoostPriority;

@end
