@class NSURL, _NSHTTPAlternativeServicesStorageSqlite;

@interface _NSHTTPAlternativeServicesStorage : NSObject {
    BOOL _inMemory;
    _NSHTTPAlternativeServicesStorageSqlite *_oldStorage;
}

@property (readonly, nonatomic) NSURL *path;
@property BOOL canSuspendLocked;
@property (readonly) id underlyingStorage;

+ (id)sharedPersistentStore;

- (void)removeHTTPAlternativeServiceEntriesCreatedAfterDate:(id)a0;
- (void)removeHTTPAlternativeServiceEntriesWithHost:(id)a0 port:(long long)a1;
- (void)storeHTTPServiceEntry:(id)a0;
- (id)HTTPServiceEntriesWithFilter:(id)a0;
- (void).cxx_destruct;
- (void)removeHTTPAlternativeServiceEntriesWithRegistrableDomain:(id)a0;
- (void)removeHTTPAlternativeServiceEntriesWithHost:(id)a0 partition:(id)a1 port:(long long)a2 serviceType:(long long)a3;
- (id)initInMemoryStore;
- (id)initPersistentStoreWithURL:(id)a0;
- (id)entries;

@end
