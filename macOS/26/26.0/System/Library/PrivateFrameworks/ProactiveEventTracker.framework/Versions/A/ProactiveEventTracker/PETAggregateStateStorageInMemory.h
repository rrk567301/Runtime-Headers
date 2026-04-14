@class NSMutableData;

@interface PETAggregateStateStorageInMemory : PETAggregateStateStorage {
    NSMutableData *_data;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (void)reset;
- (void)dealloc;
- (id)init;
- (void)saveCorruptState;
- (BOOL)resetLocked;
- (void)expand:(unsigned long long)a0 andRunWithLock:(id /* block */)a1;
- (void).cxx_destruct;

@end
