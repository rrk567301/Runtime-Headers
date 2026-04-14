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

+ (id)oldManagedObjectModel;
+ (id)managedObjectModel;
+ (id)standardStoreOptions;
+ (BOOL)isDataProtectionError:(id)a0;
+ (BOOL)isDatabaseMissingError:(id)a0;

- (BOOL)isReadOnly;
- (void)vacuumStore;
- (void)backupPersistentStoreWithError:(id)a0;
- (BOOL)loadPersistentStore:(id *)a0;
- (void)setupViewContext;
- (id)initWithStoreURL:(id)a0 storeType:(id)a1 options:(id)a2 mergePolicy:(id)a3 managedObjectModel:(id)a4;
- (BOOL)allowsCoreDataMigration;
- (void).cxx_destruct;
- (void)vacuumStoreWithCompletionHandler:(id /* block */)a0;
- (id)performBlockWithDatabaseOpenLock:(id /* block */)a0;
- (BOOL)isTooLowOnDiskSpace;
- (BOOL)migrateFromOldDataModel:(id *)a0;
- (id)newBackgroundContext;
- (id)initWithStoreURL:(id)a0 storeType:(id)a1 options:(id)a2 mergePolicy:(id)a3;
- (void)setupPersistentStoreDescriptions;
- (BOOL)loadPersistentStore:(id *)a0 storeCreatedHandler:(id /* block */)a1;

@end
