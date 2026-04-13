@interface WebStorageManager : NSObject

+ (id)_storageDirectoryPath;
+ (id)sharedWebStorageManager;
+ (void)setStorageDatabaseIdleInterval:(double)a0;
+ (void)closeIdleLocalStorageDatabases;

- (id)init;
- (unsigned long long)diskUsageForOrigin:(id)a0;
- (id)origins;
- (void)deleteOrigin:(id)a0;
- (void)deleteAllOrigins;
- (void)syncLocalStorage;
- (void)syncFileSystemAndTrackerDatabase;

@end
