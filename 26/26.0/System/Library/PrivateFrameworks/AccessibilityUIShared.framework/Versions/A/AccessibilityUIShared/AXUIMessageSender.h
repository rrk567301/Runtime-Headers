@class AXDispatchTimer, NSMutableArray, AXAccessQueue;
@protocol AXUIMessageSenderDelegate;

@interface AXUIMessageSender : NSObject

@property (retain, nonatomic) NSMutableArray *messageQueue;
@property (retain, nonatomic) AXAccessQueue *messageSchedulingSerializationQueue;
@property (nonatomic, getter=isSendingMessage) BOOL sendingMessage;
@property (retain) AXDispatchTimer *sendingTimer;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } delegateAccessLock;
@property (weak, nonatomic) id<AXUIMessageSenderDelegate> delegate;

- (void)_sendXPCMessage:(id)a0 context:(void *)a1 completionBlock:(id /* block */)a2 completionRequiresWritingBlock:(BOOL)a3 targetAccessQueue:(id)a4 timeout:(double)a5;
- (id)sendSynchronousMessage:(id)a0 withIdentifier:(long long)a1 context:(void *)a2 error:(id *)a3;
- (void)_performBlock:(id /* block */)a0 inAccessQueue:(id)a1 treatAsWritingBlock:(BOOL)a2;
- (void)_sendLaunchAngelMessage:(id)a0 context:(void *)a1 remainingAttempts:(unsigned long long)a2 previousError:(id)a3 completion:(id /* block */)a4;
- (void)sendAsynchronousMessage:(id)a0 withIdentifier:(long long)a1 context:(void *)a2 targetAccessQueue:(id)a3 completionRequiresWritingBlock:(BOOL)a4 completion:(id /* block */)a5 timeout:(double)a6;
- (id)init;
- (void)_sendXPCMessage:(id)a0 context:(void *)a1 remainingAttempts:(unsigned long long)a2 previousError:(id)a3 completion:(id /* block */)a4;
- (void)_didFinishSendingXPCMessage:(id)a0 replyCustomData:(void *)a1;
- (void)sendAsynchronousMessage:(id)a0 withIdentifier:(long long)a1 context:(void *)a2 targetAccessQueue:(id)a3 completionRequiresWritingBlock:(BOOL)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;

@end
