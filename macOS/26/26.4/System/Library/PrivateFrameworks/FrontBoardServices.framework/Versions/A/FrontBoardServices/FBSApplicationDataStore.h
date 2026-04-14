@class NSString, LSApplicationIdentity;
@protocol FBSApplicationDataStoreRepositoryClient;

@interface FBSApplicationDataStore : NSObject {
    id<FBSApplicationDataStoreRepositoryClient> _client;
    BOOL _clientNeedsCheckin;
}

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) LSApplicationIdentity *identity;
@property (readonly, nonatomic) NSString *applicationIdentifier;

+ (void)synchronizeWithCompletion:(id /* block */)a0;
+ (id)storeForApplication:(id)a0;
+ (void)synchronize;
+ (id)storeForApplicationIdentity:(id)a0;
+ (id)applicationIdentifiersWithAvailableStores;
+ (void)_setClassClient:(id)a0;
+ (BOOL)isServerProcess;
+ (id)applicationIdentitiesWithAvailableStores;
+ (void)setPrefetchedKeys:(id)a0;
+ (id)applicationsWithAvailableStores;
+ (id)applicationIdentifiersWithAvailableStoresForBundleID:(id)a0;
+ (void)_doWithClassClient:(id /* block */)a0;
+ (id)storeForApplicationIdentifier:(id)a0;

- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (BOOL)migrateWithError:(out id *)a0;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (id)description;
- (void)dealloc;
- (BOOL)needsMigration;
- (id)deserializeObjectForKey:(id)a0 ofType:(Class)a1;
- (id)_initWithBundleId:(id)a0 identity:(id)a1 client:(id)a2;
- (id)archivedObjectForKey:(id)a0;
- (void)archivedObjectForKey:(id)a0 withResult:(id /* block */)a1;
- (void)deserializeObjectForKey:(id)a0 ofType:(Class)a1 withResult:(id /* block */)a2;
- (BOOL)migrateToIdentity:(id)a0 error:(out id *)a1;
- (void)objectForKey:(id)a0 withResult:(id /* block */)a1;
- (id)safeArchivedObjectForKey:(id)a0 ofType:(Class)a1;
- (void)safeArchivedObjectForKey:(id)a0 ofType:(Class)a1 withResult:(id /* block */)a2;
- (id)safeObjectForKey:(id)a0 ofType:(Class)a1;
- (void)safeObjectForKey:(id)a0 ofType:(Class)a1 withResult:(id /* block */)a2;
- (void)serializeObject:(id)a0 forKey:(id)a1;
- (void)setArchivedObject:(id)a0 forKey:(id)a1;

@end
