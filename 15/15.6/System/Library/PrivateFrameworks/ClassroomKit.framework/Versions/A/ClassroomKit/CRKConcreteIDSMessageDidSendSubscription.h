@protocol CRKConcreteIDSMessageDidSendSubscriptionDelegate;

@interface CRKConcreteIDSMessageDidSendSubscription : NSObject <CRKResumable, CRKCancelable>

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic, getter=isResumed) char resumed;
@property (weak, nonatomic) id<CRKConcreteIDSMessageDidSendSubscriptionDelegate> delegate;

- (void).cxx_destruct;
- (void)resume;
- (void)cancel;
- (id)initWithHandler:(id /* block */)a0;
- (void)receiveMessageIdentifier:(id)a0 didSucceed:(char)a1 error:(id)a2;

@end
