@class NSSet, IOSurfaceMemoryPool, NSObject;
@protocol OS_dispatch_queue;

@interface BWMemoryPool : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    IOSurfaceMemoryPool *_pool;
    unsigned long long _poolId;
    unsigned int _flushAssertionCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _flushAssertionLock;
    NSSet *_clientDenyList;
}

@property (class, readonly, nonatomic) BWMemoryPool *sharedMemoryPool;

@property (readonly, nonatomic) unsigned long long poolIdentifier;

+ (void)initialize;

- (void)dealloc;
- (void)disableWithCompletionHandler:(id /* block */)a0;
- (void)_removeFlushAssertion;
- (id)newMTLBufferWithLength:(unsigned long long)a0 forDevice:(id)a1;
- (id)init;
- (void)releaseModelManagerAssertion;
- (void)flush;
- (void)enableForPixelBufferAttributes:(id)a0;
- (id)newFlushAssertion:(id)a0;
- (int)disableForCaptureDevice:(id)a0;
- (int)enableForCaptureDevice:(id)a0;
- (BOOL)getInUseFootprint:(unsigned long long *)a0 andOutOfUseFootprint:(unsigned long long *)a1;
- (void)ensureMemoryAsyncWithSize:(unsigned long long)a0 withMaximizeSystemMemory:(BOOL)a1 useOptimizedMemorySizeDistributionsIfAvailable:(BOOL)a2 forClientBundleId:(id)a3;
- (int)enableForCaptureStream:(id)a0;
- (void)_addFlushAssertion;
- (void)disableForClientBundleId:(id)a0;
- (int)disableForCaptureStream:(id)a0;

@end
