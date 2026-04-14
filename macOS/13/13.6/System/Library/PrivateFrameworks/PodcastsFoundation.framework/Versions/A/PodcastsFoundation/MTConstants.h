@interface MTConstants : NSObject

+ (id)cachesDirectory;
+ (id)_watchManagedAssetsDirectoryURL;
+ (id)managedObjectModelDefinitionURL;
+ (void)_repairFilePermissionsIfNeeded;
+ (id)attributesForNewDirectory;
+ (id)documentsDirectory;
+ (BOOL)excludeDirectoryFromBackup:(id)a0;
+ (id)libraryDirectory;
+ (id)managedAssetsDirectoryURL;
+ (void)removeExcludeFromBackupFlagFromDirectoryIfNeeded:(id)a0;
+ (id)sharedCacheDirectory;
+ (id)sharedContainerURL;
+ (id)sharedDocumentsDirectory;

@end
