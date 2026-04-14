@interface MTConstants : NSObject

+ (id)ttmlAssetURL;
+ (id)managedObjectModelDefinitionURL;
+ (id)preferredAssetCacheURL;
+ (id)streamedMediaAssetURL;
+ (id)shazamSignatureAssetURL;
+ (void)_repairFilePermissionsIfNeeded;
+ (id)sharedAssetsCacheURL;
+ (id)attributesForNewDirectory;
+ (id)documentsDirectory;
+ (id)sharedCacheDirectory;
+ (void)removeExcludeFromBackupFlagFromDirectoryIfNeeded:(id)a0;
+ (id)sharedContainerURL;
+ (id)dataAssetsCacheURL;
+ (id)managedAssetsDirectoryURL;
+ (id)artworkAssetURL;
+ (BOOL)excludeDirectoryFromBackup:(id)a0;
+ (id)managedObjectModelArchiveURL;
+ (id)cachesDirectory;
+ (id)alignmentAssetURL;
+ (id)libraryDirectory;
+ (id)sharedDocumentsDirectory;
+ (id)_watchManagedAssetsDirectoryURL;

@end
