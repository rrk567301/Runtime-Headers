@class NSUUID, NSArray, NSNotificationCenter, NSString, HMDMediaGroupsAggregateData;
@protocol HMDMediaGroupsAggregateConsumerDelegate, HMESubscriptionProviding;

@interface HMDMediaGroupsAggregateConsumer : HMFObject <HMFLogging, HMEEventConsumer, HMDMediaGroupsAggregateConsumerDataProvider> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMDMediaGroupsAggregateData *_lastReceivedData;
}

@property (readonly, copy) NSUUID *identifier;
@property (readonly) id<HMESubscriptionProviding> subscriptionProvider;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDMediaGroupsAggregateData *aggregationData;
@property (weak) id<HMDMediaGroupsAggregateConsumerDelegate> delegate;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)unconfigure;
- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (void)configureWithHome:(id)a0;
- (id)destinationControllerDataWithParentIdentifier:(id)a0;
- (id)destinationWithIdentifier:(id)a0;
- (id)destinationWithParentIdentifier:(id)a0;
- (id)groupWithIdentifier:(id)a0;
- (id)allMediaSystemData;
- (id)mediaSystemDataWithIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 subscriptionProvider:(id)a1 notificationCenter:(id)a2;
- (void)setAggregationData:(id)a0;
- (void)stopSubscription;
- (void)startSubscriptionForHome:(id)a0;
- (void)notifyOfUpdatedAggregateData;
- (BOOL)isAggregateTopic:(id)a0;

@end
