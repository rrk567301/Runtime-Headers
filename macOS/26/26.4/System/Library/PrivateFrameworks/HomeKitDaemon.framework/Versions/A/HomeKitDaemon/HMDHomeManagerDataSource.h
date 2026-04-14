@class HMDAppleAccountManager, HMDUserDefaults, HMDWidgetConfigurationReader, HMDIdentityRegistry, CKContainer, HMDRemoteAccountManager, HMDHomeData, HMDAccountRegistry, HMDCoreData, NSArray, NSUserDefaults, NSNotificationCenter;
@protocol HMDDemoModeManagerDataSource, HMDarwinNotificationProvider;

@interface HMDHomeManagerDataSource : NSObject <HMDHomeManagerDataSource> {
    void /* function */ uncommittedTransactions;
}

@property (nonatomic, readonly) HMDIdentityRegistry *identityRegistry;
@property (nonatomic, readonly) id<HMDarwinNotificationProvider> darwinNotificationProvider;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) HMDAppleAccountManager *appleAccountManager;
@property (nonatomic, readonly) HMDAccountRegistry *accountRegistry;
@property (nonatomic, readonly) CKContainer *cloudKitContainer;
@property (nonatomic, readonly) HMDRemoteAccountManager *remoteAccountManager;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;
@property (nonatomic, readonly) HMDUserDefaults *hmdUserDefaults;
@property (nonatomic, readonly) HMDWidgetConfigurationReader *widgetConfigurationReader;
@property (nonatomic, readonly) HMDCoreData *coreData;
@property (nonatomic, retain) id<HMDDemoModeManagerDataSource> demoModeDataSource;
@property (nonatomic, readonly) id /* block */ threadClientFactory;
@property (nonatomic, readonly) id acwgKeyManager;
@property (nonatomic, readonly) HMDHomeData *homeData;
@property (nonatomic, readonly) BOOL localDataDecryptionFailed;
@property (nonatomic, readonly) NSArray *uncommittedTransactions;

- (void).cxx_destruct;
- (id)init;
- (id)hh2ControllerKeyForHomeManager:(id)a0;
- (id)createBackingStoreForHomeManager:(id)a0 error:(id *)a1;
- (id)createWiFiManager;
- (id)makeAppleAccessoryPairingControllerWithHomeManager:(id)a0;
- (id)makeHH2FrameworkSwitchForHomeManager:(id)a0;
- (id)makeMobileAssetManagerWithContext:(id)a0;
- (id)makeSharedUserProfilePhotoManagerWithDelegate:(id)a0;

@end
