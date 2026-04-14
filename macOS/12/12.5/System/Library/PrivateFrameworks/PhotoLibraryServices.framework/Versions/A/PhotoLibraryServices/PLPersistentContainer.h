@class NSManagedObjectModel, NSURL, NSPersistentStoreCoordinator, PLLazyObject;
@protocol PLXPCPhotoLibraryStorePolicy;

@interface PLPersistentContainer : NSObject <PLPersistentContainerStoreAccess> {
    PLLazyObject *_lazyAssetdClient;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sharedPersistentStoreCoordinatorLock;
    NSPersistentStoreCoordinator *_sharedPersistentStoreCoordinator;
    BOOL _sharedPersistentStoreCoordinatorRemoved;
}

@property (class, readonly, copy) NSURL *managedObjectModelURL;
@property (class, readonly) NSManagedObjectModel *managedObjectModel;

@property (readonly) NSURL *libraryURL;
@property (retain) id<PLXPCPhotoLibraryStorePolicy> xpcStorePolicy;
@property (readonly) NSPersistentStoreCoordinator *sharedPersistentStoreCoordinator;

+ (BOOL)currentModelVersionMatchesLibrarySchemaVersionWithPathManager:(id)a0 error:(id *)a1;
+ (long long)_migrateOrRebuildDatabaseWithSharedPersistentStoreCoordinator:(id)a0 modelMigrator:(id)a1 migrationPolicy:(unsigned int)a2 error:(id *)a3;
+ (void)_getPersistentStoreURL:(id *)a0 options:(id *)a1 forDatabasePath:(id)a2 enableOrderKeyNotifications:(BOOL)a3;
+ (BOOL)_destroyPhotosDatabaseWithPath:(id)a0 backupToPath:(id)a1;
+ (long long)_openAndMigrateStoreWithURL:(id)a0 options:(id)a1 coordinator:(id)a2 modelMigrator:(id)a3 migrationPolicy:(unsigned int)a4 error:(id *)a5;
+ (BOOL)shouldTrackIndexUse;
+ (void)getConfigurationForDatabasePath:(id)a0 withBlock:(id /* block */)a1;
+ (int)librarySchemaVersionWithPathManager:(id)a0 error:(id *)a1;
+ (void)removePhotosDatabaseWithPathManager:(id)a0;
+ (BOOL)hasConfiguredPhotoLibrary;
+ (void)getPersistentStoreURL:(id *)a0 options:(id *)a1 forDatabasePath:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_configurePersistentStoreCoordinator:(id)a0 overrideCurrentModelVersionInStore:(BOOL)a1 error:(id *)a2;
- (id)newSharedPersistentStoreCoordinator;
- (BOOL)shouldUseXPCPhotoLibraryStore;
- (BOOL)_configureXPCPersistentStoreCoordinator:(id)a0 error:(id *)a1;
- (void)removeSharedPersistentStoreCoordinator;
- (id)initWithLibraryURL:(id)a0 lazyAssetsdClient:(id)a1;
- (id)newPersistentStoreCoordinatorForMigration:(id *)a0;
- (long long)configureSharedPersistentStoreCoordinatorAndMigrateOrRebuildIfNecessaryWithModelMigrator:(id)a0 migrationPolicy:(unsigned int)a1 error:(id *)a2;

@end
