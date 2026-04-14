@class NSMutableDictionary, ABPersistentStoreCoordinatorFactory;

@interface ABPersistentStoreCoordinatorMap : NSObject {
    NSMutableDictionary *_cache;
    ABPersistentStoreCoordinatorFactory *_coordinatorFactory;
}

+ (id)cacheKeyForAllSources;
+ (id)coordinatorKeyForStoreDescription:(id)a0;
+ (BOOL)resultHasPersistentStoresAttached:(id)a0;
+ (id)cacheKeyForDatabasePath:(id)a0;

- (void).cxx_destruct;
- (id)allCacheKeys;
- (id)coordinatorWithDatabasePath:(id)a0 storeDescription:(id)a1;
- (id)initWithCoordinatorFactory:(id)a0;
- (id)coordinatorForAllSourcesAndDidUpdateMap:(BOOL *)a0;
- (id)coordinatorWithCacheKey:(id)a0 coordinatorKey:(id)a1;
- (id)nts_coordinatorForAllSourcesAndDidUpdateMap:(BOOL *)a0;
- (id)nts_cacheEntryWithKeyAddingIfAbsent:(id)a0;
- (id)nts_resultsFromCacheEntry:(id)a0;
- (void)nts_updateCacheEntry:(id)a0 withResults:(id)a1;
- (void)nts_processCachedResults:(id)a0;
- (void)nts_attachPersistentStoresIfNecessary:(id)a0;
- (void)nts_logInitialStoresForCoordinator:(id)a0;
- (id)nts_coordinatorWithDatabasePath:(id)a0 storeDescription:(id)a1;
- (id)nts_coordinatorWithCacheKey:(id)a0 coordinatorKey:(id)a1;

@end
