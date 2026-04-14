@class NSString;

@interface TRISystemConfiguration : NSObject {
    NSString *_persistentDeviceIdentifierPath;
    NSString *_cachedDeviceIdentifier;
}

+ (id)sharedInstance;
+ (id)_sharedSystemInfo;

- (id)init;
- (void).cxx_destruct;
- (BOOL)setDeviceIdentifier:(id)a0;
- (id)osBuild;
- (id)deviceClass;
- (BOOL)isInternalBuild;
- (id)osType;
- (id)deviceId;
- (id)deviceModelCode;
- (BOOL)isBetaBuild;
- (id)systemInfo;
- (id)userSettingsLanguageCode;
- (id)userSettingsRegionCode;
- (id)carrierCountryIsoCode;
- (id)carrierBundleIdentifier;
- (id)initWithPaths:(id)a0;
- (id)enabledInputModeIdentifiers;
- (id)_dispatchQueueForCarrierInfoGathering;
- (int)populationType;
- (id)_systemInfoWithIsStale:(BOOL *)a0;
- (id)reloadSystemInfo;
- (id)trialVersionTag;
- (id)_trialVersion;
- (unsigned long long)trialVersionMajor;
- (unsigned long long)trialVersionMinor;
- (BOOL)isBetaUserWithIsStale:(BOOL *)a0;
- (id)readDeviceIdentifierWithPath:(id)a0;
- (BOOL)resetDeviceIdentifier;
- (BOOL)deleteDeviceIdentifier;
- (BOOL)deleteDeviceIdentifierWithPath:(id)a0;
- (BOOL)setDeviceIdentifier:(id)a0 path:(id)a1;
- (id)createDeviceIdentifierWithPath:(id)a0;
- (id)storedDeviceIdentifier;
- (id)createPersistentDeviceIdentifier;
- (id)deviceInfoForQuestion:(id)a0;
- (id)reloadDeviceId;
- (id)userSettingsBCP47DeviceLocale;
- (struct { long long x0; long long x1; long long x2; })marketingOSVersion;

@end
