@class NSString, NSDictionary, NSURL, ICExclusiveLock, NSMergePolicy;

@interface ICPersistentContainer : NSPersistentContainer

@property (class, readonly, nonatomic) ICExclusiveLock *databaseOpenLock;

@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSString *storeType;
@property (retain, nonatomic) NSDictionary *storeOptions;
@property (retain, nonatomic) NSMergePolicy *mergePolicy;
@property (readonly, nonatomic) NSURL *backupsDirectoryURL;
@property (nonatomic) unsigned long long fakeFreeDiskSpace;
@property (nonatomic) char abortAfterReplacingDatabase;

+ (id)managedObjectModel;
+ (id)standardStoreOptions;
+ (char)isDataProtectionError:(id)a0;
+ (char)isDatabaseMissingError:(id)a0;
+ (id)oldManagedObjectModel;

- (void).cxx_destruct;
- (char)isReadOnly;
- (id)newBackgroundContext;
- (id)initWithStoreURL:(id)a0 storeType:(id)a1 options:(id)a2 mergePolicy:(id)a3;
- (char)loadPersistentStore:(id *)a0 storeCreatedHandler:(id /* block */)a1;
- (id)performBlockWithDatabaseOpenLock:(id /* block */)a0;
- (void)backupPersistentStoreWithError:(id)a0;
- (char)allowsCoreDataMigration;
- (id)initWithStoreURL:(id)a0 storeType:(id)a1 options:(id)a2 mergePolicy:(id)a3 managedObjectModel:(id)a4;
- (char)isTooLowOnDiskSpace;
- (char)loadPersistentStore:(id *)a0;
- (char)migrateFromOldDataModel:(id *)a0;
- (void)setupPersistentStoreDescriptions;
- (void)setupViewContext;
- (void)vacuumStore;
- (void)vacuumStoreWithCompletionHandler:(id /* block */)a0;

@end
