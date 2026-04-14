@class NSString, GEONavdCachePersistenceManager;

@interface GEORouteHypothesisCache : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {
    GEONavdCachePersistenceManager *_persistenceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)nextRefreshTimeStamp;
- (id)loadValueForKey:(id)a0;
- (void)_removeAllEntries;
- (void)tearDown;
- (id)init;
- (id)loadEntryForRowId:(long long)a0;
- (void).cxx_destruct;
- (void)saveValue:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)protectedDataDidBecomeAvailable:(id)a0;
- (void)removeKey:(id)a0 value:(id)a1;
- (long long)numberOfEntriesOnDisk;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;
- (id)descriptionOfAllEntries;

@end
