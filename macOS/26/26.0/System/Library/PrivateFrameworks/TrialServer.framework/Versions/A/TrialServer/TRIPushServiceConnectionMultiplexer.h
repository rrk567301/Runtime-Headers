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

- (id)initWithServerContext:(id)a0 taskQueue:(id)a1;
- (id)initWithConnectionCreator:(id)a0 connectionDelegate:(id)a1 serverContext:(id)a2;
- (void)performQueuedSubscriptions;
- (id)_channelIdFromRolloutDeployment:(id)a0;
- (double)_debounceTime;
- (void)ensureSubscriptionsExistOnlyForRolloutDeployments:(id)a0 experimentIds:(id)a1 maxChannelsAllowed:(unsigned long long)a2;
- (void)subscribeForExperimentId:(id)a0;
- (id)_channelIdFromExperimentId:(id)a0;
- (void)switchToEnvironment:(unsigned char)a0;
- (void)unsubscribeForExperimentId:(id)a0;
- (void)_debouncedSubscribeToChannel:(id)a0;
- (void)_logFaultIfNotTestingIdentifier:(id)a0;
- (void)_setupDebounceTimerIfNeededWithGuardedData:(id)a0;
- (BOOL)_isTestingIdentifier:(id)a0;
- (id)_expectedChannelsForRolloutDeployments:(id)a0 experimentIds:(id)a1 maxChannelsAllowed:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)subscribeForRolloutDeployment:(id)a0;

@end
