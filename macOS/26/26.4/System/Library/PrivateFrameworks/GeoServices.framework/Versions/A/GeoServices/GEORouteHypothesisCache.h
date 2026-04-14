@class NSString, GEONavdCachePersistenceManager;

@interface GEORouteHypothesisCache : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {
    GEONavdCachePersistenceManager *_persistenceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tearDown;
- (double)nextRefreshTimeStamp;
- (void)saveValue:(id)a0 forKey:(id)a1;
- (void)protectedDataDidBecomeAvailable:(id)a0;
- (id)descriptionOfAllEntries;
- (void)removeKey:(id)a0 value:(id)a1;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)loadEntryForRowId:(long long)a0;
- (void)_removeAllEntries;
- (id)init;
- (id)loadValueForKey:(id)a0;
- (long long)numberOfEntriesOnDisk;
- (void)dealloc;

@end
