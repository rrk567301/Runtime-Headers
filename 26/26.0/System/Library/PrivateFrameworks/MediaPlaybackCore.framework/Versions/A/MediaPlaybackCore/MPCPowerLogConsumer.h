@class NSString;
@protocol MPCPlaybackEngineEventStreamSubscription;

@interface MPCPowerLogConsumer : NSObject <MPCPlaybackEngineEventConsumer>

@property (class, readonly, nonatomic) struct PPSTelemetryIdentifier { } *songTransitionsTelemetryID;
@property (class, readonly, copy, nonatomic) NSString *identifier;
@property (class, readonly, nonatomic) unsigned int preferredQoSClass;

@property (readonly, nonatomic) id<MPCPlaybackEngineEventStreamSubscription> subscription;
@property (nonatomic) BOOL lastVocalAttenuationIsActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reportSongTransitionInfo:(double)a0 transitionProvided:(long long)a1 date:(id)a2;
- (void)reportVocalAttenuationIsActive:(BOOL)a0 date:(id)a1;
- (void)subscribeToEventStream:(id)a0;
- (void)unsubscribeFromEventStream:(id)a0;

@end
