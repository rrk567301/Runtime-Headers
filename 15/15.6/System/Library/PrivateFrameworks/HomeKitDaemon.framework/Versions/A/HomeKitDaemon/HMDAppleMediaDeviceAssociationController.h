@class HMFTimer, NSUUID, NSString, NSNotificationCenter, HMDResidentSyncManager, NSObject, HMDBackingStore;
@protocol OS_dispatch_queue, HMDAppleMediaDeviceAssociationControllerDataSource, HMFTimerProvider;

@interface HMDAppleMediaDeviceAssociationController : NSObject <HMFMessageReceiver, HMFTimerProvider, HMFTimerDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _busy;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy) NSUUID *homeUUID;
@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly) HMDResidentSyncManager *residentSyncManager;
@property (readonly) HMDBackingStore *backingStore;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) id<HMDAppleMediaDeviceAssociationControllerDataSource> dataSource;
@property (weak) id<HMFTimerProvider> timerProvider;
@property (retain) HMFTimer *backoffTimer;
@property long long timerIntervalIndex;
@property (copy) id /* block */ mkfAppleMediaModelFinder;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_registerForNotifications:(id)a0;
- (void)_process;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (id)timerWithTimeInterval:(double)a0 options:(unsigned long long)a1;
- (double)nextInterval;
- (void)_setStatusBusy:(char)a0;
- (char)_currentDeviceHasDeviceAddress;
- (id)_deviceAssociationInfoFromProtoData:(id)a0;
- (void)_handleAppleAccountManagerResolvedNotification:(id)a0;
- (void)_handleDeviceUpdatedNotification:(id)a0;
- (void)_handleHMDAppleMediaDeviceAssociationPushMessage:(id)a0;
- (void)_handlePrimaryChange:(id)a0;
- (void)_handlePrimaryResidentDeviceAddressUpdate;
- (void)_pushDeviceAddress;
- (void)_pushDeviceAddressIfNeeded;
- (void)_registerForMessages:(id)a0 messageDispatcher:(id)a1;
- (void)_shouldPushDeviceAddressWithCompletion:(id /* block */)a0;
- (void)_startRetryTimer;
- (char)_statusBusy;
- (void)_updateIdsAddressWithAccessoryUUID:(id)a0 idsIdentifier:(id)a1 idsDestination:(id)a2 completion:(id /* block */)a3;
- (void)configureWithHome:(id)a0 messageDispatcher:(id)a1;
- (void)handleTransactionObjectUpdated;
- (id)initWithHome:(id)a0 accessory:(id)a1 dataSource:(id)a2;
- (id)initWithQueue:(id)a0 homeUUID:(id)a1 accessoryUUID:(id)a2 residentSyncManager:(id)a3 backingStore:(id)a4 notificationCenter:(id)a5 dataSource:(id)a6;
- (id)mkfAppleMediaAccessoryWithModelIdentifier:(id)a0;

@end
