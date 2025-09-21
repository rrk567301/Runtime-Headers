@class NSString;
@protocol MPCPlaybackEngineEventStreamSubscription;

@interface MPCVocalAttenuationPowerLogConsumer : NSObject <MPCPlaybackEngineEventConsumer>

@property (class, readonly, copy, nonatomic) NSString *identifier;

@property (readonly, nonatomic) id<MPCPlaybackEngineEventStreamSubscription> subscription;
@property (nonatomic) char lastVocalAttenuationIsActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reportVocalAttenuationIsActive:(char)a0 date:(id)a1;
- (void)subscribeToEventStream:(id)a0;
- (void)unsubscribeFromEventStream:(id)a0;

@end
