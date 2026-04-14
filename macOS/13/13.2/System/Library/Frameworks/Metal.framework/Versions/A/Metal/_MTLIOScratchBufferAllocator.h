@class NSString;
@protocol MTLDevice;

@interface _MTLIOScratchBufferAllocator : NSObject <MTLIOScratchBufferAllocator> {
    unsigned long long _currentSize;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _pool_lock;
    id<MTLDevice> _device;
    struct { struct MTLIOScratchBufferPrivate *tqh_first; struct MTLIOScratchBufferPrivate **tqh_last; } activeq;
    struct { struct MTLIOScratchBufferPrivate *tqh_first; struct MTLIOScratchBufferPrivate **tqh_last; } poolq;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDevice:(id)a0;
- (id)newScratchBufferWithMinimumSize:(unsigned long long)a0;
- (void)returnPriv:(struct MTLIOScratchBufferPrivate { struct { struct MTLIOScratchBufferPrivate *x0; struct MTLIOScratchBufferPrivate **x1; } x0; id x1; id x2; unsigned long long x3; BOOL x4; } *)a0;
- (void)returnActiveScratchBuffersToPool;

@end
