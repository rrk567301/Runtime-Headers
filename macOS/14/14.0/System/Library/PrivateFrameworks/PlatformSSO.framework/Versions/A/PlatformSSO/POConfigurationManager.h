@class POLoginConfiguration, NSString, PODeviceConfiguration, POKeychainHelper, NSDate, PODaemonConnection, POUserConfiguration, PODirectoryServices, POConfigurationVersion;

@interface POConfigurationManager : NSObject {
    PODaemonConnection *_serviceConnection;
}

@property (retain) PODirectoryServices *directoryServices;
@property (readonly) NSString *userIdentifier;
@property (retain) POConfigurationVersion *userConfigurationVersion;
@property (retain) POConfigurationVersion *loginConfigurationVersion;
@property (retain) POConfigurationVersion *deviceConfigurationVersion;
@property (retain) POKeychainHelper *keychainHelper;
@property (readonly) NSString *userName;
@property BOOL sharedOnly;
@property (readonly) POUserConfiguration *currentUserConfiguration;
@property (readonly) PODeviceConfiguration *currentDeviceConfiguration;
@property (readonly) POLoginConfiguration *currentLoginConfiguration;
@property (readonly) PODeviceConfiguration *userDeviceConfiguration;
@property (readonly) NSDate *tokenExpiration;
@property (readonly) NSDate *tokenReceived;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)deviceConfiguration;
- (id)currentRefreshToken;
- (id)loginConfiguration;
- (id)initWithUserName:(id)a0;
- (BOOL)removeLocalUser:(id)a0 fromLocalGroup:(id)a1;
- (void)restorePlatformSSORulesIfNeeded;
- (void)enablePlatformSSORulesIfNeeded:(id /* block */)a0;
- (BOOL)__removeDeviceConfigurationWithIdentifier:(id)a0;
- (BOOL)__removeLoginConfigurationForIdentifier:(id)a0;
- (BOOL)addLocalUser:(id)a0 toLocalGroup:(id)a1;
- (BOOL)addPlatformSSOToSearchPolicyReturningError:(id *)a0;
- (BOOL)bindTokenForUsername:(id)a0 hash:(id)a1 wrapHash:(id)a2 tokenId:(id)a3 passwordContext:(id)a4 returningError:(id *)a5;
- (BOOL)createOrUpdateAdminGroups:(id)a0 authorizationGroups:(id)a1 previousAuthorizationGroups:(id)a2 otherGroups:(id)a3;
- (BOOL)createPlatformSSOAdminGroupReturningError:(id *)a0;
- (unsigned long long)createUser:(id)a0 passwordContext:(id)a1 name:(id)a2 loginUserName:(id)a3 idpIdentifier:(id)a4 isAdmin:(BOOL)a5 groupMembership:(id)a6 returningCreatedUserName:(id *)a7;
- (id)initWithUserName:(id)a0 directoryServices:(id)a1 sharedOnly:(BOOL)a2;
- (id)refreshTokenFromTokens:(id)a0;
- (BOOL)removeDeviceConfiguration;
- (BOOL)removeLoginConfiguration;
- (BOOL)removePlatformSSOAdminGroupReturningError:(id *)a0;
- (BOOL)removePlatformSSOFromSearchPolicyReturningError:(id *)a0;
- (BOOL)removeUserConfigurationForUserName:(id)a0;
- (BOOL)removeUserDeviceConfiguration;
- (BOOL)removeUserLoginConfiguration;
- (BOOL)resetStoredConfiguration;
- (BOOL)saveAppSSOConfiguration:(id)a0;
- (BOOL)saveCurrentUserConfiguration;
- (BOOL)saveDeviceConfiguration:(id)a0;
- (BOOL)saveLoginConfiguration:(id)a0;
- (BOOL)savePlatformSSOUniqueIdentifier:(id)a0 forUser:(id)a1;
- (BOOL)saveUserConfiguration:(id)a0 forUserName:(id)a1;
- (BOOL)setGroups:(id)a0 forLocalUser:(id)a1 returningError:(id *)a2;
- (BOOL)setGroups:(id)a0 forPlatformSSOUser:(id)a1 returningError:(id *)a2;
- (BOOL)unbindTokenForCurrentUser;
- (BOOL)unbindTokenForUsername:(id)a0 hash:(id)a1 returningError:(id *)a2;
- (void)unbindTokensForAllUsers;
- (id)userConfigurationForUserName:(id)a0;

@end
