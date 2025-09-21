@class NSManagedObjectModel, NSURL, NSPersistentStoreCoordinator, PLLazyObject;
@protocol PLXPCPhotoLibraryStorePolicy;

@interface PLPersistentContainer : NSObject <PLPersistentContainerStoreAccess> {
    PLLazyObject *_lazyAssetdClient;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sharedPersistentStoreCoordinatorLock;
    NSPersistentStoreCoordinator *_sharedPersistentStoreCoordinator;
    char _sharedPersistentStoreCoordinatorRemoved;
}

@property (class, readonly, copy) NSURL *managedObjectModelURL;
@property (class, readonly) NSManagedObjectModel *managedObjectModel;

@property (readonly) NSURL *libraryURL;
@property (retain) id<PLXPCPhotoLibraryStorePolicy> xpcStorePolicy;
@property (readonly, nonatomic) char didConfigurePersistentStore;
@property (readonly, nonatomic) char didConfigureXPCStore;
@property (readonly) NSPersistentStoreCoordinator *sharedPersistentStoreCoordinator;

+ (char)currentModelVersionMatchesLibrarySchemaVersionWithPathManager:(id)a0 error:(id *)a1;
+ (char)_destroyPhotosDatabaseWithPath:(id)a0 backupToPath:(id)a1;
+ (void)_getPersistentStoreURL:(id *)a0 options:(id *)a1 forDatabasePath:(id)a2 enableOrderKeyNotifications:(char)a3;
+ (long long)_migrateOrRebuildDatabaseWithSharedPersistentStoreCoordinator:(id)a0 modelMigrator:(id)a1 migrationPolicy:(unsigned int)a2 error:(id *)a3;
+ (long long)_openAndMigrateStoreWithURL:(id)a0 options:(id)a1 coordinator:(id)a2 modelMigrator:(id)a3 migrationPolicy:(unsigned int)a4 error:(id *)a5;
+ (void)getConfigurationForDatabasePath:(id)a0 withBlock:(id /* block */)a1;
+ (void)getPersistentStoreURL:(id *)a0 options:(id *)a1 forDatabasePath:(id)a2;
+ (int)librarySchemaVersionWithPathManager:(id)a0 error:(id *)a1;
+ (id)newManagedObjectModel;
+ (void)removePhotosDatabaseWithPathManager:(id)a0;
+ (char)shouldTrackIndexUse;
+ (void)unsafeRemoveManagedObjectModel;

- (void)dealloc;
- (void).cxx_destruct;
- (char)_configurePersistentStoreCoordinator:(id)a0 overrideCurrentModelVersionInStore:(char)a1 error:(id *)a2;
- (char)_configureXPCPersistentStoreCoordinator:(id)a0 error:(id *)a1;
- (void)_setTestDidConfigureXPCStore:(char)a0;
- (long long)configureSharedPersistentStoreCoordinatorAndMigrateOrRebuildIfNecessaryWithModelMigrator:(id)a0 migrationPolicy:(unsigned int)a1 error:(id *)a2;
- (id)initWithLibraryURL:(id)a0 lazyAssetsdClient:(id)a1;
- (id)newPersistentStoreCoordinatorForMigration:(id *)a0;
- (id)newSharedPersistentStoreCoordinator;
- (void)removeSharedPersistentStoreCoordinator;
- (char)shouldUseXPCPhotoLibraryStore;

@end
