@class NSArray, _TtC8MapsSync13MapsSyncStore, _TtC8MapsSync19MapsSyncStoreConfig, NSError;

@interface MapsSync.MapsSyncStore : NSObject {
    void /* unknown type, empty encoding */ containerInstanceLock;
    void /* unknown type, empty encoding */ inDevelopmentStorage;
}

@property (class, nonatomic, readonly) _TtC8MapsSync13MapsSyncStore *sharedStore;

@property (nonatomic, readonly) BOOL shouldDeleteDuplicates;
@property (nonatomic, retain) _TtC8MapsSync19MapsSyncStoreConfig *config;

+ (void)withAPIv1StoreWithBlock:(id /* block */)a0;
+ (void)withDefaultStoreWithBlock:(id /* block */)a0;
+ (id)withStoreWithConfig:(id)a0;

- (void)unsubscribe:(id)a0;
- (void)subscribe:(id)a0;
- (id)init;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (void)resetContainer;
- (void)deleteWithObjects:(NSArray *)a0 completionHandler:(void (^)(NSError *))a1;
- (BOOL)deleteWithObjects:(id)a0 error:(id *)a1;
- (void)saveWithObjects:(NSArray *)a0 completionHandler:(void (^)(NSError *))a1;
- (BOOL)saveWithObjects:(id)a0 error:(id *)a1;
- (void)withManagedObjects:(id)a0 block:(id /* block */)a1;

@end
