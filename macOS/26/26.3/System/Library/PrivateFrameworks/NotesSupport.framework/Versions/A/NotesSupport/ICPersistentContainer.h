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
+ (id)oldManagedObjectModel;
+ (BOOL)isDatabaseMissingError:(id)a0;
+ (BOOL)isDataProtectionError:(id)a0;
+ (id)standardStoreOptions;

- (BOOL)isReadOnly;
- (id)initWithStoreURL:(id)a0 storeType:(id)a1 options:(id)a2 mergePolicy:(id)a3 managedObjectModel:(id)a4;
- (id)performBlockWithDatabaseOpenLock:(id /* block */)a0;
- (BOOL)isTooLowOnDiskSpace;
- (BOOL)loadPersistentStore:(id *)a0;
- (BOOL)loadPersistentStore:(id *)a0 storeCreatedHandler:(id /* block */)a1;
- (void)vacuumStore;
- (BOOL)migrateFromOldDataModel:(id *)a0;
- (void)backupPersistentStoreWithError:(id)a0;
- (void).cxx_destruct;
- (void)setupPersistentStoreDescriptions;
- (id)initWithStoreURL:(id)a0 storeType:(id)a1 options:(id)a2 mergePolicy:(id)a3;
- (id)newBackgroundContext;
- (void)vacuumStoreWithCompletionHandler:(id /* block */)a0;
- (void)setupViewContext;
- (BOOL)allowsCoreDataMigration;

@end
