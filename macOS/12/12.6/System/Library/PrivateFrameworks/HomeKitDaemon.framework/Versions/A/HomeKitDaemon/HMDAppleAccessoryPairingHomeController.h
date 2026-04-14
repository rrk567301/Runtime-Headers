@class HMFTimer, HMBLocalZone, HMDHomeManager, HMDAppleAccessoryPairingControllerDataSource, HMFFuture, HMDAppleAccessoryPairingHomeState, NSString;

@interface HMDAppleAccessoryPairingHomeController : HMFObject <HMBLocalZoneModelObserver, HMFTimerDelegate>

@property (readonly) HMBLocalZone *localZone;
@property (readonly) HMDHomeManager *homeManager;
@property (readonly) HMFTimer *upgradeCheckTimer;
@property (readonly, nonatomic) HMDAppleAccessoryPairingHomeState *state;
@property (readonly, nonatomic) HMDAppleAccessoryPairingControllerDataSource *dataSource;
@property (retain, nonatomic) HMFFuture *queryFuture;
@property (nonatomic) unsigned long long suppressedQueries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)workContext;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (BOOL)handleMessage:(id)a0 from:(id)a1;
- (id)localZone:(id)a0 didProcessModelDeletion:(id)a1;
- (id)localZone:(id)a0 didProcessModelCreation:(id)a1;
- (id)localZone:(id)a0 didProcessModelUpdate:(id)a1;
- (void)_handleDeviceNotification:(id)a0;
- (id)initWithState:(id)a0 homeManager:(id)a1 dataSource:(id)a2;
- (void)startWithLocalZone:(id)a0;
- (id)shimLegacyAccessory;
- (void)checkDeviceVersionAndSendUpgrade;
- (void)processHMDAppleMediaAccessoryModel:(id)a0;
- (void)cleanupLegacyZone;
- (void)processHMDResidentDeviceModel:(id)a0;

@end
