@class NSString;

@interface CalPersistentStoreCoordinator : NSPersistentStoreCoordinator {
    NSString *_persistentStorePath;
}

@property (retain) NSString *calendarStorePath;
@property BOOL isForMigration;

+ (id)defaultPersistentStoreCoordinator;
+ (id)_persistentStoreOptionsForStoreOfType:(id)a0 storeURL:(id)a1;
+ (void)_clearPSCForUnitTests;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (id)calendarCachePath;
- (id)addPersistentStoreOfType:(id)a0 error:(id *)a1;
- (void)setCreationDateForPersistentStore:(id)a0;
- (BOOL)restorePersistentStore:(id *)a0;
- (BOOL)replacePersistentStoreWithPersistentStoreFromURL:(id)a0 error:(id *)a1;
- (BOOL)restorePersistentStoreWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)addPersistentStore:(id *)a0;
- (void)_flushMetaDataChangeToDisk;
- (void)setMetaDataObject:(id)a0 forKey:(id)a1 forPersistentStore:(id)a2;
- (BOOL)restorePersistentStoreInBatches:(BOOL)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)_removeBackupCacheFiles;
- (BOOL)restorePersistentStoreInBatches:(BOOL)a0 error:(id *)a1;
- (void)setUpgradedEtagsForPersistentStore:(id)a0;
- (BOOL)removePersistentStore:(id *)a0;
- (id)restorePersistentStoreViaTemp:(id *)a0;
- (void)migrateETags;

@end
