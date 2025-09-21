@class EWSExchangeServiceBindingTask;

@interface EWSPullSubscription : EWSSubscription

@property (retain) EWSExchangeServiceBindingTask *pullTask;
@property BOOL shouldPull;

- (void)unsubscribe;
- (void).cxx_destruct;
- (void)exchangeServiceBindingTask:(id)a0 didFailWithError:(id)a1;
- (void)exchangeServiceBindingTask:(id)a0 didReceiveResponse:(id)a1;
- (void)exchangeServiceBindingTaskCompleted:(id)a0;
- (id)newSubscriptionRequest;
- (id)nextTask;
- (void)pull;

@end
