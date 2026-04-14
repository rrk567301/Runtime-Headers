@interface SUOSUAuthorizationController : NSObject

@property const struct AuthorizationOpaqueRef { } *authorizationForInstalling;
@property const struct AuthorizationOpaqueRef { } *authorizationForModifyingPreferences;

+ (id)sharedInstance;

- (BOOL)authorizeForModifyingPreferences;
- (BOOL)authorizeForSoftwareInstall;
- (BOOL)_attemptNonInteractiveAuthorizationForInstalling;
- (BOOL)_attemptInteractiveAuthorizationForInstalling;
- (BOOL)_attemptNonInteractiveAuthorizationForModifyingPreferences;
- (BOOL)_attemptInteractiveAuthorizationForModifyingPreferences;
- (BOOL)_allowSoftwareInstallForNonAdminUser;
- (BOOL)_attemptNonInteractiveAuthorizationForInstallingAsStandardUser;
- (BOOL)_managedPreferenceForKey:(id)a0 domain:(id)a1;

@end
