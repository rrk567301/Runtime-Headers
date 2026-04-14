@class PODirectoryServices, NSString, NSXPCConnection, POUserGroupManager;

@interface PODaemonProcess : NSObject <PODaemonProtocol> {
    NSXPCConnection *_xpcConnection;
}

@property (retain) PODirectoryServices *directoryServices;
@property BOOL dataVaultInitialized;
@property (retain) POUserGroupManager *userGroupManager;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0;
- (void)connectionInvalidated;
- (id)_defaultConfigurationPath;
- (BOOL)_initDataVaultIfNeededWithError:(id *)a0;
- (void)_enablePlatformSSORuleForLogin:(id /* block */)a0;
- (id)_deviceConfigurationForIdentifer:(id)a0;
- (void)_disablePlatformSSORuleForLogin:(id /* block */)a0;
- (void)_disablePlatformSSORuleForScreensaver:(id /* block */)a0;
- (void)_enablePlatformSSORuleForScreensaver:(id /* block */)a0;
- (id)_loginConfigurationForIdentifer:(id)a0;
- (BOOL)_removeDeviceConfigurationForIdentifer:(id)a0 error:(id *)a1;
- (BOOL)_removeLoginConfigurationForIdentifer:(id)a0 error:(id *)a1;
- (BOOL)_removeUserConfigurationForIdentifier:(id)a0 error:(id *)a1;
- (BOOL)_saveDeviceConfiguration:(id)a0 identifer:(id)a1 error:(id *)a2;
- (BOOL)_saveLoginConfiguration:(id)a0 identifer:(id)a1 error:(id *)a2;
- (BOOL)_saveUserConfigurationData:(id)a0 forIdentifier:(id)a1 error:(id *)a2;
- (BOOL)_updateGroupForRight:(id)a0 newGroup:(id)a1;
- (id)_userConfigurationForIdentifier:(id)a0 error:(id *)a1;
- (void)addLocalUser:(id)a0 toLocalGroup:(id)a1 completion:(id /* block */)a2;
- (void)addPlatformSSOToSearchPolicyWithCompletion:(id /* block */)a0;
- (void)bindTokenForUsername:(id)a0 hash:(id)a1 wrapHash:(id)a2 tokenId:(id)a3 passwordContext:(id)a4 completion:(id /* block */)a5;
- (void)createAppSSOCachePathWithCompletion:(id /* block */)a0;
- (void)createOrUpdateAdminGroups:(id)a0 authorizationGroups:(id)a1 previousAuthorizationGroups:(id)a2 otherGroups:(id)a3 completion:(id /* block */)a4;
- (void)createOrUpdateUser:(id)a0 completion:(id /* block */)a1;
- (void)createPlatformSSOAdminGroupWithCompletion:(id /* block */)a0;
- (void)createUser:(id)a0 passwordContext:(id)a1 name:(id)a2 loginUserName:(id)a3 idpIdentifier:(id)a4 isAdmin:(BOOL)a5 groupMembership:(id)a6 completion:(id /* block */)a7;
- (void)deviceConfigurationForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)disablePlatformSSORules:(id /* block */)a0;
- (void)enablePlatformSSORules:(id /* block */)a0;
- (void)findUserWithName:(id)a0 completion:(id /* block */)a1;
- (void)getAllUsersWithCompletion:(id /* block */)a0;
- (void)handleAuthRights;
- (void)handleMigration:(BOOL)a0;
- (void)handleStartup;
- (void)loginConfigurationForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)migrateConfiguration:(BOOL)a0 completion:(id /* block */)a1;
- (void)removeDeviceConfigurationForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)removeLocalUser:(id)a0 fromLocalGroup:(id)a1 completion:(id /* block */)a2;
- (void)removeLoginConfigurationForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)removePlatformSSOAdminGroupWithCompletion:(id /* block */)a0;
- (void)removePlatformSSOFromSearchPolicyWithCompletion:(id /* block */)a0;
- (void)removePlatformSSOUser:(id)a0 completion:(id /* block */)a1;
- (void)removeUserConfigurationForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeUserWithName:(id)a0 completion:(id /* block */)a1;
- (void)resetStoredConfigurationWithCompletion:(id /* block */)a0;
- (void)saveAltSecurityIdentity:(id)a0 forIdentifier:(id)a1;
- (void)saveAppSSOConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)saveDeviceConfiguration:(id)a0 identifer:(id)a1 completion:(id /* block */)a2;
- (void)saveLoginConfiguration:(id)a0 identifer:(id)a1 completion:(id /* block */)a2;
- (void)savePlatformSSOUniqueIdentifier:(id)a0 forUser:(id)a1 completion:(id /* block */)a2;
- (void)saveUserConfiguration:(id)a0 forIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)saveUserConfigurationData:(id)a0 forIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)setGroups:(id)a0 forLocalUser:(id)a1 completion:(id /* block */)a2;
- (void)setGroups:(id)a0 forPlatformSSOUser:(id)a1 completion:(id /* block */)a2;
- (void)unbindTokenForAllUsersWithCompletion:(id /* block */)a0;
- (void)unbindTokenForUsername:(id)a0 hash:(id)a1 completion:(id /* block */)a2;
- (void)userConfigurationForIdentifier:(id)a0 completion:(id /* block */)a1;

@end
