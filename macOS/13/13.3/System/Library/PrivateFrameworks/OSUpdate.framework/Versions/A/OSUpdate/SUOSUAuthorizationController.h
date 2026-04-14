@interface SUOSUAuthorizationController : NSObject

@property const struct AuthorizationOpaqueRef { } *authorizationForInstalling;
@property const struct AuthorizationOpaqueRef { } *authorizationForModifyingPreferences;

+ (id)sharedInstance;

- (BOOL)_allowSoftwareInstallForNonAdminUser;
- (BOOL)_attemptInteractiveAuthorizationForInstalling;
- (BOOL)_attemptInteractiveAuthorizationForModifyingPreferences;
- (BOOL)_attemptNonInteractiveAuthorizationForInstalling;
- (BOOL)_attemptNonInteractiveAuthorizationForInstallingAsStandardUser;
- (BOOL)_attemptNonInteractiveAuthorizationForModifyingPreferences;
- (BOOL)_managedPreferenceForKey:(id)a0 domain:(id)a1;
- (BOOL)authorizeForModifyingPreferences;
- (BOOL)authorizeForSoftwareInstall;

@end
