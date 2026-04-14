@class NSMutableDictionary, NSDictionary, NSMutableSet, ACAccountStore;

@interface AXHASettings : NSObject {
    ACAccountStore *_accountStore;
}

@property (retain, nonatomic) NSMutableSet *registeredNotifications;
@property (retain, nonatomic) NSMutableSet *synchronizePreferences;
@property (retain, nonatomic) NSMutableDictionary *updateBlocks;
@property (retain, nonatomic) NSDictionary *pairedHearingAids;
@property (nonatomic) BOOL independentHearingAidSettings;
@property (nonatomic) BOOL allowHearingAidControlOnLockScreen;
@property (nonatomic) BOOL shouldStreamToLeftAid;
@property (nonatomic) BOOL shouldStreamToRightAid;
@property (nonatomic) long long callAudioRoute;
@property (nonatomic) long long mediaAudioRoute;
@property (nonatomic) long long inputRoutingOption;
@property (nonatomic) BOOL multideviceSettingsEnabled;
@property (nonatomic) BOOL multideviceAudioEnabled;
@property (nonatomic) BOOL exportsLiveListenToFile;

+ (void)initialize;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isiCloudPaired;
- (void)_registerForNotification:(id)a0;
- (void)registerUpdateBlock:(id /* block */)a0 forRetrieveSelector:(SEL)a1 withListener:(id)a2;
- (void)iCloudAccountDidChange:(id)a0;
- (id)_notificationForPreferenceKey:(id)a0;
- (id)_preferenceKeyForSelector:(SEL)a0;
- (void)_setValue:(id)a0 forPreferenceKey:(id)a1;
- (void)_synchronizeIfNecessary:(id)a0;
- (void)_handlePreferenceChanged:(id)a0;
- (id)_valueForPreferenceKey:(id)a0;
- (BOOL)shouldUseiCloud;
- (void)icloudHearingSettingsDidChange:(id)a0;
- (void)pushLocalHearingAidsToiCloud;
- (void)setLocalHearingAidsFromiCloud:(id)a0;
- (id)convertPersistentRepresentation:(id)a0 fromVersion:(float)a1 toVersion:(float)a2;
- (id)deviceIDForPairingInformation:(id)a0;
- (BOOL)isDeviceIDOnCloudBlacklist:(id)a0;
- (void)addDeviceIDToCloudBlacklist:(id)a0;
- (void)removeDeviceIDFromCloudBlacklist:(id)a0;
- (BOOL)isPairedWithFakeHearingAids;

@end
