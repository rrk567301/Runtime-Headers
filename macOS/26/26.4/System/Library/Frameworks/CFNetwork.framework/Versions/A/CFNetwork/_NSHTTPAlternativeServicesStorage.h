@class NSURL, _NSHTTPAlternativeServicesStorageSqlite;

@interface _NSHTTPAlternativeServicesStorage : NSObject {
    BOOL _inMemory;
    _NSHTTPAlternativeServicesStorageSqlite *_oldStorage;
}

@property (readonly, nonatomic) NSURL *path;
@property BOOL canSuspendLocked;
@property (readonly) id underlyingStorage;

+ (id)sharedPersistentStore;

- (void)removeHTTPAlternativeServiceEntriesWithHost:(id)a0 partition:(id)a1 port:(long long)a2 serviceType:(long long)a3;
- (void)removeHTTPAlternativeServiceEntriesWithRegistrableDomain:(id)a0;
- (id)HTTPServiceEntriesWithFilter:(id)a0;
- (id)initPersistentStoreWithURL:(id)a0;
- (void)storeHTTPServiceEntry:(id)a0;
- (id)initInMemoryStore;
- (void).cxx_destruct;
- (void)removeHTTPAlternativeServiceEntriesWithHost:(id)a0 port:(long long)a1;
- (void)removeHTTPAlternativeServiceEntriesCreatedAfterDate:(id)a0;
- (id)entries;

@end
