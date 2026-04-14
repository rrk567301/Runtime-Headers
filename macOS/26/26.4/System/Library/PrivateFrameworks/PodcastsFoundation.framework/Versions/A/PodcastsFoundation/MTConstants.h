@interface MTConstants : NSObject

+ (id)streamedMediaAssetURL;
+ (id)managedAssetsDirectoryURL;
+ (BOOL)excludeDirectoryFromBackup:(id)a0;
+ (id)sharedCacheDirectory;
+ (id)libraryDirectory;
+ (id)cachesDirectory;
+ (id)documentsDirectory;
+ (id)managedObjectModelArchiveURL;
+ (void)removeExcludeFromBackupFlagFromDirectoryIfNeeded:(id)a0;
+ (id)sharedAssetsCacheURL;
+ (id)shazamSignatureAssetURL;
+ (id)attributesForNewDirectory;
+ (id)sharedContainerURL;
+ (id)preferredAssetCacheURL;
+ (id)managedObjectModelDefinitionURL;
+ (id)sharedDocumentsDirectory;
+ (id)ttmlAssetURL;
+ (id)_watchManagedAssetsDirectoryURL;
+ (id)dataAssetsCacheURL;
+ (void)_repairFilePermissionsIfNeeded;
+ (id)artworkAssetURL;

@end
