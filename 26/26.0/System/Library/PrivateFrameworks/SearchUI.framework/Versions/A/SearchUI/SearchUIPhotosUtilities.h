@interface SearchUIPhotosUtilities : NSObject

+ (id)sharedPhotoLibraryIsSyndicated:(BOOL)a0;
+ (id)coreSpotlightIdentifierForAsset:(id)a0;
+ (id)fetchAssetsForImages:(id)a0;
+ (id)fetchOptionsForLibrary:(id)a0;
+ (id)fetchResultForPhotoIdentifiers:(id)a0 isSyndicated:(BOOL)a1;
+ (id)personWithIdentifier:(id)a0 isSyndicated:(BOOL)a1;
+ (void)shutdownPhotoLibraries;

@end
