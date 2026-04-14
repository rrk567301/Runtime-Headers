@class NSMutableDictionary;

@interface KGGraphUniverse : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *graphManagerByURL;

+ (void)initialize;
+ (id)instance;
+ (void)closeDatabaseAtURL:(id)a0 completion:(id /* block */)a1;
+ (BOOL)hasManagerForGraphStoreAtURL:(id)a0;
+ (id)managerForGraphStoreAtURL:(id)a0 entityFactory:(id)a1;
+ (void)releaseManagerForGraphStoreAtURL:(id)a0;
+ (BOOL)swapDatabaseFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)init;
- (void)closeDatabaseAtURL:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasManagerForGraphStoreAtURL:(id)a0;
- (id)managerForGraphStoreAtURL:(id)a0 entityFactory:(id)a1;
- (void)releaseManagerForGraphStoreAtURL:(id)a0;
- (void)removeDatabaseByURL:(id)a0;
- (BOOL)swapDatabaseFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;

@end
