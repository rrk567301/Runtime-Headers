@class SOConfigurationVersion, NSMutableArray, SOConfiguration;

@interface SOConfigurationHost : NSObject {
    SOConfiguration *_configuration;
    SOConfigurationVersion *_configurationVersion;
    NSMutableArray *_removedProfiles;
}

@property (readonly, nonatomic) long long configVersion;

+ (id)defaultManager;
+ (id)_loadProfilesFromDict:(id)a0;
+ (id)_loadProfilesFromURL:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_checkNewVersion;
- (id)profileForURL:(id)a0 responseCode:(long long)a1;
- (long long)willHandleURL:(id)a0 responseCode:(long long)a1 callerBundleIdentifier:(id)a2;
- (id)realms;
- (id)configurationForClientWithError:(id *)a0;
- (BOOL)saveConfiguration:(id)a0 error:(id *)a1;
- (void)_loadConfigForFirstTime;
- (BOOL)_saveConfigToFile:(id)a0 error:(id *)a1;
- (id)_checkAssociatedDomainForProfiles:(id)a0;
- (void)_reloadConfigWithReason:(long long)a0;
- (BOOL)_isConfigFileAvailable;
- (void)_startKeyBagObserverForReloadingConfiguration;
- (void)_extensionsLoaded:(id)a0;
- (id)_stringWithReason:(long long)a0;
- (id)_configurationFileForCurrentUser;
- (id)_defaultConfigurationFile;
- (id)_checkExtensionsExistenceForProfiles:(id)a0;
- (void)_configurationLoadedWithReason:(long long)a0;
- (id)_configurationPathForCurrentUser;
- (BOOL)_initDataVaultIfNeededWithError:(id *)a0;
- (id)_defaultConfigurationPath;
- (BOOL)saveConfigurationData:(id)a0 error:(id *)a1;
- (id)removedProfileForExtensionBundleIdentifier:(id)a0;
- (id)profilesWithExtensionBundleIdentifier:(id)a0;

@end
