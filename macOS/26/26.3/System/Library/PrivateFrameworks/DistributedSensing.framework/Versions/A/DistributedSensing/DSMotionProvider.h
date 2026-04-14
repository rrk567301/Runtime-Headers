@protocol DSMotionProviderDelegate;

@interface DSMotionProvider : DSProvider

@property (weak, nonatomic) id<DSMotionProviderDelegate> delegate;

- (void)sendMotionData:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)subscriptionExpired;
- (void)startMotionDataProviderWithOptions:(id)a0;
- (void)stoppedProvider;
- (void).cxx_destruct;
- (void)startedProviderWithOptions:(id)a0;
- (void)failedToStartProviderWithOptions:(id)a0 error:(id)a1;
- (void)subscribedToMotionDataWithOptions:(id)a0;
- (void)unsubscribed;
- (void)stopMotionDataProvider;
- (void)requestedMotionDataWithOption:(id)a0;

@end
