@interface CPProfileManager : NSObject

+ (void)setMode:(unsigned long long)a0;
+ (id)sharedProfileManager;
+ (id)sharedProfileManager:(id)a0;
+ (unsigned long long)getMode;

- (void)dealloc;
- (id)init;
- (id)initWithData:(id)a0;
- (id)profilesForUser:(id)a0 error:(id *)a1;
- (id)profilesForUserRecord:(id)a0 error:(id *)a1;
- (id)guidForUser:(id)a0;
- (BOOL)isUserAllowed:(id)a0 profile:(id)a1;
- (id)flushProfileUserData:(id)a0 forUser:(id)a1;
- (id)uninstallProfile:(id)a0 forUser:(id)a1 removalPassword:(id)a2 ignoringAuth:(BOOL)a3;
- (void)recompositeManagedClient:(id)a0 profileUUID:(id)a1 withUID:(unsigned int)a2 infoDict:(id)a3;
- (void)processPluginInstallActions:(id)a0 compositorWatcher:(id)a1 forUser:(id)a2;
- (id)uninstallProfileCore:(id)a0 forUser:(id)a1;
- (id)uninstallProfileByIdentifier:(id)a0 forUser:(id)a1 removalPassword:(id)a2 ignoringAuth:(BOOL)a3 authData:(id)a4;
- (BOOL)profilesAreInstalled;
- (id)allProfiles:(id *)a0;
- (id)installProfile:(id)a0 forUser:(id)a1;
- (id)uninstallProfile:(id)a0 forUser:(id)a1 removalPassword:(id)a2;
- (id)uninstallProfileByIdentifier:(id)a0 forUser:(id)a1 removalPassword:(id)a2;
- (id)flushProfileUserData:(id)a0 forUserGUID:(id)a1;
- (id)removeAllProfiles;

@end
