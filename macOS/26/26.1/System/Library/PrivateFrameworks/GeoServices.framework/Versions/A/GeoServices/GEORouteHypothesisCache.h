@class NSString, GEONavdCachePersistenceManager;

@interface GEORouteHypothesisCache : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {
    GEONavdCachePersistenceManager *_persistenceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tearDown;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;
- (void)_removeAllEntries;
- (id)loadEntryForRowId:(long long)a0;
- (void)removeKey:(id)a0 value:(id)a1;
- (long long)numberOfEntriesOnDisk;
- (id)descriptionOfAllEntries;
- (void)dealloc;
- (double)nextRefreshTimeStamp;
- (void).cxx_destruct;
- (id)loadValueForKey:(id)a0;
- (void)saveValue:(id)a0 forKey:(id)a1;
- (void)protectedDataDidBecomeAvailable:(id)a0;
- (id)init;

@end
