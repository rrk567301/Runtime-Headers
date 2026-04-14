@class ACMonitoredAccountStore, NSArray, NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HUHearingAidSettings : HCSettings <ACMonitoredAccountStoreDelegateProtocol> {
    ACMonitoredAccountStore *_accountStore;
    int _contentProtectionNotifyToken;
    BOOL _finishediCloudSetup;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *icloudInitializationQueue;
@property (retain, nonatomic) NSDictionary *pairedHearingAids;
@property (readonly, nonatomic) NSArray *peripheralUUIDs;
@property (nonatomic) BOOL clearPartialPairing;
@property (retain, nonatomic) NSDictionary *knownPeripheralUUIDs;
@property (nonatomic) BOOL independentHearingAidSettings;
@property (nonatomic) BOOL shouldStreamToLeftAid;
@property (nonatomic) BOOL shouldStreamToRightAid;
@property (nonatomic) long long callAudioRoute;
@property (nonatomic) long long mediaAudioRoute;
@property (nonatomic) BOOL multideviceSettingsEnabled;
@property (nonatomic) BOOL multideviceAudioEnabled;
@property (nonatomic) BOOL shouldStreamSystemSounds;
@property (nonatomic) long long complicationPreferredDisplayMode;
@property (nonatomic) int availableInputEars;
@property (nonatomic) int earsSupportingWatch;
@property (nonatomic) int preferredInputEar;
@property (retain, nonatomic) NSString *availableHearingDeviceName;
@property (nonatomic) unsigned long long usedHearingFeatures;
@property (nonatomic) BOOL exportsLiveListenToFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)logMessage:(id)a0;
- (BOOL)isiCloudPaired;
- (id)preferenceKeyForSelector:(SEL)a0;
- (id)convertPersistentRepresentation:(id)a0 fromVersion:(float)a1 toVersion:(float)a2;
- (void)iCloudAccountDidChange:(id)a0;
- (void)updateStreamingPreference;
- (BOOL)isPairedWithRealHearingAids;
- (BOOL)isDeviceIDOnCloudDenylist:(id)a0;
- (unsigned long long)hearingAidsLEAVersionFromiCloud;
- (void)addDeviceIDToCloudDenylist:(id)a0;
- (void)removeDeviceIDFromCloudDenylist:(id)a0;
- (BOOL)shouldUseiCloud;
- (BOOL)shouldStoreLocally;
- (id)keysToSync;
- (void)dealloc;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (void)pushLocalHearingAidsToiCloud;
- (void)setLocalHearingAidsFromiCloud:(id)a0;
- (void).cxx_destruct;
- (id)deviceIDForPairingInformation:(id)a0;
- (void)accountCredentialChanged:(id)a0;
- (BOOL)isPairedWithFakeHearingAids;
- (void)pairedWatchDidChange:(id)a0;
- (void)accountWasAdded:(id)a0;
- (BOOL)shouldPushLocalAidsToiCloud;
- (void)icloudHearingSettingsDidChange:(id)a0;
- (void)accountWasRemoved:(id)a0;
- (void)accountWasModified:(id)a0;
- (void)_initializeICloudSetup;
- (void)_accessibilitySettingsChangedOnCompanion;
- (id)init;

@end
