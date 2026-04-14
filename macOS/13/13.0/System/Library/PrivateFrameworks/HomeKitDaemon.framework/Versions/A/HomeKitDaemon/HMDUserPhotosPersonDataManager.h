@class NSUUID, NSString, HMDUser, HMCContext, HMFMessageDispatcher, HMDCloudPhotosSettingObserver, HMDPhotosPersonManagerSettingsModel, HMPhotosPersonManagerSettings, NSObject, HMDPhotosPersonManager;
@protocol OS_dispatch_queue;

@interface HMDUserPhotosPersonDataManager : HMFObject <HMFLogging, HMFMessageReceiver>

@property (class, readonly, copy) HMPhotosPersonManagerSettings *defaultSettings;

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSUUID *homeUUID;
@property (readonly, copy) NSUUID *userUUID;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMCContext *backingStoreContext;
@property (readonly) BOOL supportsFaceClassification;
@property (weak) HMDUser *user;
@property (retain) HMDPhotosPersonManagerSettingsModel *settingsModel;
@property (retain) HMDPhotosPersonManager *personManager;
@property (readonly) HMDCloudPhotosSettingObserver *cloudPhotosSettingObserver;
@property (copy) id /* block */ personManagerFactory;
@property (readonly, copy) HMPhotosPersonManagerSettings *settings;
@property (readonly, copy) NSUUID *zoneUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)settingsModelUUIDWithUUID:(id)a0;

- (void).cxx_destruct;
- (void)configure;
- (id)logIdentifier;
- (void)handleUpdatePersonManagerSettingsMessage:(id)a0;
- (void)handleUpdatePersonManagerOwnerSettingsMessage:(id)a0;
- (void)handleUserCamerasAccessLevelDidChangeNotification:(id)a0;
- (void)handleUserRemoteAccessDidChangeNotification:(id)a0;
- (void)handleHomePersonManagerSettingsDidChangeNotification:(id)a0;
- (id)initWithUser:(id)a0 messageDispatcher:(id)a1 workQueue:(id)a2;
- (id)initWithUser:(id)a0 messageDispatcher:(id)a1 backingStoreContext:(id)a2 workQueue:(id)a3 supportsFaceClassification:(BOOL)a4 cloudPhotosSettingObserver:(id)a5;
- (void)recoverDueToUUIDChangeFromOldUUID:(id)a0;
- (void)removeCloudData;
- (id)updateSettingsModelWithSettings:(id)a0;
- (void)handleUpdatedSettingsModel:(id)a0;
- (id)settingsModelUUID;
- (id)persistedSettingsModel;
- (id)photosPersonManagerZoneUUIDForAnyOtherHomeCurrentUser;
- (void)configurePhotosPersonManagerWithSettingsModel:(id)a0;
- (void)updateSettingsForCurrentCameraClipsAccess;
- (void)removeCloudDataForZoneUUID:(id)a0;

@end
