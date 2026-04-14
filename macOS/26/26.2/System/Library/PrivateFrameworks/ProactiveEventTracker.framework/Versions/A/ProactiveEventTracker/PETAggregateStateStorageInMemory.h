@class NSMutableData;

@interface PETAggregateStateStorageInMemory : PETAggregateStateStorage {
    NSMutableData *_data;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (void)expand:(unsigned long long)a0 andRunWithLock:(id /* block */)a1;
- (void)reset;
- (void).cxx_destruct;
- (void)saveCorruptState;
- (id)init;
- (BOOL)resetLocked;
- (void)dealloc;

@end
