@interface MapsSync.MapsSyncStore : NSObject {
    void /* unknown type, empty encoding */ _primaryContainer;
    void /* unknown type, empty encoding */ _cacheContainer;
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _isLoaded;
    void /* unknown type, empty encoding */ _isLoading;
    void /* unknown type, empty encoding */ _loadError;
    void /* unknown type, empty encoding */ _loadHandlers;
    void /* unknown type, empty encoding */ _loadLock;
}

@property (nonatomic, readonly) BOOL isLoaded;

+ (void)withStoreFor:(id)a0 block:(id /* block */)a1;
+ (id)withStoreFor:(id)a0 error:(id *)a1;
+ (void)withAPIv1StoreWithBlock:(id /* block */)a0;
+ (id)withAPIv1StoreAndReturnError:(id *)a0;
+ (void)withDefaultStoreWithBlock:(id /* block */)a0;

- (void)load;
- (id)init;
- (void).cxx_destruct;
- (BOOL)saveWithObjects:(id)a0 error:(id *)a1;
- (BOOL)deleteWithObjects:(id)a0 error:(id *)a1;
- (void)withManagedObjects:(id)a0 block:(id /* block */)a1;
- (void)notifyOnLoadWithHandler:(id /* block */)a0;
- (void)callLoadHandlers;

@end
