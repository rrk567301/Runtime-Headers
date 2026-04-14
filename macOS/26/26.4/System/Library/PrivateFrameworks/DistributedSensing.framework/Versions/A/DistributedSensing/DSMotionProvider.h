@protocol DSMotionProviderDelegate;

@interface DSMotionProvider : DSProvider

@property (weak, nonatomic) id<DSMotionProviderDelegate> delegate;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)unsubscribed;
- (void)failedToStartProviderWithOptions:(id)a0 error:(id)a1;
- (void)sendMotionData:(id)a0;
- (void)stopMotionDataProvider;
- (void)requestedMotionDataWithOption:(id)a0;
- (void)startMotionDataProviderWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)subscribedToMotionDataWithOptions:(id)a0;
- (void)stoppedProvider;
- (void)subscriptionExpired;
- (void)startedProviderWithOptions:(id)a0;

@end
