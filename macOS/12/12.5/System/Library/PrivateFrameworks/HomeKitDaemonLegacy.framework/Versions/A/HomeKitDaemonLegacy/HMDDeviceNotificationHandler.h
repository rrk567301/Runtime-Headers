@class HMFTimer, NSString, HMFMessageDispatcher, HMDHome, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue, HMDDeviceNotificationHandlerDataSource;

@interface HMDDeviceNotificationHandler : HMFObject <HMFLogging, HMDDeviceNotificationHandlerDataSource, HMFTimerDelegate>

@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSString *destination;
@property (retain, nonatomic) HMFTimer *coalesceTimer;
@property (retain, nonatomic) HMFTimer *delayTimer;
@property (nonatomic) BOOL delaySupported;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (readonly, nonatomic) id<HMDDeviceNotificationHandlerDataSource> dataSource;
@property (retain) NSMutableOrderedSet *deviceNotificationsByRequestIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (id)initWithDestination:(id)a0 watchDevice:(BOOL)a1 withRequestIdentifier:(id)a2 messageDispatcher:(id)a3 home:(id)a4;
- (void)sendNotificationForCharacteristicUpdates:(id)a0 withRequestIdentifier:(id)a1 notificationUpdateIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)sendNotificationForMediaProperties:(id)a0 withRequestIdentifier:(id)a1 notificationUpdateIdentifier:(id)a2;
- (id)initWithDestination:(id)a0 watchDevice:(BOOL)a1 withRequestIdentifier:(id)a2 messageDispatcher:(id)a3 home:(id)a4 dataSource:(id)a5;
- (id)_notificationUpdateWithRequestID:(id)a0 allowAdd:(BOOL)a1;
- (void)_beginCoalesce:(BOOL)a0;
- (void)_dispatchNotification;
- (id)timerWithType:(unsigned char)a0;
- (void)_dispatchNotificationUpdate:(id)a0;

@end
