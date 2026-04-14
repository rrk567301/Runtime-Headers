@class NSURL, _NSHTTPAlternativeServicesStorageSqlite;

@interface _NSHTTPAlternativeServicesStorage : NSObject {
    BOOL _inMemory;
    _NSHTTPAlternativeServicesStorageSqlite *_oldStorage;
}

@property (readonly, nonatomic) NSURL *path;
@property BOOL canSuspendLocked;
@property (readonly) id underlyingStorage;

+ (id)sharedPersistentStore;

- (id)entries;
- (id)initInMemoryStore;
- (void)storeHTTPServiceEntry:(id)a0;
- (void)removeHTTPAlternativeServiceEntriesCreatedAfterDate:(id)a0;
- (id)HTTPServiceEntriesWithFilter:(id)a0;
- (void)removeHTTPAlternativeServiceEntriesWithRegistrableDomain:(id)a0;
- (void)removeHTTPAlternativeServiceEntriesWithHost:(id)a0 partition:(id)a1 port:(long long)a2 serviceType:(long long)a3;
- (void)removeHTTPAlternativeServiceEntriesWithHost:(id)a0 port:(long long)a1;
- (id)initPersistentStoreWithURL:(id)a0;
- (void).cxx_destruct;

@end
