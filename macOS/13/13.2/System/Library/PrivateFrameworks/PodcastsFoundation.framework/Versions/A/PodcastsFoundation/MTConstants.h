@interface MTConstants : NSObject

+ (id)cachesDirectory;
+ (id)sharedContainerURL;
+ (id)managedObjectModelDefinitionURL;
+ (id)sharedDocumentsDirectory;
+ (id)sharedCacheDirectory;
+ (void)removeExcludeFromBackupFlagFromDirectoryIfNeeded:(id)a0;
+ (BOOL)excludeDirectoryFromBackup:(id)a0;
+ (id)_watchManagedAssetsDirectoryURL;
+ (id)managedAssetsDirectoryURL;
+ (id)documentsDirectory;

@end
