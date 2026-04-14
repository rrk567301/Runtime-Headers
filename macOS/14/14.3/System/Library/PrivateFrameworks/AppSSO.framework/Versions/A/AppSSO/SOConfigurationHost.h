@class SOConfigurationVersion, NSMutableArray, SOConfiguration;

@interface SOConfigurationHost : NSObject {
    SOConfiguration *_configuration;
    SOConfigurationVersion *_configurationVersion;
    NSMutableArray *_removedProfiles;
}

@property (readonly, nonatomic) long long configVersion;

+ (id)defaultManager;
+ (id)_loadProfilesFromDict:(id)a0;
+ (id)_loadProfilesFromURL:(id)a0 logFileError:(BOOL)a1;
+ (id)maskRegistrationTokenInConfigurationData:(id)a0;
+ (id)maskRegistrationTokenInProfileList:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_checkNewVersion;
- (id)profileForURL:(id)a0 responseCode:(long long)a1;
- (id)realms;
- (long long)willHandleURL:(id)a0 responseCode:(long long)a1 callerBundleIdentifier:(id)a2;
- (void)_configurationLoadedWithReason:(long long)a0;
- (id)_checkAssociatedDomainForProfiles:(id)a0;
- (id)_checkExtensionsExistenceForProfiles:(id)a0;
- (id)_configurationFileForCurrentUser;
- (id)_configurationPathForCurrentUser;
- (id)_defaultConfigurationFile;
- (id)_defaultConfigurationPath;
- (void)_extensionsLoaded:(id)a0;
- (BOOL)_initDataVaultIfNeededWithError:(id *)a0;
- (BOOL)_isConfigFileAvailable;
- (void)_loadConfigForFirstTime;
- (id)_mergeProfile:(id)a0 userProfiles:(id)a1;
- (void)_reloadConfigWithReason:(long long)a0;
- (id)_removeNotSupportedUserProfiles:(id)a0;
- (BOOL)_saveConfigToFile:(id)a0 error:(id *)a1;
- (void)_startKeyBagObserverForReloadingConfiguration;
- (id)_stringWithReason:(long long)a0;
- (id)configurationForClientWithError:(id *)a0;
- (id)findPlatformSSOProfile:(id)a0;
- (id)findProfileForExtension:(id)a0 profiles:(id)a1;
- (BOOL)hasAnyMDMProfileForExtension:(id)a0;
- (BOOL)isPlatformSSOProfile:(id)a0;
- (id)profilesWithExtensionBundleIdentifier:(id)a0;
- (id)removedProfileForExtensionBundleIdentifier:(id)a0;
- (BOOL)saveConfiguration:(id)a0 error:(id *)a1;
- (BOOL)saveConfigurationData:(id)a0 error:(id *)a1;
- (id)validatedProfileForPlatformSSO;

@end
