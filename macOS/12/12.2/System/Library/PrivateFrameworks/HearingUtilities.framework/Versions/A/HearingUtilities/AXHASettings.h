@class NSMutableDictionary, NSDictionary, NSMutableSet, ACAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface AXHASettings : NSObject {
    ACAccountStore *_accountStore;
    int _contentProtectionNotifyToken;
    BOOL _finishediCloudSetup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _syncLock;
}

@property (retain, nonatomic) NSMutableSet *registeredNotifications;
@property (retain, nonatomic) NSMutableSet *synchronizePreferences;
@property (retain, nonatomic) NSMutableDictionary *updateBlocks;
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

+ (void)initialize;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isiCloudPaired;
- (void)_registerForNotification:(id)a0;
- (struct __CFString { } *)domainNameForPreferenceKey:(id)a0;
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
- (BOOL)isPairedWithFakeHearingAids;
- (void)_initializeICloudSetup;
- (BOOL)isDeviceIDOnCloudDenylist:(id)a0;
- (BOOL)shouldPushLocalAidsToiCloud;
- (void)addDeviceIDToCloudDenylist:(id)a0;
- (void)removeDeviceIDFromCloudDenylist:(id)a0;
- (void)updateStreamingPreference;
- (BOOL)isPairedWithRealHearingAids;

@end
