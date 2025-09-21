@class NSString, NSManagedObjectModel, NSURL, NSPersistentStoreCoordinator, NSManagedObjectContext;

@interface CLSDBCache : NSObject

@property (readonly, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, copy, nonatomic) NSURL *diskCacheURL;
@property (readonly, copy, nonatomic) NSString *dataModelName;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) char supportsVersioning;

+ (id)defaultCacheName;
+ (char)locationIsValidForDatabaseAtURL:(id)a0;
+ (id)urlWithParentURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (char)save;
- (id)initForTesting;
- (char)_save;
- (id)formatVersion;
- (void)_resetCoreDataStack;
- (void)_saveAsync;
- (id)initWithURL:(id)a0 dataModelName:(id)a1;
- (void)invalidateDiskCaches;
- (void)invalidateMemoryCaches;

@end
