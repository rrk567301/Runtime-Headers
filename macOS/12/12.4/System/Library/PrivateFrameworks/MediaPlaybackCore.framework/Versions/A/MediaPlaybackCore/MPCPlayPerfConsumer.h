@class NSString;
@protocol MPCPlaybackEngineEventStreamSubscription;

@interface MPCPlayPerfConsumer : NSObject <MPCPlaybackEngineEventConsumer>

@property (class, readonly, copy, nonatomic) NSString *identifier;

@property (readonly, nonatomic) id<MPCPlaybackEngineEventStreamSubscription> subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleMetrics:(id)a0;
+ (void)sendMetrics:(id)a0;
+ (id)coreAnalyticsEventNameWithEventType:(id)a0;

@end
