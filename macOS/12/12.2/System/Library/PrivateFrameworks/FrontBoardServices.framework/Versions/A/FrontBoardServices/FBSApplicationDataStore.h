@class NSString;
@protocol FBSApplicationDataStoreRepositoryClient;

@interface FBSApplicationDataStore : NSObject {
    id<FBSApplicationDataStoreRepositoryClient> _client;
    BOOL _clientNeedsCheckin;
}

@property (readonly, nonatomic) NSString *bundleID;

+ (void)synchronize;
+ (BOOL)isServerProcess;
+ (void)setPrefetchedKeys:(id)a0;
+ (void)synchronizeWithCompletion:(id /* block */)a0;
+ (void)_doWithClassClient:(id /* block */)a0;
+ (id)storeForApplication:(id)a0;
+ (id)applicationsWithAvailableStores;
+ (void)_setClassClient:(id)a0;

- (void)dealloc;
- (id)init;
- (void)removeAllObjects;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (id)_initWithBundleId:(id)a0 client:(id)a1;
- (id)_makeSafe:(id)a0 forType:(Class)a1;
- (void)objectForKey:(id)a0 withResult:(id /* block */)a1;
- (id)safeObjectForKey:(id)a0 ofType:(Class)a1;
- (void)safeObjectForKey:(id)a0 ofType:(Class)a1 withResult:(id /* block */)a2;
- (id)archivedObjectForKey:(id)a0;
- (void)archivedObjectForKey:(id)a0 withResult:(id /* block */)a1;
- (id)safeArchivedObjectForKey:(id)a0 ofType:(Class)a1;
- (void)safeArchivedObjectForKey:(id)a0 ofType:(Class)a1 withResult:(id /* block */)a2;
- (void)setArchivedObject:(id)a0 forKey:(id)a1;

@end
