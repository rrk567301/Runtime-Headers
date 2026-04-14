@class NSString, NSDictionary, NSURL, ICExclusiveLock, NSMergePolicy;

@interface ICPersistentContainer : NSPersistentContainer

@property (class, readonly, nonatomic) ICExclusiveLock *databaseOpenLock;

@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSString *storeType;
@property (retain, nonatomic) NSDictionary *storeOptions;
@property (retain, nonatomic) NSMergePolicy *mergePolicy;
@property (readonly, nonatomic) NSURL *backupsDirectoryURL;
@property (nonatomic) unsigned long long fakeFreeDiskSpace;
@property (nonatomic) BOOL abortAfterReplacingDatabase;

+ (id)managedObjectModel;
+ (id)standardStoreOptions;
+ (id)oldManagedObjectModel;
+ (BOOL)isDataProtectionError:(id)a0;
+ (BOOL)isDatabaseMissingError:(id)a0;

- (void).cxx_destruct;
- (BOOL)isReadOnly;
- (id)newBackgroundContext;
- (id)performBlockWithDatabaseOpenLock:(id /* block */)a0;
- (BOOL)loadPersistentStore:(id *)a0 storeCreatedHandler:(id /* block */)a1;
- (id)initWithStoreURL:(id)a0 storeType:(id)a1 options:(id)a2 mergePolicy:(id)a3;
- (id)initWithStoreURL:(id)a0 storeType:(id)a1 options:(id)a2 mergePolicy:(id)a3 managedObjectModel:(id)a4;
- (BOOL)migrateFromOldDataModel;
- (void)setupPersistentStoreDescriptions;
- (BOOL)loadPersistentStore:(id *)a0;
- (void)setupViewContext;
- (BOOL)allowsCoreDataMigration;
- (BOOL)isTooLowOnDiskSpace;
- (void)backupPersistentStore;
- (void)vacuumStore;
- (void)vacuumStoreWithCompletionHandler:(id /* block */)a0;

@end
