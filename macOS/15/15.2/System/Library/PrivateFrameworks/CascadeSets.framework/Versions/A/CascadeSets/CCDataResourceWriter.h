@class CCDataResource, NSObject;
@protocol OS_dispatch_queue, BMAccessAssertion;

@interface CCDataResourceWriter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<BMAccessAssertion> _accessAssertion;
}

@property (readonly, nonatomic) CCDataResource *dataResource;

+ (BOOL)incrementRowsModified:(unsigned long long)a0 database:(id)a1;
+ (int)defaultDataProtectionClass;
+ (BOOL)purgeTombstonedResources:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)_removeResource:(id *)a0;
- (BOOL)removeResource:(id *)a0;
- (BOOL)clearTombstoneStatus:(id *)a0;
- (BOOL)submitDatabaseTransactionUsingBlock:(id /* block */)a0;
- (BOOL)tombstoneResource:(id *)a0;
- (BOOL)performMaintenance:(id *)a0 shouldDefer:(id /* block */)a1;
- (BOOL)_cleanupDatabaseIfRequired;
- (BOOL)_clearTombstoneStatus:(id *)a0;
- (BOOL)_createDatabaseIfNotExistsWithLocalDeviceIdentifier:(id)a0;
- (BOOL)_didCompleteMaintenance:(id *)a0 shouldDefer:(id /* block */)a1;
- (BOOL)_executeDatabaseTransactionUsingBlock:(id /* block */)a0;
- (id)_loadDatabase:(id *)a0;
- (id)_temporaryDirectoryURLWithError:(id *)a0;
- (BOOL)_tombstoneResource:(id *)a0;
- (id)initWithDataResource:(id)a0 accessAssertion:(id)a1;
- (BOOL)initializeDatabaseWithLocalDeviceIdentifier:(id)a0 error:(id *)a1;

@end
