@class NSString, HMDAccessory, HMSoftwareUpdateDescriptor, NSObject;
@protocol HMELastEventStoreReadHandle, OS_dispatch_queue, HMESubscriptionProviding;

@interface HMDSoftwareUpdateEventListenerContext : HMFObject <HMFLogging>

@property (readonly, weak) HMDAccessory *accessory;
@property (readonly) id<HMESubscriptionProviding> subscriptionProvider;
@property (readonly) id<HMELastEventStoreReadHandle> eventStoreReadHandle;
@property (readonly, copy) NSString *topicForSoftwareUpdateDescriptor;
@property (readonly) long long softwareUpdateStatusForLastEvent;
@property (readonly) HMSoftwareUpdateDescriptor *softwareUpdateDescriptorForLastEvent;
@property (readonly, copy) NSString *accessoryString;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)registerConsumer:(id)a0 topicFilters:(id)a1 completion:(id /* block */)a2;
- (id)initWithAccessory:(id)a0 subscriptionProvider:(id)a1 eventStoreReadHandle:(id)a2;
- (void)updateAppBadgeAndBulletinNotification;
- (void)handleSoftwareUpdateDidBecomeAvailableWithDescriptor:(id)a0;

@end
