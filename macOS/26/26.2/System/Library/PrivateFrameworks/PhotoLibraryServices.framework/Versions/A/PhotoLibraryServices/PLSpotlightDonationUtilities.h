@interface PLSpotlightDonationUtilities : NSObject

@property (class, readonly) BOOL spotlightPrivateIndexEnabled;

+ (id)domainIdentifierForPhotoLibraryIdentifier:(long long)a0;
+ (unsigned long long)universalSearchIneligibilityReasonsForPhotoLibraryWithURL:(id)a0;
+ (id)spotlightUniqueIdentifierForAsset:(id)a0;
+ (BOOL)shouldUseSpotlightPrivateIndexForLibraryIdentifier:(long long)a0;
+ (long long)wellKnownPhotoLibraryIdentifierFromPLPhotoLibrary:(id)a0;
+ (id)photosBundleIdentifier;
+ (id)bundleIdentifierForAsset:(id)a0 wellKnownLibraryIdentifier:(long long)a1;
+ (id)bundleIdentifierForAsset:(id)a0;

@end
