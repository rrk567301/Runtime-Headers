@interface CLSCurationUtilities : NSObject

+ (BOOL)isBlocklistedImportedByBundleIdentifier:(id)a0 withExternalAppBlocklistType:(unsigned long long)a1;
+ (id)blockedExternalAppBundleIdentifiers;
+ (id)blockedSocialMediaAppBundleIdentifiers;
+ (BOOL)isRiskyFileFormatWithAsset:(id)a0;

@end
