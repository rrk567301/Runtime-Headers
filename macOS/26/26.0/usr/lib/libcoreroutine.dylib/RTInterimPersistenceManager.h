@class RTDataProtectionManager, RTPlatform, NSManagedObjectModel, NSManagedObjectContext, NSURL, NSPersistentContainer;

@interface RTInterimPersistenceManager : RTService

@property (nonatomic) unsigned long long availability;
@property (readonly, nonatomic) RTDataProtectionManager *dataProtectionManager;
@property (readonly, nonatomic) RTPlatform *platform;
@property (readonly, nonatomic) NSPersistentContainer *persistentContainer;
@property (readonly, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) NSURL *modelsDirectory;
@property (readonly, nonatomic) NSURL *storesDirectory;

+ (id)defaultModelsDirectory;
+ (id)defaultStoresDirectory;
+ (id)protectedStoreFilesExtensions;

- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_setup;
- (void)performBlock:(id /* block */)a0;
- (void)performBlockAndWait:(id /* block */)a0;
- (void).cxx_destruct;
- (int)_acquireBackgroundAssertionForFileDescriptor:(int)a0;
- (BOOL)_acquireBackgroundProcessingPermissionForStoreURL:(id)a0 cacheFileExtension:(id)a1;
- (BOOL)_acquireBackgroundProcessingPermissions;
- (int)_getFileDescriptorForPersistenceStoreFile:(id)a0;
- (void)_loadStore;
- (void)_onDataProtectionChange:(id)a0;
- (id)initWithDataProtectionManager:(id)a0 platform:(id)a1;
- (id)initWithDataProtectionManager:(id)a0 platform:(id)a1 modelsDirectory:(id)a2 storesDirectory:(id)a3;
- (void)onDataProtectionChange:(id)a0;

@end
