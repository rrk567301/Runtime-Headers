@class AXUIMessageSender;
@protocol AXUIMessageSenderDelegate;

@interface AXUIMessageSendHandler : NSObject

@property (weak, nonatomic) id<AXUIMessageSenderDelegate> delegate;
@property (weak, nonatomic) AXUIMessageSender *messageSender;
@property (nonatomic) unsigned long long remainingAttempts;
@property (copy) id /* block */ completion;

- (void).cxx_destruct;
- (id)initWithMessageSender:(id)a0 delegate:(id)a1;
- (void)_sendMessage:(id)a0 context:(void *)a1 previousError:(id)a2;
- (void)sendXPCMessage:(id)a0 context:(void *)a1 completion:(id /* block */)a2;
- (void)stopSendingXPCMessage;

@end
