@interface LegacyPhotoStreamConfiguration : NSObject

+ (id)configuration;
+ (void)setConfiguration:(id)a0;
+ (char)hasUnimportedAssets;
+ (char)applyStateChangeMap:(id)a0 forAppleID:(id)a1;
+ (void)enablePhotostreamAgentLoginItem;
+ (id)applicationBundleVersionForIdentifier:(id)a0;
+ (char)applyStateChangeRequest:(id)a0 forAppleID:(id)a1;
+ (struct __CFString { } *)configurationAppId;
+ (char)currentProcessIsLegacyPhotoApplication;
+ (void)disableLegacyPhotoApplicationCloudPhotoServices;
+ (void)disablePhotostreamAgentLoginItem;
+ (void)disablePhotostreamAgentLoginItemAtURL:(id)a0;
+ (char)hasApplicationWithBundleIdentifier:(id)a0 minimumVersion:(id)a1;
+ (char)hasApplicationWithBundleIdentifier:(id)a0 versionLowerThanVersion:(id)a1;
+ (id)importStatusInformation;
+ (id)installedCompatibleLegacyPhotoApplicationBundleIdentifiers;
+ (id)installedIncompatibleLegacyPhotoApplicationBundleIdentifiers;
+ (char)isMyPhotoStreamEnabled;
+ (char)isMyPhotoStreamEnabledInSettings:(id)a0;
+ (char)isSharedPhotoStreamEnabled;
+ (char)isSharedPhotoStreamEnabledInSettings:(id)a0;
+ (id)legacyStatusInformationWithStatusInformation:(id)a0;
+ (id)photoStreamAgentLoginItemURLForHostApplicationURL:(id)a0;
+ (id)photoStreamAgentURL;
+ (id)rawLegacyServiceConfiguration;
+ (char)setLegacyPhotoStreamStateForAppleID:(id)a0 options:(id)a1;
+ (id)streamLibraryIdentifier;
+ (id)versionStringForBundleAtURL:(id)a0;

@end
