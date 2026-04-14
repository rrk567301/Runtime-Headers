@class NSString;

@interface TRISystemConfiguration : NSObject {
    NSString *_persistentDeviceIdentifierPath;
    NSString *_cachedDeviceIdentifier;
}

+ (id)sharedInstance;
+ (void)updateSystemInfoUsingContext:(id)a0;
+ (id)_sharedSystemInfo;

- (BOOL)isInternalBuild;
- (id)enabledInputModeIdentifiers;
- (id)deviceClass;
- (id)deviceId;
- (id)siriDeviceAggregationIdRotationDate;
- (id)aneVersion;
- (BOOL)setDeviceIdentifier:(id)a0;
- (BOOL)isBetaBuild;
- (id)_dispatchQueueForCarrierInfoGathering;
- (id)userSettingsLanguageCode;
- (id)deviceModelCode;
- (BOOL)resetDeviceIdentifier;
- (id)systemInfo;
- (id)init;
- (id)initWithPaths:(id)a0;
- (id)mapsBucketId;
- (BOOL)isDiagnosticsAndUsageEnabled;
- (id)osBuild;
- (BOOL)hasAne;
- (BOOL)isAutomatedTestDevice;
- (long long)appleIntelligenceState;
- (int)populationType;
- (id)userSettingsRegionCode;
- (id)carrierCountryIsoCode;
- (id)carrierBundleIdentifier;
- (void).cxx_destruct;
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
