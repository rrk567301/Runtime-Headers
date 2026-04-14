@class NSMutableData;

@interface PETAggregateStateStorageInMemory : PETAggregateStateStorage {
    NSMutableData *_data;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (void)expand:(unsigned long long)a0 andRunWithLock:(id /* block */)a1;
- (void)saveCorruptState;
- (BOOL)resetLocked;

@end
