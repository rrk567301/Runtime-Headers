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
- (BOOL)setDeviceIdentifier:(id)a0;
- (id)deviceClass;
- (BOOL)isInternalBuild;
- (id)osType;
- (id)deviceId;
- (id)deviceModelCode;
- (BOOL)isBetaBuild;
- (id)systemInfo;
- (id)userSettingsLanguageCode;
- (id)userSettingsRegionCode;
- (id)initWithPaths:(id)a0;
- (id)enabledInputModeIdentifiers;
- (id)trialVersionTag;
- (BOOL)isBetaUserWithIsStale:(BOOL *)a0;
- (id)userSettingsBCP47DeviceLocale;
- (id)_systemInfoWithIsStale:(BOOL *)a0;
- (id)_trialVersion;
- (BOOL)deleteDeviceIdentifier;
- (id)createPersistentDeviceIdentifier;
- (BOOL)deleteDeviceIdentifierWithPath:(id)a0;
- (BOOL)setDeviceIdentifier:(id)a0 path:(id)a1;
- (id)readDeviceIdentifierWithPath:(id)a0;
- (id)createDeviceIdentifierWithPath:(id)a0;
- (id)storedDeviceIdentifier;
- (id)deviceInfoForQuestion:(id)a0;
- (int)populationType;
- (id)reloadSystemInfo;
- (unsigned long long)trialVersionMajor;
- (unsigned long long)trialVersionMinor;
- (BOOL)resetDeviceIdentifier;
- (id)reloadDeviceId;
- (struct { long long x0; long long x1; long long x2; })marketingOSVersion;

@end
