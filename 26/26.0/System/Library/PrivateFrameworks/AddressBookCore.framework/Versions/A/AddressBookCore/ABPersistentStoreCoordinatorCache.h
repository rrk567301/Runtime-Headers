@class NSString, ABPersistentStoreCoordinatorUpdater, ABPersistentStoreCoordinatorMap, NSObject;
@protocol OS_os_log, ABAccountCollection, CNScheduler;

@interface ABPersistentStoreCoordinatorCache : NSObject {
    ABPersistentStoreCoordinatorMap *_coordinatorMap;
    ABPersistentStoreCoordinatorUpdater *_coordinatorUpdater;
    id<CNScheduler> _notificationPreprocessor;
    BOOL _areStoresReadOnly;
}

@property (class, readonly) ABPersistentStoreCoordinatorCache *sharedInstance;
@property (class, readonly) NSObject<OS_os_log> *os_log;

@property (readonly) id<ABAccountCollection> accountCollection;
@property (readonly, copy) NSString *basePath;

- (void)startObserving;
- (void)dealloc;
- (void)accountsDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)addAllPersistentStoresAndReturnIsMainDatabasePristine;
- (void)repairPersistenceStackIfNecessary;
- (id)basePathForAccountWithIdentifier:(id)a0;
- (id)coordinatorForAllSources;
- (id)coordinatorWithDatabasePath:(id)a0 storeDescription:(id)a1;
- (id)initWithAccountCollection:(id)a0 readOnly:(BOOL)a1;
- (id)initWithAccountCollection:(id)a0 watchesForAccountChanges:(BOOL)a1 readOnlyStores:(BOOL)a2;
- (id)initWithDelegateInfos:(id)a0;
- (id)persistentStackDescription;
- (void)removeCacheEntryForAllSources;

@end
