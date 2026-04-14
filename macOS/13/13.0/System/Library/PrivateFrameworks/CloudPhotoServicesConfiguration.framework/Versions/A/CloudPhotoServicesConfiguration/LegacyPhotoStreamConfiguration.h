@interface LegacyPhotoStreamConfiguration : NSObject

+ (id)configuration;
+ (void)setConfiguration:(id)a0;
+ (BOOL)hasUnimportedAssets;
+ (id)installedCompatibleLegacyPhotoApplicationBundleIdentifiers;
+ (id)installedIncompatibleLegacyPhotoApplicationBundleIdentifiers;
+ (BOOL)currentProcessIsLegacyPhotoApplication;
+ (BOOL)applyStateChangeRequest:(id)a0 forAppleID:(id)a1;
+ (BOOL)applyStateChangeMap:(id)a0 forAppleID:(id)a1;
+ (void)disableLegacyPhotoApplicationCloudPhotoServices;
+ (BOOL)setLegacyPhotoStreamStateForAppleID:(id)a0 options:(id)a1;
+ (void)enablePhotostreamAgentLoginItem;
+ (id)photoStreamAgentURL;
+ (id)photoStreamAgentLoginItemURLForHostApplicationURL:(id)a0;
+ (void)disablePhotostreamAgentLoginItem;
+ (void)disablePhotostreamAgentLoginItemAtURL:(id)a0;
+ (BOOL)hasApplicationWithBundleIdentifier:(id)a0 minimumVersion:(id)a1;
+ (BOOL)hasApplicationWithBundleIdentifier:(id)a0 versionLowerThanVersion:(id)a1;
+ (id)applicationBundleVersionForIdentifier:(id)a0;
+ (id)versionStringForBundleAtURL:(id)a0;
+ (BOOL)isMyPhotoStreamEnabled;
+ (BOOL)isMyPhotoStreamEnabledInSettings:(id)a0;
+ (BOOL)isSharedPhotoStreamEnabled;
+ (BOOL)isSharedPhotoStreamEnabledInSettings:(id)a0;
+ (id)rawLegacyServiceConfiguration;
+ (struct __CFString { } *)configurationAppId;
+ (id)legacyStatusInformationWithStatusInformation:(id)a0;
+ (id)importStatusInformation;
+ (id)streamLibraryIdentifier;

@end
