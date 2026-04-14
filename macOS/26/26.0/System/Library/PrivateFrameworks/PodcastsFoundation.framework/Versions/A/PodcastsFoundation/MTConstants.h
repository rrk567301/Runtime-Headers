@interface MTConstants : NSObject

+ (id)cachesDirectory;
+ (void)removeExcludeFromBackupFlagFromDirectoryIfNeeded:(id)a0;
+ (BOOL)excludeDirectoryFromBackup:(id)a0;
+ (id)alignmentAssetURL;
+ (id)documentsDirectory;
+ (id)streamedMediaAssetURL;
+ (id)managedObjectModelDefinitionURL;
+ (id)sharedDocumentsDirectory;
+ (id)preferredAssetCacheURL;
+ (id)dataAssetsCacheURL;
+ (id)shazamSignatureAssetURL;
+ (id)ttmlAssetURL;
+ (id)sharedContainerURL;
+ (id)managedAssetsDirectoryURL;
+ (id)artworkAssetURL;
+ (id)attributesForNewDirectory;
+ (id)libraryDirectory;
+ (id)sharedAssetsCacheURL;
+ (id)_watchManagedAssetsDirectoryURL;
+ (void)_repairFilePermissionsIfNeeded;
+ (id)managedObjectModelArchiveURL;
+ (id)sharedCacheDirectory;

@end
