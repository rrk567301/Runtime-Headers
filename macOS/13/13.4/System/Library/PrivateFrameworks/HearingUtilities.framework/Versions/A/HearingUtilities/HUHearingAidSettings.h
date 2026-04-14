@class NSDictionary, ACAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface HUHearingAidSettings : HCSettings {
    ACAccountStore *_accountStore;
    int _contentProtectionNotifyToken;
    BOOL _finishediCloudSetup;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *icloudInitializationQueue;
@property (retain, nonatomic) NSDictionary *pairedHearingAids;
@property (nonatomic) BOOL clearPartialPairing;
@property (retain, nonatomic) NSDictionary *knownPeripheralUUIDs;
@property (nonatomic) BOOL independentHearingAidSettings;
@property (nonatomic) BOOL allowHearingAidControlOnLockScreen;
@property (nonatomic) BOOL shouldStreamToLeftAid;
@property (nonatomic) BOOL shouldStreamToRightAid;
@property (nonatomic) long long callAudioRoute;
@property (nonatomic) long long mediaAudioRoute;
@property (nonatomic) BOOL multideviceSettingsEnabled;
@property (nonatomic) BOOL multideviceAudioEnabled;
@property (nonatomic) BOOL shouldStreamSystemSounds;
@property (nonatomic) long long complicationPreferredDisplayMode;
@property (nonatomic) unsigned long long usedHearingFeatures;
@property (nonatomic) BOOL exportsLiveListenToFile;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)logMessage:(id)a0;
- (BOOL)isiCloudPaired;
- (void)iCloudAccountDidChange:(id)a0;
- (id)preferenceKeyForSelector:(SEL)a0;
- (id)keysToSync;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (BOOL)shouldStoreLocally;
- (void)icloudHearingSettingsDidChange:(id)a0;
- (BOOL)shouldUseiCloud;
- (void)_accessibilitySettingsChangedOnCompanion;
- (void)_initializeICloudSetup;
- (void)addDeviceIDToCloudDenylist:(id)a0;
- (id)convertPersistentRepresentation:(id)a0 fromVersion:(float)a1 toVersion:(float)a2;
- (id)deviceIDForPairingInformation:(id)a0;
- (BOOL)isDeviceIDOnCloudDenylist:(id)a0;
- (BOOL)isPairedWithFakeHearingAids;
- (BOOL)isPairedWithRealHearingAids;
- (void)pushLocalHearingAidsToiCloud;
- (void)removeDeviceIDFromCloudDenylist:(id)a0;
- (void)setLocalHearingAidsFromiCloud:(id)a0;
- (BOOL)shouldPushLocalAidsToiCloud;
- (void)updateStreamingPreference;

@end
