@class ULDataContainer, ULPersistenceStore, NSManagedObjectModel, NSPersistentStoreCoordinator, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface ULPersistenceManager : NSObject

@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (retain, nonatomic) ULPersistenceStore *persistenceStore;
@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) ULDataContainer *dataContainer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSURL *modelsDirectory;
@property (retain, nonatomic) NSURL *storesDirectory;
@property (nonatomic) char useWal;

+ (id)defaultModelsDirectory;
+ (id)defaultLocalStoreFilename;

- (id)init;
- (void).cxx_destruct;
- (void)handleDatabaseError:(id)a0;
- (id)createManagedObjectContext;
- (void)_enableConcurrencyDebug;
- (id)_getDefaultStoresDirectory;
- (char)_isStoreConnected;
- (char)connectToStore;
- (char)disconnectFromStore;
- (id)getLocalStoreURL;
- (char)_isMainDatabase;
- (void)_deleteDatabaseFilesAtPath:(id)a0;
- (char)_destroyStore;
- (char)_disconnectFromStore;
- (char)_excludeDirectoryFromTimeMachineBackup:(id)a0;
- (void)_exitProcessWithFailureCode;
- (id)_getDefaultStoresDirectoryPathForCurrentPlatform;
- (id)_getLocalStoreURL;
- (void)_handleCorruptedDatabase:(id)a0;
- (void)_handleDatabaseError:(id)a0;
- (char)destroyStore;
- (id)initWithModelsDirectory:(id)a0 storesDirectory:(id)a1 managedObjectModel:(id)a2 useWal:(char)a3;
- (id)initWithModelsDirectory:(id)a0 storesDirectory:(id)a1 useWal:(char)a2;
- (char)isMainDatabase;
- (char)isStoreConnected;

@end
