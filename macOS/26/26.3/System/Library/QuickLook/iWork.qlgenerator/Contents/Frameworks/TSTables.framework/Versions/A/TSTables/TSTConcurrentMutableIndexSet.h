@class NSMutableIndexSet;

@interface TSTConcurrentMutableIndexSet : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (readonly, nonatomic) NSMutableIndexSet *mutableIndexSet;

- (void)addIndex:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateIndexesUsingBlock:(id /* block */)a0;
- (void)removeAllIndexes;
- (BOOL)containsIndex:(unsigned long long)a0;

@end
