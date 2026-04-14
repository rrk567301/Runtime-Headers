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
+ (void)showCriticalAlertSheetWithTitle:(id)a0 message:(id)a1 forWindow:(id)a2;
+ (void)selectFile:(id)a0 inFolder:(id)a1;
+ (BOOL)isAppleIDLoginEnabled:(id)a0;
+ (void)openParentalControlPref;
+ (void)openiCloudPref;
+ (void)postCDPRepairFollowUp;
+ (void)openPrefPane:(id)a0 userInfo:(id)a1;
+ (BOOL)isIMChangingEnabledState;
+ (id)numberOfDaysSinceIMExit;
+ (void)launchPhotosApplication;
+ (BOOL)isCertificateTrustValid:(struct __SecTrust { } *)a0;
+ (int)openItemWithURL:(id)a0;
+ (id)urlForBundleIdentifier:(id)a0;
+ (int)openApplicationWithURL:(struct __CFURL { } *)a0;
+ (void)launchSoftwareUpdate;
+ (void)openPowerPref;
+ (void)openSharingPref;
+ (void)openSecurityPref;
+ (void)openInternetAccountPref;
+ (void)openUsersAndGroupsPref;
+ (void)openNetworkPref;
+ (BOOL)screenLockIsEnabled;

@end
