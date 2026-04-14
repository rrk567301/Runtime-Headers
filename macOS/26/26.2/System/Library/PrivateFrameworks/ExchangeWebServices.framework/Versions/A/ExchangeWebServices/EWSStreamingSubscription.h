@class EWSExchangeServiceBindingTask;
@protocol EWSStreamingSubscriptionDelegate;

@interface EWSStreamingSubscription : EWSSubscription

@property (retain) EWSExchangeServiceBindingTask *streamTask;
@property (weak) id<EWSStreamingSubscriptionDelegate> streamingDelegate;
@property BOOL shouldStream;

- (void)stop;
- (void).cxx_destruct;
- (void)start;
- (void)unsubscribe;
- (void)setDelegate:(id)a0;
- (void)exchangeServiceBindingTask:(id)a0 didFailWithError:(id)a1;
- (void)exchangeServiceBindingTask:(id)a0 didReceiveResponse:(id)a1;
- (void)exchangeServiceBindingTaskCompleted:(id)a0;
- (id)newSubscriptionRequest;
- (id)nextTask;

@end
