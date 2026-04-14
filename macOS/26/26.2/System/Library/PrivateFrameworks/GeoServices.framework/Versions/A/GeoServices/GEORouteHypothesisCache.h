@class NSString, GEONavdCachePersistenceManager;

@interface GEORouteHypothesisCache : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {
    GEONavdCachePersistenceManager *_persistenceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tearDown;
- (id)descriptionOfAllEntries;
- (void)saveValue:(id)a0 forKey:(id)a1;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;
- (long long)numberOfEntriesOnDisk;
- (double)nextRefreshTimeStamp;
- (void).cxx_destruct;
- (void)_removeAllEntries;
- (void)removeKey:(id)a0 value:(id)a1;
- (id)init;
- (id)loadValueForKey:(id)a0;
- (void)protectedDataDidBecomeAvailable:(id)a0;
- (id)loadEntryForRowId:(long long)a0;
- (void)dealloc;

@end
