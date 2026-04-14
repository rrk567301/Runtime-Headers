@protocol DSMotionProviderDelegate;

@interface DSMotionProvider : DSProvider

@property (weak, nonatomic) id<DSMotionProviderDelegate> delegate;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)unsubscribed;
- (void)startMotionDataProviderWithOptions:(id)a0;
- (void)startedProviderWithOptions:(id)a0;
- (void)sendMotionData:(id)a0;
- (void)stopMotionDataProvider;
- (void)stoppedProvider;
- (void)subscribedToMotionDataWithOptions:(id)a0;
- (void)failedToStartProviderWithOptions:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)requestedMotionDataWithOption:(id)a0;
- (void)subscriptionExpired;

@end
