@class SOConfigurationVersion, NSMutableDictionary, NSTimer, SOConfiguration, NSObject, NSMutableArray;

@interface SOConfigurationHost : NSObject {
    SOConfiguration *_configuration;
    SOConfigurationVersion *_configurationVersion;
    NSMutableArray *_removedProfiles;
}

@property (retain) NSMutableDictionary *associatedDomainCache;
@property BOOL configurationPending;
@property (retain) NSObject *configurationPendingLock;
@property (retain) NSTimer *configLoadTimer;
@property (retain) NSObject *configLoadTimerLock;
@property (readonly, nonatomic) long long configVersion;

+ (id)defaultManager;
+ (id)_loadProfilesFromURL:(id)a0 logFileError:(BOOL)a1;
+ (id)maskRegistrationTokenInConfigurationData:(id)a0;
+ (id)_loadProfilesFromDict:(id)a0;
+ (id)maskRegistrationTokenInProfileList:(id)a0;

- (id)platformSSOProfile;
- (void)_loadCacheFromDisk;
- (BOOL)saveConfigurationData:(id)a0 error:(id *)a1;
- (id)profilesWithExtensionBundleIdentifier:(id)a0;
- (id)_mergeProfile:(id)a0 userProfiles:(id)a1;
- (id)_defaultConfigurationFile;
- (BOOL)_initCachePath:(id)a0 ifNeededWithError:(id *)a1;
- (id)_checkAssociatedDomainForProfiles:(id)a0;
- (id)_stringWithReason:(long long)a0;
- (void)isConfigurationActiveForExtensionIdentifier:(id)a0 runningAsAgent:(BOOL)a1 completion:(id /* block */)a2;
- (void)_extensionsLoaded:(id)a0;
- (id)configurationForClientWithError:(id *)a0;
- (BOOL)hasAnyMDMProfileForExtension:(id)a0;
- (long long)willHandleURL:(id)a0 responseCode:(long long)a1 callerBundleIdentifier:(id)a2;
- (id)findProfileForExtension:(id)a0 profiles:(id)a1;
- (void)_loadConfigForFirstTime;
- (void)_reloadConfigWithReason:(long long)a0;
- (void)_isConfigurationActiveForExtensionIdentifier:(id)a0 runningAsAgent:(BOOL)a1 completion:(id /* block */)a2;
- (void)_startKeyBagObserverForReloadingConfiguration;
- (BOOL)saveConfiguration:(id)a0 error:(id *)a1;
- (void)dealloc;
- (BOOL)_isConfigFileAvailable;
- (BOOL)_saveCacheToFile:(id)a0 error:(id *)a1;
- (id)_defaultCacheFile;
- (id)profileForURL:(id)a0 responseCode:(long long)a1;
- (id)realms;
- (id)_defaultConfigurationPath;
- (id)_cacheFileFileForCurrentUser;
- (BOOL)verifyCacheFileAccess;
- (void).cxx_destruct;
- (id)findPlatformSSOProfile:(id)a0;
- (id)validatedProfileForPlatformSSO;
- (id)_configurationPathForCurrentUser;
- (id)_configurationFileForCurrentUser;
- (BOOL)isPlatformSSOProfile:(id)a0;
- (id)removedProfileForExtensionBundleIdentifier:(id)a0;
- (void)_configurationLoadedWithReason:(long long)a0;
- (id)_removeNotSupportedUserProfiles:(id)a0;
- (id)systemMDMProfileForExtension:(id)a0;
- (BOOL)_saveConfigToFile:(id)a0 error:(id *)a1;
- (BOOL)_initDataVaultIfNeededWithError:(id *)a0;
- (void)_checkNewVersion;
- (id)_checkExtensionsExistenceForProfiles:(id)a0;
- (id)init;

@end
