@class NSString, TRIServerContext, NSObject, _PASLock;
@protocol TRIPushServiceConnectionDelegate, TRIPushServiceChannelSubscribing, TRIPushServiceConnectionCreating, OS_dispatch_queue;

@interface TRIPushServiceConnectionMultiplexer : NSObject <TRIPushServiceConnectionMultiplexing> {
    TRIServerContext *_context;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_subscriptionQueue;
}

@property (readonly, nonatomic) id<TRIPushServiceConnectionCreating> connectionCreator;
@property (readonly, nonatomic) id<TRIPushServiceChannelSubscribing> currentConnection;
@property (readonly, nonatomic) id<TRIPushServiceConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isTestingIdentifier:(id)a0;
- (double)_debounceTime;
- (id)_channelIdFromRolloutDeployment:(id)a0;
- (id)initWithServerContext:(id)a0 taskQueue:(id)a1;
- (void)subscribeForRolloutDeployment:(id)a0;
- (void)switchToEnvironment:(unsigned char)a0;
- (void).cxx_destruct;
- (id)initWithConnectionCreator:(id)a0 connectionDelegate:(id)a1 serverContext:(id)a2;
- (void)_debouncedSubscribeToChannel:(id)a0;
- (void)_logFaultIfNotTestingIdentifier:(id)a0;
- (id)_channelIdFromExperimentId:(id)a0;
- (void)ensureSubscriptionsExistOnlyForRolloutDeployments:(id)a0 experimentIds:(id)a1 maxChannelsAllowed:(unsigned long long)a2;
- (void)unsubscribeForExperimentId:(id)a0;
- (id)_expectedChannelsForRolloutDeployments:(id)a0 experimentIds:(id)a1 maxChannelsAllowed:(unsigned long long)a2;
- (void)_setupDebounceTimerIfNeededWithGuardedData:(id)a0;
- (void)performQueuedSubscriptions;
- (void)subscribeForExperimentId:(id)a0;

@end
