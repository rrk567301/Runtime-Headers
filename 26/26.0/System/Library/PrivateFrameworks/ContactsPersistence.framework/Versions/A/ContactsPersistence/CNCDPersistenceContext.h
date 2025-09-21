@class NSManagedObjectContext;
@protocol CNCDPersistenceBackend, CNCDPersistenceChangesNotifier;

@interface CNCDPersistenceContext : NSObject

@property (readonly, nonatomic) id<CNCDPersistenceBackend> persistenceBackend;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) id owningAddressBook;
@property (readonly, nonatomic) id<CNCDPersistenceChangesNotifier> changesNotifier;
@property (readonly, nonatomic) BOOL registeredForDidSaveNotification;
@property (nonatomic) double lastRepairCheckTimestamp;

+ (id)log;

- (void)dealloc;
- (id)notificationID;
- (id)allContainers;
- (unsigned long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (id)executeFetchRequest:(id)a0;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)defaultContainer;
- (id)allContainersOfType:(long long)a0;
- (void)applyDiff:(id)a0 toContainerWithIdentifier:(id)a1;
- (void)assignManagedObject:(id)a0 toStoreWithContainerIdentifier:(id)a1;
- (unsigned long long)countOfStores;
- (id)defaultPersistentStore;
- (id)exchangeAccountContainers;
- (id)initWithPersistenceBackend:(id)a0 managedObjectContext:(id)a1;
- (id)initWithPersistenceBackend:(id)a0 managedObjectContext:(id)a1 changesNotifier:(id)a2;
- (id)initWithPersistenceBackend:(id)a0 managedObjectContext:(id)a1 owningAddressBook:(id)a2 changesNotifier:(id)a3;
- (void)managedObjectContextWillSave:(id)a0;
- (void)performBlockAndWaitWithContextAndCoordinator:(id /* block */)a0;
- (void)performBlockAndWaitWithManagedObjectContext:(id /* block */)a0;
- (id)performResultBlockWithManagedObjectContext:(id /* block */)a0;
- (void)repairPersistenceStackIfNecessary;
- (BOOL)saveManagedObjectContext:(id *)a0;
- (BOOL)shouldPerformRepairs;
- (id)storeForContainer:(id)a0;
- (id)storeForContainer:(id)a0 inCoordinator:(id)a1;
- (id)storeUrlForContainerIdentifer:(id)a0;
- (id)storesForContainers:(id)a0;

@end
