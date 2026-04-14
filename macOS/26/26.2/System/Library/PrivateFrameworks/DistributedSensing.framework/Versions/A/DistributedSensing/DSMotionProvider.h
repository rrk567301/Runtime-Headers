@protocol DSMotionProviderDelegate;

@interface DSMotionProvider : DSProvider

@property (weak, nonatomic) id<DSMotionProviderDelegate> delegate;

- (void)startMotionDataProviderWithOptions:(id)a0;
- (void)stopMotionDataProvider;
- (void)startedProviderWithOptions:(id)a0;
- (void)requestedMotionDataWithOption:(id)a0;
- (void)subscribedToMotionDataWithOptions:(id)a0;
- (void)sendMotionData:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)failedToStartProviderWithOptions:(id)a0 error:(id)a1;
- (void)stoppedProvider;
- (void)subscriptionExpired;
- (void)unsubscribed;

@end
