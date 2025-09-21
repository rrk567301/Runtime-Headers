@class NSObject, HMFSoftwareVersion, HMDAccessoryMatterFirmwareUpdateProfile, NSNotificationCenter, NSString, HMDHAPAccessory, HMDService;
@protocol OS_dispatch_queue;

@interface HMDAccessoryFirmwareUpdateProfile : HMFObject <HMFLogging>

@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly, weak) HMDService *service;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) unsigned long long updateDuration;
@property (nonatomic) long long updateState;
@property (retain, nonatomic) HMFSoftwareVersion *currentVersion;
@property (nonatomic) unsigned long long stagingNotReadyReasons;
@property (nonatomic) unsigned long long updateNotReadyReasons;
@property (retain, nonatomic) HMFSoftwareVersion *stagedFirmwareVersion;
@property (nonatomic, getter=notificationsEnabled) char notificationsEnabled;
@property (retain, nonatomic) HMDAccessoryMatterFirmwareUpdateProfile *matterFirmwareUpdateProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_registerForNotifications;
- (id)privateDescription;
- (void)configure;
- (id)characteristics;
- (id)logIdentifier;
- (void)__handleAccessoryIsReachable;
- (void)__handleFirmwareUpdateReadinessUpdate:(id)a0;
- (void)__handleFirmwareUpdateStatusUpdate:(id)a0;
- (void)__handleFirmwareVersionUpdate:(id)a0;
- (void)__handleStagedFirmwareVersionUpdate:(id)a0;
- (void)_enableCharacteristicsNotifications:(char)a0;
- (void)_handleCharacteristicChanges:(id)a0;
- (void)_updateAccessoryFirmwareVersion:(id)a0;
- (void)_updateFirmwareStagingNotReadyReasons:(unsigned long long)a0;
- (void)_updateFirmwareUpdateDuration:(unsigned long long)a0;
- (void)_updateFirmwareUpdateNotReadyReasons:(unsigned long long)a0;
- (void)_updateFirmwareUpdateState:(long long)a0;
- (void)_updateStagedFirmwareVersion:(id)a0;
- (id)firmwareVersionCharacteristic;
- (void)handleAccessoryIsReachable:(id)a0;
- (void)handleCharacteristicValuesChanged:(id)a0;
- (id)initWithAccessory:(id)a0 service:(id)a1 workQueue:(id)a2;
- (id)matterFirmwareVersionCharacteristic;
- (void)monitorCharacteristics:(char)a0;
- (void)readAndProcessCharacteristics:(id)a0 withCompletion:(id /* block */)a1;
- (id)readinessCharacteristic;
- (id)statusCharacteristic;
- (void)updateProfileWithCompletion:(id /* block */)a0;
- (void)updateProfileWithStagedFirmwareVersion:(id)a0;

@end
