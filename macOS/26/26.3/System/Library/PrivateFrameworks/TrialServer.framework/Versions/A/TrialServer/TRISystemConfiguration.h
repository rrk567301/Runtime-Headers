@class NSString;

@interface TRISystemConfiguration : NSObject {
    NSString *_persistentDeviceIdentifierPath;
    NSString *_cachedDeviceIdentifier;
}

+ (id)sharedInstance;
+ (id)_sharedSystemInfo;
+ (void)updateSystemInfoUsingContext:(id)a0;

- (id)osBuild;
- (id)deviceModelCode;
- (id)deviceClass;
- (id)enabledInputModeIdentifiers;
- (id)initWithPaths:(id)a0;
- (id)mapsBucketId;
- (id)carrierCountryIsoCode;
- (long long)appleIntelligenceState;
- (BOOL)isDiagnosticsAndUsageEnabled;
- (BOOL)resetDeviceIdentifier;
- (id)init;
- (id)systemInfo;
- (id)aneVersion;
- (id)adsBucketId;
- (id)userSettingsLanguageCode;
- (BOOL)setDeviceIdentifier:(id)a0;
- (id)carrierBundleIdentifier;
- (id)storefront;
- (BOOL)isAutomatedTestDevice;
- (id)userSettingsRegionCode;
- (void).cxx_destruct;
- (int)populationType;
- (id)siriDeviceAggregationIdRotationDate;
- (BOOL)isInternalBuild;
- (BOOL)isBetaBuild;
- (id)deviceId;
- (BOOL)hasAne;
- (id)_dispatchQueueForCarrierInfoGathering;
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
