@class UIViewController, ACAccount;

@interface FAFamilySettings : FAFamilyCircleRequest

@property UIViewController *presentingViewController;
@property (retain) ACAccount *iTunesAccount;
@property BOOL isFirstRun;

- (void).cxx_destruct;
- (void)launchiCloudFamilySettingsWithOptions:(id)a0;
- (void)_launchPrefsUsingDaemonWithOptions:(id)a0;
- (void)launchiCloudFamilySettings;
- (BOOL)isAccountSignedIn;

@end
