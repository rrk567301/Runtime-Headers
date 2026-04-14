@interface MTConstants : NSObject

+ (id)attributesForNewDirectory;
+ (id)managedObjectModelDefinitionURL;
+ (id)shazamSignatureAssetURL;
+ (void)removeExcludeFromBackupFlagFromDirectoryIfNeeded:(id)a0;
+ (id)ttmlAssetURL;
+ (id)libraryDirectory;
+ (id)sharedContainerURL;
+ (id)managedObjectModelArchiveURL;
+ (id)sharedDocumentsDirectory;
+ (void)_repairFilePermissionsIfNeeded;
+ (id)_watchManagedAssetsDirectoryURL;
+ (id)streamedMediaAssetURL;
+ (id)artworkAssetURL;
+ (id)cachesDirectory;
+ (BOOL)excludeDirectoryFromBackup:(id)a0;
+ (id)sharedCacheDirectory;
+ (id)alignmentAssetURL;
+ (id)preferredAssetCacheURL;
+ (id)documentsDirectory;
+ (id)dataAssetsCacheURL;
+ (id)sharedAssetsCacheURL;
+ (id)managedAssetsDirectoryURL;

@end
