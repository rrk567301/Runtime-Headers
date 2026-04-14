@class HMFExponentialBackoffTimer, NSString, HMDHome, NSObject, HMDHAPAccessory;
@protocol OS_dispatch_queue, HMDHAPAccessoryLocalNotifyUpdateManagerDataSource, HMDHAPAccessoryLocalNotifyUpdate;

@interface HMDHAPAccessoryLocalNotifyUpdateManager : NSObject <HMFLogging, HMFTimerDelegate, HMDHAPAccessoryLocalNotifyUpdateManager>

@property (retain) id<HMDHAPAccessoryLocalNotifyUpdate> pendingUpdate;
@property (retain) id<HMDHAPAccessoryLocalNotifyUpdate> inFlightUpdate;
@property (retain) id<HMDHAPAccessoryLocalNotifyUpdate> failedUpdate;
@property (readonly, weak) HMDHome *home;
@property (readonly, weak) HMDHAPAccessory *hmdHAPAccessory;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<HMDHAPAccessoryLocalNotifyUpdateManagerDataSource> dataSource;
@property BOOL inProcessing;
@property (retain) HMFExponentialBackoffTimer *failedUpdateRetryTimer;
@property unsigned long long failedUpdateRetryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)setEnable:(BOOL)a0 forCharacteristics:(id)a1 clientIdentifier:(id)a2 changeThresholds:(id)a3;
- (id)_filterOutUnchangedCharacteristicsFrom:(id)a0 enable:(BOOL)a1;
- (void)_handleUpdateComplete;
- (void)_handleUpdateCompletedSuccessfully;
- (void)_handleUpdateCompletedWithError:(id)a0;
- (id)_mergeFailedUpdateIfAnyToUpdate:(id)a0;
- (void)_processPendingUpdate;
- (void)_removeFailedUpdateRetryTimer;
- (void)_startFailedUpdateRetryTimer;
- (id)initWithHome:(id)a0 hmdHAPAccessory:(id)a1 queue:(id)a2;
- (id)initWithHome:(id)a0 hmdHAPAccessory:(id)a1 queue:(id)a2 dataSource:(id)a3;
- (void)processPendingUpdateIfAny;

@end
