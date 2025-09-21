@interface MMUtilities : NSObject

+ (id)bundleIdentifier;
+ (id)bundleVersion;
+ (void)openApplicationWithBundleID:(id)a0;
+ (char)isGuestUser;
+ (void)openAppleIDPref;
+ (char)isIMEnabled;
+ (void)setIMEnabled:(char)a0;
+ (char)isSetupServiceHost:(id)a0;
+ (id)currentApplicationIdentifier;
+ (id)currentApplicationVersion;
+ (id)deviceUDID;
+ (void)selectFolder:(id)a0;
+ (void)openNetworkPref;
+ (id)upgradeLegacyPaneIDIfNecessary:(id)a0;
+ (void)openSharingPref;
+ (char)isAppleIDLoginEnabled:(id)a0;
+ (char)isCertificateTrustValid:(struct __SecTrust { } *)a0;
+ (char)isIMChangingEnabledState;
+ (void)launchPhotosApplication;
+ (void)launchSoftwareUpdate;
+ (id)numberOfDaysSinceIMExit;
+ (int)openApplicationWithURL:(struct __CFURL { } *)a0;
+ (void)openInternetAccountPref;
+ (int)openItemWithURL:(id)a0;
+ (void)openParentalControlPref;
+ (void)openPowerPref;
+ (void)openPrefPane:(id)a0 userInfo:(id)a1;
+ (void)openSecurityPref;
+ (void)openUsersAndGroupsPref;
+ (void)openiCloudPref;
+ (void)postCDPRepairFollowUp;
+ (char)screenLockIsEnabled;
+ (void)selectFile:(id)a0 inFolder:(id)a1;
+ (void)showCriticalAlertSheetWithTitle:(id)a0 message:(id)a1 forWindow:(id)a2;
+ (id)urlForBundleIdentifier:(id)a0;

@end
