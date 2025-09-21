@class UIViewController, ACAccount;

@interface FAFamilySettings : FAFamilyCircleRequest

@property UIViewController *presentingViewController;
@property (retain) ACAccount *iTunesAccount;
@property char isFirstRun;

- (void).cxx_destruct;
- (void)_launchPrefsUsingDaemonWithOptions:(id)a0;
- (char)isAccountSignedIn;
- (void)launchiCloudFamilySettings;
- (void)launchiCloudFamilySettingsWithOptions:(id)a0;

@end
