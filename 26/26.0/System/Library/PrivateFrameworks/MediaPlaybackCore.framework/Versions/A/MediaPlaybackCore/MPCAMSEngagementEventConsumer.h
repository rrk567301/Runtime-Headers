@class NSString, AMSEngagement;
@protocol MPCPlaybackEngineEventStreamSubscription;

@interface MPCAMSEngagementEventConsumer : NSObject <MPCPlaybackEngineEventConsumer>

@property (class, readonly, copy, nonatomic) NSString *identifier;
@property (class, readonly, nonatomic) unsigned int preferredQoSClass;

@property (readonly, nonatomic) id<MPCPlaybackEngineEventStreamSubscription> subscription;
@property (readonly, nonatomic) AMSEngagement *engagement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_JSONEncodableEvent:(id)a0;
- (BOOL)_enqueueDataForPlaybackChangingEvent:(id)a0 cursor:(id)a1;
- (void)subscribeToEventStream:(id)a0;
- (void)unsubscribeFromEventStream:(id)a0;

@end
