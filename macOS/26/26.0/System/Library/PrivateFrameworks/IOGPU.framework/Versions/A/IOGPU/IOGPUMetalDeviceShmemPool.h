@class IOGPUMetalDeviceShmem, IOGPUMetalDevice;

@interface IOGPUMetalDeviceShmemPool : NSObject {
    struct _IOGPUMetalDeviceShmemPoolPrivate { struct shmemPoolQueue { IOGPUMetalDeviceShmem *tqh_first; id *tqh_last; } queue; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; int count; Class shmemClass; IOGPUMetalDevice *device; unsigned int shmemSize; int shmemType; } _priv;
    unsigned long long _allocatedSize;
}

- (void)purge;
- (void)dealloc;
- (unsigned long long)allocatedSize;
- (id)initWithDevice:(id)a0 resourceClass:(Class)a1 shmemSize:(unsigned int)a2 shmemType:(int)a3 options:(id)a4;
- (void)prune;
- (int)availableCount;
- (unsigned int)shmemSize;
- (void)setShmemSize:(unsigned int)a0;

@end
