@interface AFUtilities : NSObject

+ (id)bundleIdentifier;
+ (void)openApplicationWithBundleID:(id)a0;
+ (id)bundleVersion;
+ (BOOL)isInternalBuild;
+ (void)openAppleIDPref;
+ (BOOL)openAppleIDPrefWithLaunchParameters:(id)a0;
+ (id)currentApplicationIdentifier;
+ (id)currentApplicationVersion;
+ (int)openSystemSettingsWithID:(id)a0 launchParameters:(id)a1;
+ (void)launchPhotosApplication;
+ (id)urlForBundleIdentifier:(id)a0;
+ (void)launchSoftwareUpdate;
+ (void)openSharingPref;
+ (void)openSecurityPref;
+ (void)openInternetAccountPref;
+ (void)openParentalControlPref;
+ (void)openUsersAndGroupsPref;
+ (void)openNetworkPref;
+ (BOOL)screenLockIsEnabled;
+ (int)_openSystemSettingsWithID:(id)a0;
+ (void)openEnergySaverPref;
+ (int)_openApplicationWithBundleID:(id)a0;
+ (int)_openApplicationWithURL:(struct __CFURL { } *)a0;
+ (int)_openItemWithURL:(id)a0;
+ (int)_openItemWithURL:(id)a0 launchParameters:(id)a1;

@end
