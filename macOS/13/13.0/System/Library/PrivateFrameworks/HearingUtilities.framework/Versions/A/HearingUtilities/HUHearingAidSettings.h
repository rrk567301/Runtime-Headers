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
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (BOOL)shouldStoreLocally;
- (id)keysToSync;
- (void)icloudHearingSettingsDidChange:(id)a0;
- (void)_initializeICloudSetup;
- (BOOL)isPairedWithFakeHearingAids;
- (BOOL)isPairedWithRealHearingAids;
- (id)convertPersistentRepresentation:(id)a0 fromVersion:(float)a1 toVersion:(float)a2;
- (BOOL)shouldUseiCloud;
- (void)setLocalHearingAidsFromiCloud:(id)a0;
- (BOOL)shouldPushLocalAidsToiCloud;
- (void)pushLocalHearingAidsToiCloud;
- (void)updateStreamingPreference;
- (id)deviceIDForPairingInformation:(id)a0;
- (void)_accessibilitySettingsChangedOnCompanion;
- (void)addDeviceIDToCloudDenylist:(id)a0;
- (void)removeDeviceIDFromCloudDenylist:(id)a0;
- (BOOL)isDeviceIDOnCloudDenylist:(id)a0;

@end
