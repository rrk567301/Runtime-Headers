@class NSDate, NSString, PODaemonConnection, POKeychainHelper, POLoginConfiguration, PODeviceConfiguration, POUserConfiguration, PODirectoryServices, POConfigurationVersion;

@interface POConfigurationManager : POConfigurationCoreManager {
    PODaemonConnection *_serviceConnection;
    POUserConfiguration *_currentUserConfiguration;
    POLoginConfiguration *_currentLoginConfiguration;
    PODeviceConfiguration *_currentDeviceConfiguration;
}

@property (retain) PODirectoryServices *directoryServices;
@property (readonly) NSString *userIdentifier;
@property (retain) POConfigurationVersion *userConfigurationVersion;
@property (retain) POConfigurationVersion *loginConfigurationVersion;
@property (retain) POConfigurationVersion *deviceConfigurationVersion;
@property (retain) POKeychainHelper *keychainHelper;
@property (readonly) NSDate *tokenExpiration;
@property (readonly) NSDate *tokenReceived;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)deviceConfiguration;
- (id)currentRefreshToken;
- (id)loginConfiguration;
- (id)initWithUserName:(id)a0;
- (void)enablePlatformSSORulesIfNeeded:(id /* block */)a0;
- (void)restorePlatformSSORulesIfNeeded;
- (char)removeLocalUser:(id)a0 fromLocalGroup:(id)a1;
- (char)__removeDeviceConfigurationWithIdentifier:(id)a0;
- (char)__removeLoginConfigurationForIdentifier:(id)a0;
- (char)addLocalUser:(id)a0 toLocalGroup:(id)a1;
- (char)addPlatformSSOToSearchPolicyReturningError:(id *)a0;
- (char)bindTokenForUsername:(id)a0 hash:(id)a1 wrapHash:(id)a2 tokenId:(id)a3 passwordContext:(id)a4 returningError:(id *)a5;
- (id)calculateExpirationForTokens:(id)a0;
- (char)createAppSSOCachePath;
- (char)createOrUpdateAdminGroups:(id)a0 authorizationGroups:(id)a1 previousAuthorizationGroups:(id)a2 otherGroups:(id)a3;
- (char)createPlatformSSOAdminGroupReturningError:(id *)a0;
- (char)createTemporaryUser:(id)a0 passwordContext:(id)a1;
- (char)createTemporaryUserLocalAccount:(id)a0;
- (unsigned long long)createUser:(id)a0 passwordContext:(id)a1 name:(id)a2 loginUserName:(id)a3 idpIdentifier:(id)a4 isAdmin:(char)a5 groupMembership:(id)a6 returningCreatedUserName:(id *)a7;
- (id)currentDeviceConfiguration;
- (id)currentLoginConfiguration;
- (id)currentUserConfiguration;
- (char)forceChangePasswordForUser:(id)a0 passwordContext:(id)a1 error:(id *)a2;
- (char)forceChangePasswordUsingBootstrapTokenForUser:(id)a0 passwordContext:(id)a1 error:(id *)a2;
- (void)handleUpdatingGroupsAndAuthorizationForProfile:(id)a0 deviceConfiguration:(id)a1;
- (id)initWithUserName:(id)a0 directoryServices:(id)a1 sharedOnly:(char)a2;
- (id)refreshTokenFromTokens:(id)a0;
- (char)removeDeviceConfiguration;
- (char)removeLoginConfiguration;
- (char)removePlatformSSOAdminGroupReturningError:(id *)a0;
- (char)removePlatformSSOFromSearchPolicyReturningError:(id *)a0;
- (char)removeUserConfigurationForUserName:(id)a0;
- (char)removeUserDeviceConfiguration;
- (char)removeUserLoginConfiguration;
- (char)resetStoredConfiguration;
- (void)resetTemporaryAccount;
- (char)saveAppSSOConfiguration:(id)a0;
- (char)saveCurrentUserConfigurationAndSyncToPreboot:(char)a0;
- (char)saveDeviceConfiguration:(id)a0;
- (char)saveDeviceConfigurationSyncAllConfigToPreboot:(id)a0;
- (char)saveLoginConfiguration:(id)a0;
- (char)savePlatformSSOUniqueIdentifier:(id)a0 forUser:(id)a1;
- (char)saveUserConfiguration:(id)a0 forUserName:(id)a1 syncToPreboot:(char)a2;
- (char)setGroups:(id)a0 forLocalUser:(id)a1 returningError:(id *)a2;
- (char)setGroups:(id)a0 forPlatformSSOUser:(id)a1 returningError:(id *)a2;
- (char)setTokens:(id)a0 extensionIdentifier:(id)a1 returningError:(id *)a2;
- (id)tokensForExtensionIdentifier:(id)a0;
- (char)unbindTokenForCurrentUser;
- (char)unbindTokenForUsername:(id)a0 hash:(id)a1 returningError:(id *)a2;
- (void)unbindTokensForAllUsers;
- (char)updateTemporaryAccountName:(id)a0 altSecurityIdentity:(id)a1;
- (id)userConfigurationForUserName:(id)a0;
- (id)userDeviceConfiguration;

@end
