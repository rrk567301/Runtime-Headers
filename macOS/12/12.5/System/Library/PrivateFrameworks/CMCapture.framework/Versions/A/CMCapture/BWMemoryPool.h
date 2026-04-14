@class NSObject;
@protocol OS_dispatch_queue;

@interface BWMemoryPool : NSObject {
    unsigned long long _defaultCacheBufferSize;
    unsigned long long _writeCombineCacheBufferSize;
    NSObject<OS_dispatch_queue> *_queue;
    struct __IOSurface { } *_writeCombineCacheBuffer;
    struct __IOSurface { } *_defaultCacheBuffer;
}

+ (void)initialize;

- (void)dealloc;
- (int)addMemoryPoolToPropertiesForCaptureStream:(id)a0;
- (int)addMemoryPoolToPropertiesForCaptureDevice:(id)a0;
- (int)removeMemoryPoolFromPropertiesForCaptureDevice:(id)a0;
- (void)_discardMemory;
- (void)_ensureMemoryPool;
- (id)initWithDefaultCacheMemoryPoolSize:(long long)a0 writeCombineCacheMemoryPoolSize:(long long)a1;
- (void)ensureMemoryAsync;
- (void)ensureMemorySync;
- (void)discardMemory;
- (void)discardMemoryWithCompletionHandler:(id /* block */)a0;
- (void)addMemoryPoolToPixelBufferAttributes:(id)a0;
- (id)newMTLBufferWithLength:(unsigned long long)a0 forDevice:(id)a1;

@end
