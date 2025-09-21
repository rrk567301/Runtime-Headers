@class NSURL, NSError, NSObject, NSPersistentContainer;
@protocol OS_os_log;

@interface CNContactPosterDataPersistentStoreManager : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *os_log;

@property (readonly, nonatomic) NSURL *storeLocation;
@property (readonly, nonatomic) NSPersistentContainer *container;
@property (retain, nonatomic) NSError *loadPersistentStoresError;

+ (BOOL)_checkProductionReadyTagForDatabaseAtURL:(id)a0;
+ (id)_cloudKitOptionsWorkingAroundModuleFailures;
+ (id)_modelVersionChecksumForDatabaseAtURL:(id)a0;
+ (id)createModel;
+ (BOOL)createStoreDirectoryIfNeededAt:(id)a0 error:(id *)a1;
+ (BOOL)createStoreDirectoryIfNeededAtDefaultLocation:(id *)a0;
+ (id)currentManagedObjectModel;
+ (id)defaultDatabaseFileURL;
+ (id)defaultStoreLocation;
+ (id)inMemoryStoreManager;
+ (BOOL)moveAsideIfUntaggedDevelopmentDB:(id)a0;
+ (BOOL)performLightweightMigrationIfNeededError:(id *)a0;
+ (BOOL)performLightweightMigrationIfNeededWithStoreLocation:(id)a0 error:(id *)a1;
+ (id)sharedPersistentContainerForModel:(id)a0 storeLocation:(id)a1;
+ (id)sharedPersistentContainerForStoreLocation:(id)a0;
+ (id)storeFileURLForLocation:(id)a0;
+ (void)tagDatabaseAsSafeForProductionInContainer:(id)a0;

- (id)persistentStoreCoordinator;
- (id)storeDescription;
- (id)createManagedObjectContext;
- (id)init;
- (void)setupIfNeeded;
- (void).cxx_destruct;
- (BOOL)createStoreDirectoryIfNeeded:(id *)a0;
- (id)initWithStoreLocation:(id)a0;
- (id)initWithStoreLocation:(id)a0 container:(id)a1;
- (BOOL)performWorkWithManagedObjectContext:(id /* block */)a0 error:(id *)a1;

@end
