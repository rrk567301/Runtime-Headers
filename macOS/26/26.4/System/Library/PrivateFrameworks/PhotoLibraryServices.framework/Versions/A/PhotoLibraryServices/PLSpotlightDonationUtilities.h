@interface PLSpotlightDonationUtilities : NSObject

@property (class, readonly) BOOL spotlightPrivateIndexEnabled;

+ (BOOL)shouldUseSpotlightPrivateIndexForLibraryIdentifier:(long long)a0;
+ (id)domainIdentifierForPhotoLibraryIdentifier:(long long)a0;
+ (id)photosBundleIdentifier;
+ (id)spotlightUniqueIdentifierForAsset:(id)a0;
+ (id)bundleIdentifierForAsset:(id)a0;
+ (long long)wellKnownPhotoLibraryIdentifierFromPLPhotoLibrary:(id)a0;
+ (unsigned long long)universalSearchIneligibilityReasonsForPhotoLibraryWithURL:(id)a0;
+ (id)bundleIdentifierForAsset:(id)a0 wellKnownLibraryIdentifier:(long long)a1;

@end
