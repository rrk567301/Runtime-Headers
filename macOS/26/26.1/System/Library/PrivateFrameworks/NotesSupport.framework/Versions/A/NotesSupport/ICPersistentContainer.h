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

+ (BOOL)isDatabaseMissingError:(id)a0;
+ (id)oldManagedObjectModel;
+ (id)standardStoreOptions;
+ (BOOL)isDataProtectionError:(id)a0;
+ (id)managedObjectModel;

- (id)newBackgroundContext;
- (void)backupPersistentStoreWithError:(id)a0;
- (BOOL)isReadOnly;
- (BOOL)migrateFromOldDataModel:(id *)a0;
- (BOOL)allowsCoreDataMigration;
- (void)setupViewContext;
- (BOOL)loadPersistentStore:(id *)a0 storeCreatedHandler:(id /* block */)a1;
- (BOOL)isTooLowOnDiskSpace;
- (id)initWithStoreURL:(id)a0 storeType:(id)a1 options:(id)a2 mergePolicy:(id)a3;
- (BOOL)loadPersistentStore:(id *)a0;
- (void).cxx_destruct;
- (void)vacuumStoreWithCompletionHandler:(id /* block */)a0;
- (void)vacuumStore;
- (id)initWithStoreURL:(id)a0 storeType:(id)a1 options:(id)a2 mergePolicy:(id)a3 managedObjectModel:(id)a4;
- (id)performBlockWithDatabaseOpenLock:(id /* block */)a0;
- (void)setupPersistentStoreDescriptions;

@end
