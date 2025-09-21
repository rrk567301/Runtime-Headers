@interface PLSpotlightDonationUtilities : NSObject

@property (class, readonly) char spotlightPrivateIndexEnabled;

+ (id)domainIdentifierForPhotoLibraryIdentifier:(long long)a0;
+ (id)photosBundleIdentifier;
+ (char)shouldUseSpotlightPrivateIndexForLibraryIdentifier:(long long)a0;
+ (id)bundleIdentifierForAsset:(id)a0;
+ (id)bundleIdentifierForAsset:(id)a0 wellKnownLibraryIdentifier:(long long)a1;
+ (char)isUniversalSearchEnabledForPhotoLibrary:(id)a0;
+ (char)shouldDisablePhotosLegacySearchDonation;
+ (id)spotlightUniqueIdentifierForAsset:(id)a0;
+ (unsigned long long)universalSearchIneligibilityReasonsForPhotoLibraryWithURL:(id)a0;
+ (long long)wellKnownPhotoLibraryIdentifierFromPLPhotoLibrary:(id)a0;

@end
