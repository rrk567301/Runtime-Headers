@class NSString;

@interface TRISystemConfiguration : NSObject {
    NSString *_persistentDeviceIdentifierPath;
    NSString *_cachedDeviceIdentifier;
}

+ (id)sharedInstance;
+ (id)_sharedSystemInfo;
+ (void)updateSystemInfoUsingContext:(id)a0;

- (BOOL)setDeviceIdentifier:(id)a0;
- (id)deviceClass;
- (id)enabledInputModeIdentifiers;
- (id)_dispatchQueueForCarrierInfoGathering;
- (id)userSettingsLanguageCode;
- (id)deviceModelCode;
- (long long)appleIntelligenceState;
- (id)mapsBucketId;
- (id)deviceId;
- (BOOL)isBetaBuild;
- (BOOL)isAutomatedTestDevice;
- (id)systemInfo;
- (id)carrierCountryIsoCode;
- (BOOL)isInternalBuild;
- (id)userSettingsRegionCode;
- (BOOL)hasAne;
- (BOOL)isDiagnosticsAndUsageEnabled;
- (void).cxx_destruct;
- (id)carrierBundleIdentifier;
- (BOOL)resetDeviceIdentifier;
- (id)init;
- (id)storefront;
- (id)siriDeviceAggregationIdRotationDate;
- (id)aneVersion;
- (id)osBuild;
- (id)initWithPaths:(id)a0;
- (int)populationType;
- (id)adsBucketId;
- (id)osType;
- (BOOL)deleteDeviceIdentifierWithPath:(id)a0;
- (id)createDeviceIdentifierWithPath:(id)a0;
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
