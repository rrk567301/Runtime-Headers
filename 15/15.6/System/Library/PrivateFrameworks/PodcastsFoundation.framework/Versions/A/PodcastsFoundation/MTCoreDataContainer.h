@class NSObject, NSArray, NSManagedObjectModel, NSPersistentStoreCoordinator, NSHashTable, MTManagedObjectContext, PFManagedObjectContextMonitor;
@protocol OS_dispatch_queue, MTCoreDataContainerConfigProvider;

@interface MTCoreDataContainer : NSObject

@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) MTManagedObjectContext *mainQueueContext;
@property (retain, nonatomic) MTManagedObjectContext *privateQueueContext;
@property (retain, nonatomic) MTManagedObjectContext *carPlayContext;
@property (retain, nonatomic) MTManagedObjectContext *storeContext;
@property (retain, nonatomic) MTManagedObjectContext *importContext;
@property (retain, nonatomic) MTManagedObjectContext *resetableImportContext;
@property (retain, nonatomic) MTManagedObjectContext *loggingContext;
@property (retain, nonatomic) MTManagedObjectContext *playbackContext;
@property (retain, nonatomic) PFManagedObjectContextMonitor *privateMonitor;
@property (retain, nonatomic) PFManagedObjectContextMonitor *importMonitor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mergeQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mergeNotifierQueue;
@property (retain, nonatomic) NSPersistentStoreCoordinator *coordinator;
@property (retain, nonatomic) id<MTCoreDataContainerConfigProvider> config;
@property (retain, nonatomic) NSHashTable *notifiers;
@property (retain, nonatomic) NSArray *entityNames;
@property (nonatomic) char valid;

- (void).cxx_destruct;
- (void)destroy;
- (id)allContexts;
- (id)persistentStoreCoordinator;
- (id)initWithConfig:(id)a0;
- (void)_tearDown:(char)a0;
- (id)contextForName:(id)a0;
- (void)_addChanges:(id)a0 ofType:(int)a1 toLibraryChanges:(id)a2;
- (id)_createManagedObjectContextWithName:(id)a0 coordinator:(id)a1 concurrencyType:(unsigned long long)a2;
- (void)_notifyLibraryChanged:(id)a0 contextName:(id)a1;
- (void)addChangeNotifier:(id)a0;
- (void)checkForBackwardsMigration_probablyNotABug:(id)a0;
- (void)checkForFullDisk_probablyNotABug:(id)a0;
- (void)checkForRadar75450416_probablyNotABug:(id)a0;
- (void)checkForWritePermissions:(id)a0;
- (id)mainOrPrivateContext;
- (id)managedObjectIDForURI:(id)a0 error:(id *)a1;
- (void)mergeFromContextDidSaveNotification:(id)a0;
- (id)persistentStoreUuid;
- (void)removeChangeNotifier:(id)a0;
- (id)safePersistentStoreCoordinatorWithError:(id *)a0;
- (void)tearDownAsync:(char)a0;

@end
