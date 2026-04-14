@class NSMutableData;

@interface PETAggregateStateStorageInMemory : PETAggregateStateStorage {
    NSMutableData *_data;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (BOOL)resetLocked;
- (void)saveCorruptState;
- (void)dealloc;
- (void)reset;
- (void).cxx_destruct;
- (void)expand:(unsigned long long)a0 andRunWithLock:(id /* block */)a1;
- (id)init;

@end
