@class NSString, NSManagedObjectModel, NSURL, NSPersistentStoreCoordinator, NSManagedObjectContext;

@interface CLSDBCache : NSObject

@property (readonly, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, copy, nonatomic) NSURL *diskCacheURL;
@property (readonly, copy, nonatomic) NSString *dataModelName;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) BOOL supportsVersioning;

+ (id)defaultCacheName;
+ (BOOL)locationIsValidForDatabaseAtURL:(id)a0;
+ (id)urlWithParentURL:(id)a0;

- (BOOL)_save;
- (BOOL)save;
- (id)initWithURL:(id)a0;
- (void)invalidateDiskCaches;
- (id)initForTesting;
- (void).cxx_destruct;
- (void)invalidateMemoryCaches;
- (id)formatVersion;
- (BOOL)_saveWithError:(id *)a0;
- (void)_resetCoreDataStack;
- (void)_saveAsync;
- (id)initWithURL:(id)a0 dataModelName:(id)a1;

@end
