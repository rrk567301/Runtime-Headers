@class NSString, GEONavdCachePersistenceManager;

@interface GEORouteHypothesisCache : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {
    GEONavdCachePersistenceManager *_persistenceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (void)tearDown;
- (void)_removeAllEntries;
- (void)protectedDataDidBecomeAvailable:(id)a0;
- (long long)numberOfEntriesOnDisk;
- (id)loadValueForKey:(id)a0;
- (id)loadEntryForRowId:(long long)a0;
- (void)saveValue:(id)a0 forKey:(id)a1;
- (void)removeKey:(id)a0 value:(id)a1;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;
- (id)rowIdsOfEntriesBeforeTimeStamp:(double)a0;
- (double)nextRefreshTimeStamp;
- (id)descriptionOfAllEntries;

@end
