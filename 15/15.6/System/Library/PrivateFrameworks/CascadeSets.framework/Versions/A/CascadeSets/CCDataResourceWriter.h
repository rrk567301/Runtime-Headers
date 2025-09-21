@class CCDataResource, NSObject;
@protocol OS_dispatch_queue, BMAccessAssertion;

@interface CCDataResourceWriter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<BMAccessAssertion> _accessAssertion;
}

@property (readonly, nonatomic) CCDataResource *dataResource;

+ (char)incrementRowsModified:(unsigned long long)a0 database:(id)a1;
+ (int)defaultDataProtectionClass;

- (id)description;
- (void).cxx_destruct;
- (char)_removeResource:(id *)a0;
- (char)removeResource:(id *)a0;
- (char)clearTombstoneStatus:(id *)a0;
- (char)submitDatabaseTransactionUsingBlock:(id /* block */)a0;
- (char)tombstoneResource:(id *)a0;
- (char)performMaintenance:(id *)a0 shouldDefer:(id /* block */)a1;
- (char)_cleanupDatabaseIfRequired;
- (char)_clearTombstoneStatus:(id *)a0;
- (char)_createDatabaseWithLocalDeviceSite:(id)a0;
- (char)_didCompleteMaintenance:(id *)a0 shouldDefer:(id /* block */)a1;
- (char)_executeDatabaseTransactionUsingBlock:(id /* block */)a0;
- (id)_loadDatabase:(id *)a0;
- (id)_temporaryDirectoryURLWithError:(id *)a0;
- (char)_tombstoneResource:(id *)a0;
- (id)initWithDataResource:(id)a0 accessAssertion:(id)a1;
- (char)initializeDatabaseWithLocalDeviceSite:(id)a0;

@end
