@interface PLPTPFetches : NSObject

+ (id)fetchAssetIdsToExcludeFromPTPInContext:(id)a0 isCloudPhotoLibraryEnabled:(char)a1;
+ (id)predicateForAssetsExposedByPHPTPExcludingObjectIDs:(id)a0;
+ (id)fetchObjectIDsForAssetsExposedToPTPFromObjectIDs:(id)a0 inLibrary:(id)a1;
+ (id)fetchObjectIDsForAssetsExposedToPTPFromObjectIDs:(id)a0 inLibrary:(id)a1 isCloudPhotoLibraryEnabled:(char)a2;

@end
