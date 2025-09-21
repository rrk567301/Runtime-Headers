@class NSMutableArray;
@protocol MTLDevice;

@interface GTMTLReplaySharedResourcePool : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _cond;
    NSMutableArray *_pooledBuffers;
    unsigned long long _maxPooledBuffers;
    _Atomic unsigned long long _usedSize;
    unsigned long long _maxSize;
}

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) unsigned long long defaultBufferCapacity;

- (void)dealloc;
- (void).cxx_destruct;
- (id)newTextureWithDescriptor:(id)a0 error:(id *)a1;
- (id)initWithDevice:(id)a0 bufferCapacity:(unsigned long long)a1;
- (id)newBufferHeapWithLength:(unsigned long long)a0;
- (void)reclaimAllocatedSize:(unsigned long long)a0;
- (void)reclaimBuffer:(id)a0;
- (void)releasePooledBuffers;
- (void)setMaxPooledBuffers:(unsigned long long)a0;
- (void)waitUntilCapacity;

@end
