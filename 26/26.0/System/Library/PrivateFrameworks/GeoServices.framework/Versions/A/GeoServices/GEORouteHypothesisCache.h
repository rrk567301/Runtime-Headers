@class NSString, GEONavdCachePersistenceManager;

@interface GEORouteHypothesisCache : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {
    GEONavdCachePersistenceManager *_persistenceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tearDown;
- (void)dealloc;
- (long long)numberOfEntriesOnDisk;
- (id)descriptionOfAllEntries;
- (id)init;
- (double)nextRefreshTimeStamp;
- (void)protectedDataDidBecomeAvailable:(id)a0;
- (id)loadEntryForRowId:(long long)a0;
- (id)loadValueForKey:(id)a0;
- (void)removeKey:(id)a0 value:(id)a1;
- (void)_removeAllEntries;
- (void).cxx_destruct;
- (void)saveValue:(id)a0 forKey:(id)a1;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;

@end
