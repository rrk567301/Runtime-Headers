@interface PLSpotlightDonationUtilities : NSObject

@property (class, readonly) BOOL spotlightPrivateIndexEnabled;

+ (id)spotlightUniqueIdentifierForAsset:(id)a0;
+ (BOOL)shouldUseSpotlightPrivateIndexForLibraryIdentifier:(long long)a0;
+ (id)bundleIdentifierForAsset:(id)a0;
+ (id)photosBundleIdentifier;
+ (long long)wellKnownPhotoLibraryIdentifierFromPLPhotoLibrary:(id)a0;
+ (unsigned long long)universalSearchIneligibilityReasonsForPhotoLibraryWithURL:(id)a0;
+ (id)domainIdentifierForPhotoLibraryIdentifier:(long long)a0;
+ (id)bundleIdentifierForAsset:(id)a0 wellKnownLibraryIdentifier:(long long)a1;

@end
