@class NSURLCacheInternal;

@interface NSURLCache : NSObject {
    NSURLCacheInternal *_internal;
}

@property (class, retain) NSURLCache *sharedURLCache;

@property unsigned long long memoryCapacity;
@property unsigned long long diskCapacity;
@property (readonly) unsigned long long currentMemoryUsage;
@property (readonly) unsigned long long currentDiskUsage;

- (void)storeCachedResponse:(id)a0 forDataTask:(id)a1;
- (id)_initWithExistingCFURLCache:(void *)a0;
- (id)_diskCacheDefaultPath;
- (id)_varyStateForURL:(id)a0;
- (struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFCachedURLResponse *x1; } *)_nscfBridgeURLCacheCopyResponseForRequest:(struct _CFURLRequest { } *)a0;
- (void)_updateVaryState:(id)a0 forURL:(id)a1;
- (void)set_maxCacheableEntrySizeRatio:(double)a0;
- (void)_nscfBridgeURLCacheStoreCachedResponse:(struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFCachedURLResponse *x1; } *)a0 forRequest:(struct _CFURLRequest { } *)a1;
- (id)initWithMemoryCapacity:(unsigned long long)a0 diskCapacity:(unsigned long long)a1 directoryURL:(id)a2;
- (void)getCachedResponseForDataTask:(id)a0 completionHandler:(id /* block */)a1;
- (id)cachedResponseForRequest:(id)a0;
- (void)removeAllCachedResponses;
- (void)removeCachedResponsesSinceDate:(id)a0;
- (void)removeCachedResponseForDataTask:(id)a0;
- (void)_nscfBridgeURLCacheSetMemoryCapacity:(long long)a0;
- (long long)_nscfBridgeURLCacheDiskCapacity;
- (void)flushWithCompletion:(id /* block */)a0;
- (void)_nscfBridgeURLCacheRemoveAllCachedResponses;
- (void)dealloc;
- (BOOL)_isVaryHeaderSupportEnabled;
- (long long)_nscfBridgeURLCacheMemoryCapacity;
- (long long)_nscfBridgeURLCacheCurrentMemoryUsage;
- (void *)_CFURLCache;
- (id)_initWithIdentifier:(id)a0 memoryCapacity:(long long)a1 diskCapacity:(long long)a2 private:(BOOL)a3;
- (void)removeCachedResponseForRequest:(id)a0;
- (double)_maxCacheableEntrySizeRatio;
- (long long)_nscfBridgeURLCacheCurrentDiskUsage;
- (id)_initVaryHeaderEnabledWithPath:(id)a0;
- (id)_cacheDirectory;
- (void)storeCachedResponse:(id)a0 forRequest:(id)a1;
- (id)initWithMemoryCapacity:(unsigned long long)a0 diskCapacity:(unsigned long long)a1 diskPath:(id)a2;
- (id)init;
- (void)_nscfBridgeURLCacheSetDiskCapacity:(long long)a0;
- (void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)a0;

@end
