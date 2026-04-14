@class NSString;

@interface TRISystemConfiguration : NSObject {
    NSString *_persistentDeviceIdentifierPath;
    NSString *_cachedDeviceIdentifier;
}

+ (id)sharedInstance;
+ (id)_sharedSystemInfo;
+ (void)updateSystemInfoUsingContext:(id)a0;

- (id)deviceClass;
- (BOOL)setDeviceIdentifier:(id)a0;
- (BOOL)isInternalBuild;
- (BOOL)isDiagnosticsAndUsageEnabled;
- (id)deviceModelCode;
- (id)systemInfo;
- (id)deviceId;
- (id)initWithPaths:(id)a0;
- (id)enabledInputModeIdentifiers;
- (id)siriDeviceAggregationIdRotationDate;
- (id)userSettingsRegionCode;
- (id)userSettingsLanguageCode;
- (id)carrierCountryIsoCode;
- (BOOL)resetDeviceIdentifier;
- (id)mapsBucketId;
- (BOOL)isBetaBuild;
- (BOOL)hasAne;
- (id)_dispatchQueueForCarrierInfoGathering;
- (id)carrierBundleIdentifier;
- (void).cxx_destruct;
- (int)populationType;
- (long long)appleIntelligenceState;
- (id)osBuild;
- (id)aneVersion;
- (id)init;
- (BOOL)isAutomatedTestDevice;
- (id)osType;
- (id)createDeviceIdentifierWithPath:(id)a0;
- (BOOL)deleteDeviceIdentifierWithPath:(id)a0;
- (id)trialVersionTag;
- (id)_systemInfoWithIsStale:(BOOL *)a0;
- (id)_trialVersion;
- (BOOL)_updateSystemInfo:(id)a0;
- (id)activeDictationLocales;
- (id)createPersistentDeviceIdentifier;
- (BOOL)deleteDeviceIdentifier;
- (long long)deviceChipId;
- (id)deviceHardwareModel;
- (id)deviceInfoForQuestion:(id)a0;
- (id)deviceSystemId;
- (id)iCloudId;
- (BOOL)isBetaUserWithIsStale:(BOOL *)a0;
- (id)mapsDeviceCountryCode;
- (struct { long long x0; long long x1; long long x2; })marketingOSVersion;
- (id)readDeviceIdentifierWithPath:(id)a0;
- (id)reloadDeviceId;
- (id)reloadSystemInfo;
- (BOOL)setDeviceIdentifier:(id)a0 path:(id)a1;
- (id)storedDeviceIdentifier;
- (unsigned long long)trialVersionMajor;
- (unsigned long long)trialVersionMinor;
- (id)userSettingsBCP47DeviceLocale;
- (BOOL)userSettingsIsSiriEnabled;
- (id)userSettingsSiriLocale;

@end
