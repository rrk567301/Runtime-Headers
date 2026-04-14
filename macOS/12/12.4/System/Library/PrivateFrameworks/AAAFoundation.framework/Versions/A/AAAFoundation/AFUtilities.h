@interface AFUtilities : NSObject

+ (id)bundleIdentifier;
+ (void)openApplicationWithBundleID:(id)a0;
+ (id)bundleVersion;
+ (BOOL)isInternalBuild;
+ (void)openAppleIDPref;
+ (BOOL)openAppleIDPrefWithLaunchParameters:(id)a0;
+ (id)currentApplicationIdentifier;
+ (id)currentApplicationVersion;
+ (void)openParentalControlPref;
+ (void)launchPhotosApplication;
+ (id)urlForBundleIdentifier:(id)a0;
+ (void)launchSoftwareUpdate;
+ (void)openSharingPref;
+ (void)openSecurityPref;
+ (void)openInternetAccountPref;
+ (BOOL)screenLockIsEnabled;
+ (int)_openApplicationWithBundleID:(id)a0;
+ (int)_openItemWithURL:(id)a0;
+ (int)_openItemWithURL:(id)a0 launchParameters:(id)a1;
+ (int)_openApplicationWithURL:(struct __CFURL { } *)a0;
+ (void)openEnergySaverPref;

@end
