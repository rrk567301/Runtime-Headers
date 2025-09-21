@interface ATXApplicationRecord : NSObject

+ (id)schemaWithoutFallbackForBundle:(id)a0;
+ (id)appInfoForBundle:(id)a0;
+ (char)isSystemAppForBundleId:(id)a0;
+ (id)genreForBundle:(id)a0;
+ (char)isWebClipInstalledWithBundleId:(id)a0;
+ (id)bundleIdForAdamIdIfInstalled:(unsigned long long)a0;
+ (id)companionBundleIdForBundleId:(id)a0;
+ (unsigned long long)genreIdForBundle:(id)a0;
+ (void)getDeviceManagementPolicyForBundle:(id)a0 completionHandler:(id /* block */)a1;
+ (char)isAppClipForBundleId:(id)a0;
+ (char)isAppClipGivenAppRecord:(id)a0;
+ (char)isAppClipWebClipBundleId:(id)a0;
+ (char)isArcadeAppForBundle:(id)a0;
+ (char)isBackgroundAudioSupportedForBundle:(id)a0;
+ (char)isBetaAppForBundle:(id)a0;
+ (char)isDeviceManagementPolicyOkForBundleId:(id)a0;
+ (char)isEnterpriseAppForBundle:(id)a0;
+ (char)isHiddenFromSpringBoardWithBundleId:(id)a0;
+ (char)isInstalledAndNotRestrictedForBundle:(id)a0;
+ (char)isInstalledForBundle:(id)a0;
+ (char)isInstalledOrIsPlaceholderForBundle:(id)a0;
+ (char)isInstallingForBundle:(id)a0;
+ (char)isInternalAppForBundleId:(id)a0;
+ (char)isInternalOrSystemAppForBundleId:(id)a0;
+ (char)isLaunchProhibitedForBundle:(id)a0;
+ (char)isOffloadedForBundle:(id)a0;
+ (char)isRestoreInstallTypeForBundle:(id)a0;
+ (char)isSwiftPlaygroundsBundle:(id)a0;
+ (char)isUPPValidatedForBundle:(id)a0;
+ (id)localizedNameForBundle:(id)a0;
+ (id)localizedShortnameForBundle:(id)a0;
+ (id)parentAppBundleIdForClipBundleID:(id)a0;
+ (id)recordForAdamId:(unsigned long long)a0;
+ (id)recordForBundleId:(id)a0;
+ (id)registrationDateForBundle:(id)a0;

@end
