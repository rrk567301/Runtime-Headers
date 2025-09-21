@class NSString, NSManagedObjectModel, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MADPhotosDataStoreClient : NSObject <PHPhotoLibraryAvailabilityObserver> {
    BOOL _readOnly;
    NSManagedObjectModel *_managedObjectModel;
    NSMutableDictionary *_persistentStoreCoordinatorDict;
    NSObject<OS_dispatch_queue> *_coordinatorManagementQueue;
    NSMutableDictionary *_mocDict;
    NSObject<OS_dispatch_queue> *_mocManagementQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedClient;
+ (BOOL)needsDataStoreMigrationForPath:(id)a0;
+ (void)_enableCoreDataMultithreadedAsserts;
+ (unsigned long long)_fileSizeInBytesForDatabaseFilePath:(id)a0;
+ (unsigned long long)dataStoreFileSizeInBytesForPhotoLibrary:(id)a0;
+ (id)defaultDatabasePathForPhotoLibrary:(id)a0;
+ (unsigned long long)latestDataStoreVersion;
+ (id)modelDefinitionPath;
+ (BOOL)needsDataStoreMigrationForPhotoLibrary:(id)a0;
+ (id)sharedContextForPath:(id)a0;
+ (id)sharedContextForPhotoLibrary:(id)a0;
+ (id)sharedMigrationContextForPhotoLibrary:(id)a0;

- (void)photoLibraryDidBecomeUnavailable:(id)a0;
- (void).cxx_destruct;
- (void)_addDefaultOptionsToDictionary:(id)a0;
- (id)initAsReadOnly:(BOOL)a0;
- (BOOL)_addPersistentStoreCoordinator:(id)a0 options:(id)a1 storeType:(id)a2 path:(id)a3;
- (BOOL)_configurePersistentStoreCoordinator:(id)a0 path:(id)a1;
- (BOOL)_configureXPCPersistentStoreCoordinator:(id)a0 photoLibrary:(id)a1;
- (id)_createPersistentStoreCoordinatorForPath:(id)a0;
- (id)_createPersistentStoreCoordinatorForPhotoLibrary:(id)a0;
- (id)_managedObjectContextForPath:(id)a0;
- (id)_managedObjectContextForPhotoLibrary:(id)a0 shouldCheckMigration:(BOOL)a1;
- (id)_queryPersistentStoreCoordinatorMetadataForPath:(id)a0;
- (id)_queryPersistentStoreCoordinatorMetadataForPhotoLibrary:(id)a0;
- (void)_releaseSharedDataStoreForPhotoLibrary:(id)a0;
- (int)_removePersistentStoresForCoordinator:(id)a0;
- (BOOL)_shouldCopyPersistentStoreAtPath:(id)a0;
- (id)persistentStoreCoordinatorForPath:(id)a0;
- (id)persistentStoreCoordinatorForPhotoLibrary:(id)a0;
- (int)queryDatabaseVersion:(unsigned long long *)a0 path:(id)a1;
- (int)queryDatabaseVersion:(unsigned long long *)a0 photoLibrary:(id)a1;
- (int)recreatePersistentStoreForPhotoLibrary:(id)a0;
- (void)releaseSharedDataStoreForPhotoLibrary:(id)a0;
- (int)setDatabaseVersion:(unsigned long long)a0 photoLibrary:(id)a1;

@end
