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

- (void)disableForClientBundleId:(id)a0;
- (int)disableForCaptureDevice:(id)a0;
- (int)enableForCaptureDevice:(id)a0;
- (void)flush;
- (int)enableForCaptureStream:(id)a0;
- (void)releaseModelManagerAssertion;
- (id)newMTLBufferWithLength:(unsigned long long)a0 forDevice:(id)a1;
- (id)newFlushAssertion:(id)a0;
- (int)disableForCaptureStream:(id)a0;
- (void)enableForPixelBufferAttributes:(id)a0;
- (void)ensureMemoryAsyncWithSize:(unsigned long long)a0 withMaximizeSystemMemory:(BOOL)a1 useOptimizedMemorySizeDistributionsIfAvailable:(BOOL)a2 forClientBundleId:(id)a3;
- (void)dealloc;
- (BOOL)getInUseFootprint:(unsigned long long *)a0 andOutOfUseFootprint:(unsigned long long *)a1;
- (void)_removeFlushAssertion;
- (void)_addFlushAssertion;
- (void)disableWithCompletionHandler:(id /* block */)a0;
- (id)init;

@end
