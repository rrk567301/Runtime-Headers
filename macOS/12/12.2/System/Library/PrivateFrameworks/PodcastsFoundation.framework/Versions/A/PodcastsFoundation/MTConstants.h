@interface MTConstants : NSObject

+ (id)cachesDirectory;
+ (id)sharedContainerURL;
+ (BOOL)removeExcludeFromBackupFlagFromDirectoryIfNeeded:(id)a0;
+ (id)sharedCacheDirectory;
+ (id)managedObjectModelDefinitionURL;
+ (id)sharedDocumentsDirectory;
+ (BOOL)excludeDirectoryFromBackup:(id)a0;
+ (id)_watchManagedAssetsDirectoryURL;
+ (id)managedAssetsDirectoryURL;
+ (id)documentsDirectory;

@end
