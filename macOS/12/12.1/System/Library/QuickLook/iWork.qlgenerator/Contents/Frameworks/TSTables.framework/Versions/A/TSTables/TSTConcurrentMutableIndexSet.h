@class NSMutableIndexSet;

@interface TSTConcurrentMutableIndexSet : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } mRWLock;
    NSMutableIndexSet *mMutableIndexSet;
}

- (void)dealloc;
- (id)init;
- (void)addIndex:(unsigned long long)a0;
- (void)enumerateIndexesUsingBlock:(id /* block */)a0;
- (void)removeAllIndexes;

@end
