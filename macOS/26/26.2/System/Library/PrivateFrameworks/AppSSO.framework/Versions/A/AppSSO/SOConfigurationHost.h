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

+ (id)_loadProfilesFromURL:(id)a0 logFileError:(BOOL)a1;
+ (id)_loadProfilesFromDict:(id)a0;
+ (id)maskRegistrationTokenInProfileList:(id)a0;
+ (id)maskRegistrationTokenInConfigurationData:(id)a0;
+ (id)defaultManager;

- (id)profilesWithExtensionBundleIdentifier:(id)a0;
- (id)_defaultCacheFile;
- (id)_checkExtensionsExistenceForProfiles:(id)a0;
- (id)configurationForClientWithError:(id *)a0;
- (id)findPlatformSSOProfile:(id)a0;
- (id)findProfileForExtension:(id)a0 profiles:(id)a1;
- (void)_reloadConfigWithReason:(long long)a0;
- (BOOL)saveConfigurationData:(id)a0 error:(id *)a1;
- (id)removedProfileForExtensionBundleIdentifier:(id)a0;
- (id)_defaultConfigurationFile;
- (void)_startKeyBagObserverForReloadingConfiguration;
- (id)_checkAssociatedDomainForProfiles:(id)a0;
- (BOOL)isPlatformSSOProfile:(id)a0;
- (void)_isConfigurationActiveForExtensionIdentifier:(id)a0 runningAsAgent:(BOOL)a1 completion:(id /* block */)a2;
- (id)validatedProfileForPlatformSSO;
- (void)_extensionsLoaded:(id)a0;
- (BOOL)_saveConfigToFile:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)_configurationPathForCurrentUser;
- (BOOL)_initCachePath:(id)a0 ifNeededWithError:(id *)a1;
- (id)realms;
- (void)_configurationLoadedWithReason:(long long)a0;
- (void)_loadConfigForFirstTime;
- (BOOL)hasAnyMDMProfileForExtension:(id)a0;
- (id)_mergeProfile:(id)a0 userProfiles:(id)a1;
- (BOOL)verifyCacheFileAccess;
- (id)_stringWithReason:(long long)a0;
- (BOOL)saveConfiguration:(id)a0 error:(id *)a1;
- (long long)willHandleURL:(id)a0 responseCode:(long long)a1 callerBundleIdentifier:(id)a2;
- (void)_checkNewVersion;
- (id)_configurationFileForCurrentUser;
- (id)systemMDMProfileForExtension:(id)a0;
- (BOOL)_saveCacheToFile:(id)a0 error:(id *)a1;
- (id)init;
- (id)_defaultConfigurationPath;
- (BOOL)_isConfigFileAvailable;
- (id)_removeNotSupportedUserProfiles:(id)a0;
- (BOOL)_initDataVaultIfNeededWithError:(id *)a0;
- (id)platformSSOProfile;
- (id)profileForURL:(id)a0 responseCode:(long long)a1;
- (id)_cacheFileFileForCurrentUser;
- (void)_loadCacheFromDisk;
- (void)isConfigurationActiveForExtensionIdentifier:(id)a0 runningAsAgent:(BOOL)a1 completion:(id /* block */)a2;
- (void)dealloc;

@end
