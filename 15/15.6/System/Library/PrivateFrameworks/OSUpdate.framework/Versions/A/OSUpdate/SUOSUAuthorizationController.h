@interface SUOSUAuthorizationController : NSObject

@property struct AuthorizationOpaqueRef { } *authorizationForInstalling;
@property struct AuthorizationOpaqueRef { } *authorizationForModifyingPreferences;

+ (id)sharedInstance;

- (char)_allowSoftwareInstallForNonAdminUserMDMInitiated:(char)a0;
- (char)_attemptInteractiveAuthorizationForInstalling;
- (char)_attemptInteractiveAuthorizationForModifyingPreferences;
- (char)_attemptNonInteractiveAuthorizationForInstallingAsStandardUser;
- (char)_attemptNonInteractiveAuthorizationForInstallingMDMInitiated:(char)a0;
- (char)_attemptNonInteractiveAuthorizationForModifyingPreferences;
- (char)_managedPreferenceForKey:(id)a0 domain:(id)a1;
- (char)authorizeForModifyingPreferences;
- (char)authorizeForSoftwareInstall;
- (char)authorizeForSoftwareInstallMDMInitiated:(char)a0;

@end
