@class NSString;

@interface TRISystemConfiguration : NSObject {
    NSString *_persistentDeviceIdentifierPath;
    NSString *_cachedDeviceIdentifier;
}

+ (id)sharedInstance;
+ (void)updateSystemInfoUsingContext:(id)a0;
+ (id)_sharedSystemInfo;

- (id)deviceId;
- (id)enabledInputModeIdentifiers;
- (BOOL)setDeviceIdentifier:(id)a0;
- (BOOL)isInternalBuild;
- (id)deviceClass;
- (id)storefront;
- (BOOL)resetDeviceIdentifier;
- (id)initWithPaths:(id)a0;
- (BOOL)isAutomatedTestDevice;
- (long long)appleIntelligenceState;
- (id)siriDeviceAggregationIdRotationDate;
- (id)systemInfo;
- (id)carrierBundleIdentifier;
- (id)userSettingsLanguageCode;
- (id)osBuild;
- (void).cxx_destruct;
- (BOOL)isBetaBuild;
- (BOOL)isDiagnosticsAndUsageEnabled;
- (id)_dispatchQueueForCarrierInfoGathering;
- (id)aneVersion;
- (id)carrierCountryIsoCode;
- (BOOL)hasAne;
- (id)adsBucketId;
- (int)populationType;
- (id)init;
- (id)deviceModelCode;
- (id)mapsBucketId;
- (id)userSettingsRegionCode;
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
