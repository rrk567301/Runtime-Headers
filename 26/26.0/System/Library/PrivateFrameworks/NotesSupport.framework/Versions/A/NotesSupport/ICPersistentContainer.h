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

+ (id)standardStoreOptions;
+ (BOOL)isDataProtectionError:(id)a0;
+ (id)managedObjectModel;
+ (BOOL)isDatabaseMissingError:(id)a0;
+ (id)oldManagedObjectModel;

- (BOOL)isReadOnly;
- (BOOL)migrateFromOldDataModel:(id *)a0;
- (id)initWithStoreURL:(id)a0 storeType:(id)a1 options:(id)a2 mergePolicy:(id)a3 managedObjectModel:(id)a4;
- (BOOL)allowsCoreDataMigration;
- (void)vacuumStore;
- (BOOL)isTooLowOnDiskSpace;
- (id)initWithStoreURL:(id)a0 storeType:(id)a1 options:(id)a2 mergePolicy:(id)a3;
- (id)performBlockWithDatabaseOpenLock:(id /* block */)a0;
- (void)backupPersistentStoreWithError:(id)a0;
- (void)setupViewContext;
- (BOOL)loadPersistentStore:(id *)a0 storeCreatedHandler:(id /* block */)a1;
- (void)setupPersistentStoreDescriptions;
- (void)vacuumStoreWithCompletionHandler:(id /* block */)a0;
- (BOOL)loadPersistentStore:(id *)a0;
- (id)newBackgroundContext;
- (void).cxx_destruct;

@end
