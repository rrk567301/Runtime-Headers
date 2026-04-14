@class EWSExchangeServiceBindingTask;

@interface EWSStreamingSubscription : EWSSubscription

@property (retain) EWSExchangeServiceBindingTask *streamTask;
@property BOOL shouldStream;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)unsubscribe;
- (void)exchangeServiceBindingTask:(id)a0 didReceiveResponse:(id)a1;
- (void)exchangeServiceBindingTaskCompleted:(id)a0;
- (void)exchangeServiceBindingTask:(id)a0 didFailWithError:(id)a1;
- (id)nextTask;
- (id)newSubscriptionRequest;

@end
