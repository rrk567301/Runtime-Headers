@class NSString;

@interface PETAggregateStateStorageOnDisk : PETAggregateStateStorage {
    NSString *_path;
    int _fd;
    void *_bytes;
    unsigned long long _mappedLen;
    _Atomic BOOL _dead;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _localLock;
}

- (unsigned long long)_reserveCapacity:(unsigned int)a0;
- (void)expand:(unsigned long long)a0 andRunWithLock:(id /* block */)a1;
- (void)reset;
- (void).cxx_destruct;
- (void)_remapWithFlock:(BOOL)a0;
- (void)saveCorruptState;
- (void)_die;
- (id)initWithPath:(id)a0;
- (BOOL)resetLocked;
- (void)dealloc;

@end
