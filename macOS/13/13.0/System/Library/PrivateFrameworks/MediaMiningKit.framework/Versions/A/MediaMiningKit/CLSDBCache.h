@class NSString, NSManagedObjectModel, NSURL, NSPersistentStoreCoordinator, NSManagedObjectContext;

@interface CLSDBCache : NSObject

@property (readonly, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, copy, nonatomic) NSURL *diskCacheURL;
@property (readonly, copy, nonatomic) NSString *dataModelName;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) BOOL supportsVersioning;

+ (void)initialize;
+ (id)defaultCache;
+ (id)defaultCacheName;
+ (id)applicationDataUrlQueueWithURL:(id)a0;
+ (id)currentApplicationDataUrlQueue;
+ (id)diskCacheWithName:(id)a0;
+ (id)urlForGraphApplicationData;
+ (BOOL)locationIsValidForDatabaseAtURL:(id)a0;

- (void).cxx_destruct;
- (BOOL)save;
- (BOOL)_save;
- (id)formatVersion;
- (void)_resetCoreDataStack;
- (void)invalidateMemoryCaches;
- (id)initWithDiskCacheName:(id)a0;
- (id)initWithDiskCacheName:(id)a0 dataModelName:(id)a1;
- (id)initAtURL:(id)a0;
- (void)_saveAsync;
- (void)invalidateDiskCaches;

@end
