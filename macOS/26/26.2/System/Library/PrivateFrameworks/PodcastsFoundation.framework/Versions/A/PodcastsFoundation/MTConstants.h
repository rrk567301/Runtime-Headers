@interface MTConstants : NSObject

+ (void)_repairFilePermissionsIfNeeded;
+ (id)managedObjectModelDefinitionURL;
+ (id)sharedContainerURL;
+ (id)streamedMediaAssetURL;
+ (id)sharedAssetsCacheURL;
+ (id)managedObjectModelArchiveURL;
+ (id)artworkAssetURL;
+ (id)documentsDirectory;
+ (id)shazamSignatureAssetURL;
+ (id)sharedDocumentsDirectory;
+ (id)sharedCacheDirectory;
+ (void)removeExcludeFromBackupFlagFromDirectoryIfNeeded:(id)a0;
+ (id)alignmentAssetURL;
+ (BOOL)excludeDirectoryFromBackup:(id)a0;
+ (id)cachesDirectory;
+ (id)ttmlAssetURL;
+ (id)_watchManagedAssetsDirectoryURL;
+ (id)dataAssetsCacheURL;
+ (id)preferredAssetCacheURL;
+ (id)libraryDirectory;
+ (id)managedAssetsDirectoryURL;
+ (id)attributesForNewDirectory;

@end
