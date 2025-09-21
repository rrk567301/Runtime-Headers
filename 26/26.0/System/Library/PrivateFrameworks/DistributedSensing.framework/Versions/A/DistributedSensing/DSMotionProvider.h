@protocol DSMotionProviderDelegate;

@interface DSMotionProvider : DSProvider

@property (weak, nonatomic) id<DSMotionProviderDelegate> delegate;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)failedToStartProviderWithOptions:(id)a0 error:(id)a1;
- (void)unsubscribed;
- (void)subscriptionExpired;
- (void)stopMotionDataProvider;
- (void)subscribedToMotionDataWithOptions:(id)a0;
- (void)sendMotionData:(id)a0;
- (void)startedProviderWithOptions:(id)a0;
- (void)stoppedProvider;
- (void)requestedMotionDataWithOption:(id)a0;
- (void)startMotionDataProviderWithOptions:(id)a0;
- (void).cxx_destruct;

@end
