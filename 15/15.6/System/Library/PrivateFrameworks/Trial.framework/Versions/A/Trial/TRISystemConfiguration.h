@class NSString;

@interface TRISystemConfiguration : NSObject {
    NSString *_persistentDeviceIdentifierPath;
    NSString *_cachedDeviceIdentifier;
}

+ (id)sharedInstance;
+ (id)_sharedSystemInfo;

- (id)init;
- (void).cxx_destruct;
- (id)osBuild;
- (char)setDeviceIdentifier:(id)a0;
- (id)deviceClass;
- (char)isInternalBuild;
- (id)osType;
- (id)deviceId;
- (id)deviceModelCode;
- (id)initWithPaths:(id)a0;
- (char)isBetaBuild;
- (id)systemInfo;
- (char)isDiagnosticsAndUsageEnabled;
- (id)aneVersion;
- (long long)appleIntelligenceState;
- (id)carrierBundleIdentifier;
- (id)carrierCountryIsoCode;
- (char)isAutomatedTestDevice;
- (id)userSettingsLanguageCode;
- (id)userSettingsRegionCode;
- (id)createDeviceIdentifierWithPath:(id)a0;
- (char)deleteDeviceIdentifierWithPath:(id)a0;
- (id)trialVersionTag;
- (id)_dispatchQueueForCarrierInfoGathering;
- (id)_systemInfoWithIsStale:(char *)a0;
- (id)_trialVersion;
- (char)_updateSystemInfo:(id)a0;
- (id)createPersistentDeviceIdentifier;
- (char)deleteDeviceIdentifier;
- (id)deviceInfoForQuestion:(id)a0;
- (id)enabledInputModeIdentifiers;
- (char)hasAne;
- (id)iCloudId;
- (char)isBetaUserWithIsStale:(char *)a0;
- (struct { long long x0; long long x1; long long x2; })marketingOSVersion;
- (int)populationType;
- (id)readDeviceIdentifierWithPath:(id)a0;
- (id)reloadDeviceId;
- (id)reloadSystemInfo;
- (char)resetDeviceIdentifier;
- (char)setDeviceIdentifier:(id)a0 path:(id)a1;
- (id)siriDeviceAggregationIdRotationDate;
- (id)siriUserActivitySegment;
- (id)storedDeviceIdentifier;
- (unsigned long long)trialVersionMajor;
- (unsigned long long)trialVersionMinor;
- (id)userSettingsBCP47DeviceLocale;

@end
