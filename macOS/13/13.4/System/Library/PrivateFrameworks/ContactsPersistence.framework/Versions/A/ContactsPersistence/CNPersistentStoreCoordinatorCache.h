@class CNPersistentStoreCoordinatorFactory, CNPersistentStoreCoordinatorUpdater, CNQueue, CNCache;

@interface CNPersistentStoreCoordinatorCache : NSObject

@property (readonly, nonatomic) CNCache *cache;
@property (readonly, nonatomic) CNQueue *cacheQueue;
@property (readonly, nonatomic) CNPersistentStoreCoordinatorFactory *coordinatorFactory;
@property (readonly, nonatomic) CNPersistentStoreCoordinatorUpdater *coordinatorUpdater;

+ (id)sharedInstance;
+ (id)_cacheKeyForAccountCollection:(id)a0;
+ (id)cacheKeyForAllSources;
+ (id)pscKeyForStoreDescription:(id)a0;

- (void).cxx_destruct;
- (id)_cacheEntryForKey:(id)a0;
- (id)_cacheEntryForKey:(id)a0 createIfNeeded:(BOOL)a1;
- (id)_pscResultFromCacheEntry:(id)a0 withStoreDescriptionKey:(id)a1;
- (void)_updateCacheEntry:(id)a0 withResult:(id)a1 accountCollection:(id)a2 storeDescriptionKey:(id)a3;
- (BOOL)addAllPersistentStoresAndReturnIsMainDatabasePristine;
- (id)allCacheKeys;
- (id)coordinatorForSourcesWithAccountCollection:(id)a0;
- (id)coordinatorWithCacheKey:(id)a0 storeDescription:(id)a1;
- (id)coordinatorWithCacheKey:(id)a0 storeDescription:(id)a1 createIfNeeded:(BOOL)a2;
- (id)initReadOnly:(BOOL)a0;
- (void)repairPersistenceStackIfNecessary;

@end
