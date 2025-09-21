@class NSString;

@interface PETAggregateStateStorageOnDisk : PETAggregateStateStorage {
    NSString *_path;
    int _fd;
    void *_bytes;
    unsigned long long _mappedLen;
    _Atomic BOOL _dead;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _localLock;
}

- (id)initWithPath:(id)a0;
- (void)_remapWithFlock:(BOOL)a0;
- (void)reset;
- (void)dealloc;
- (void)saveCorruptState;
- (void)_die;
- (unsigned long long)_reserveCapacity:(unsigned int)a0;
- (BOOL)resetLocked;
- (void)expand:(unsigned long long)a0 andRunWithLock:(id /* block */)a1;
- (void).cxx_destruct;

@end
