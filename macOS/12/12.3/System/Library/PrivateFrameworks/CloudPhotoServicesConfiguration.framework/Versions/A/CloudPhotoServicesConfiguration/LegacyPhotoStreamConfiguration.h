@interface LegacyPhotoStreamConfiguration : NSObject

+ (id)configuration;
+ (void)setConfiguration:(id)a0;
+ (BOOL)hasUnimportedAssets;
+ (BOOL)isMyPhotoStreamEnabledInSettings:(id)a0;
+ (BOOL)isSharedPhotoStreamEnabledInSettings:(id)a0;
+ (id)legacyStatusInformationWithStatusInformation:(id)a0;
+ (BOOL)applyStateChangeRequest:(id)a0 forAppleID:(id)a1;
+ (void)disableLegacyPhotoApplicationCloudPhotoServices;
+ (BOOL)currentProcessIsLegacyPhotoApplication;
+ (id)installedCompatibleLegacyPhotoApplicationBundleIdentifiers;
+ (id)installedIncompatibleLegacyPhotoApplicationBundleIdentifiers;
+ (id)streamLibraryIdentifier;
+ (BOOL)isMyPhotoStreamEnabled;
+ (BOOL)isSharedPhotoStreamEnabled;
+ (BOOL)applyStateChangeMap:(id)a0 forAppleID:(id)a1;
+ (BOOL)setLegacyPhotoStreamStateForAppleID:(id)a0 options:(id)a1;
+ (void)disablePhotostreamAgentLoginItem;
+ (void)enablePhotostreamAgentLoginItem;
+ (id)photoStreamAgentLoginItemURLForHostApplicationURL:(id)a0;
+ (id)photoStreamAgentURL;
+ (id)versionStringForBundleAtURL:(id)a0;
+ (void)disablePhotostreamAgentLoginItemAtURL:(id)a0;
+ (BOOL)hasApplicationWithBundleIdentifier:(id)a0 minimumVersion:(id)a1;
+ (BOOL)hasApplicationWithBundleIdentifier:(id)a0 versionLowerThanVersion:(id)a1;
+ (id)applicationBundleVersionForIdentifier:(id)a0;
+ (struct __CFString { } *)configurationAppId;
+ (id)importStatusInformation;
+ (id)rawLegacyServiceConfiguration;

@end
