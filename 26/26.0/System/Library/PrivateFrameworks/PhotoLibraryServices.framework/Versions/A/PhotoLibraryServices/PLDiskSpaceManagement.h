@interface PLDiskSpaceManagement : NSObject

+ (long long)_processCloudSharedAsset:(id)a0 shouldFreeSpace:(BOOL)a1;
+ (void)_processPurgeWithPhotoLibrary:(id)a0 shouldFreeSpace:(BOOL)a1 shouldKeepRecentlyViewedAssets:(BOOL)a2 bytesToPurge:(unsigned long long)a3 bytesProcessed:(unsigned long long *)a4;
+ (unsigned long long)_purgeAssetsFromFetchRequest:(id)a0 photoLibrary:(id)a1 requireBetterThanThumbnails:(BOOL)a2 recentlyUsedGUIDS:(id)a3 recentlyUsedAssetObjectIDs:(id)a4 shouldFreeSpace:(BOOL)a5 bytesToPurge:(unsigned long long)a6;
+ (unsigned long long)_scanAndDeleteCacheFilesInDirectory:(id)a0 shouldFreeSpace:(BOOL)a1 bytesToPurge:(unsigned long long)a2;
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)a0 fromCloudSharingCacheDataDirectoryShouldFreeSpace:(BOOL)a1 bytesToPurge:(unsigned long long)a2;
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)a0 fromPhotoMetadataDirectoryShouldFreeSpace:(BOOL)a1 bytesToPurge:(unsigned long long)a2 skipAssets:(id)a3;
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)a0 fromReimportPhotoCloudSharingDataDirectoryShouldFreeSpace:(BOOL)a1 bytesToPurge:(unsigned long long)a2;
+ (unsigned long long)performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)a0 shouldFreeSpace:(BOOL)a1 shouldKeepRecentlyViewedAssets:(BOOL)a2 fromPhotoLibrary:(id)a3;

@end
