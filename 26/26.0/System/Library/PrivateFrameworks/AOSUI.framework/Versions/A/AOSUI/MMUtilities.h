@interface MMUtilities : NSObject

+ (id)deviceUDID;
+ (id)bundleVersion;
+ (id)bundleIdentifier;
+ (BOOL)isSetupServiceHost:(id)a0;
+ (void)openApplicationWithBundleID:(id)a0;
+ (BOOL)isGuestUser;
+ (void)openAppleIDPref;
+ (BOOL)isIMEnabled;
+ (void)setIMEnabled:(BOOL)a0;
+ (id)currentApplicationIdentifier;
+ (id)currentApplicationVersion;
+ (void)selectFolder:(id)a0;
+ (void)openNetworkPref;
+ (void)openSharingPref;
+ (id)upgradeLegacyPaneIDIfNecessary:(id)a0;
+ (BOOL)isAppleIDLoginEnabled:(id)a0;
+ (BOOL)isCertificateTrustValid:(struct __SecTrust { } *)a0;
+ (BOOL)isIMChangingEnabledState;
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
+ (BOOL)screenLockIsEnabled;
+ (void)selectFile:(id)a0 inFolder:(id)a1;
+ (void)showCriticalAlertSheetWithTitle:(id)a0 message:(id)a1 forWindow:(id)a2;
+ (id)urlForBundleIdentifier:(id)a0;

@end
