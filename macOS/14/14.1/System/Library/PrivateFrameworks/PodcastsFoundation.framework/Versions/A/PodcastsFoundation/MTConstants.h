@interface MTConstants : NSObject

+ (id)cachesDirectory;
+ (id)managedObjectModelDefinitionURL;
+ (id)_watchManagedAssetsDirectoryURL;
+ (id)artworkAssetURL;
+ (void)_repairFilePermissionsIfNeeded;
+ (id)attributesForNewDirectory;
+ (id)dataAssetsCacheURL;
+ (id)documentsDirectory;
+ (BOOL)excludeDirectoryFromBackup:(id)a0;
+ (id)libraryDirectory;
+ (id)managedAssetsDirectoryURL;
+ (void)removeExcludeFromBackupFlagFromDirectoryIfNeeded:(id)a0;
+ (id)sharedAssetsCacheURL;
+ (id)sharedCacheDirectory;
+ (id)sharedContainerURL;
+ (id)sharedDocumentsDirectory;

@end
