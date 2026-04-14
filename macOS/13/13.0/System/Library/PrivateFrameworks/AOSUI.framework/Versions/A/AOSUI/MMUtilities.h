@interface MMUtilities : NSObject

+ (id)bundleIdentifier;
+ (void)openApplicationWithBundleID:(id)a0;
+ (id)bundleVersion;
+ (void)openAppleIDPref;
+ (BOOL)isGuestUser;
+ (BOOL)isIMEnabled;
+ (void)setIMEnabled:(BOOL)a0;
+ (BOOL)isSetupServiceHost:(id)a0;
+ (id)currentApplicationIdentifier;
+ (id)currentApplicationVersion;
+ (id)deviceUDID;
+ (void)selectFolder:(id)a0;
+ (void)selectFile:(id)a0 inFolder:(id)a1;
+ (void)openPrefPane:(id)a0 userInfo:(id)a1;
+ (BOOL)isIMChangingEnabledState;
+ (id)numberOfDaysSinceIMExit;
+ (void)launchPhotosApplication;
+ (id)urlForBundleIdentifier:(id)a0;
+ (void)launchSoftwareUpdate;
+ (void)openPowerPref;
+ (void)openSharingPref;
+ (void)openSecurityPref;
+ (void)openInternetAccountPref;
+ (void)openParentalControlPref;
+ (void)openiCloudPref;
+ (void)openUsersAndGroupsPref;
+ (void)openNetworkPref;
+ (id)upgradeLegacyPaneIDIfNecessary:(id)a0;
+ (int)openApplicationWithURL:(struct __CFURL { } *)a0;
+ (int)openItemWithURL:(id)a0;
+ (BOOL)screenLockIsEnabled;
+ (BOOL)isAppleIDLoginEnabled:(id)a0;
+ (void)postCDPRepairFollowUp;
+ (BOOL)isCertificateTrustValid:(struct __SecTrust { } *)a0;
+ (void)showCriticalAlertSheetWithTitle:(id)a0 message:(id)a1 forWindow:(id)a2;

@end
