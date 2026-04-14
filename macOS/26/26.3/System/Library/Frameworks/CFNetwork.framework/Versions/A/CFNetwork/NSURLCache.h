@class NSURLCacheInternal;

@interface NSURLCache : NSObject {
    NSURLCacheInternal *_internal;
}

@property (class, retain) NSURLCache *sharedURLCache;

@property unsigned long long memoryCapacity;
@property unsigned long long diskCapacity;
@property (readonly) unsigned long long currentMemoryUsage;
@property (readonly) unsigned long long currentDiskUsage;

- (long long)_nscfBridgeURLCacheCurrentMemoryUsage;
- (void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)a0;
- (struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFCachedURLResponse *x1; } *)_nscfBridgeURLCacheCopyResponseForRequest:(struct _CFURLRequest { } *)a0;
- (void)getCachedResponseForDataTask:(id)a0 completionHandler:(id /* block */)a1;
- (id)_initWithIdentifier:(id)a0 memoryCapacity:(long long)a1 diskCapacity:(long long)a2 private:(BOOL)a3;
- (id)init;
- (id)cachedResponseForRequest:(id)a0;
- (void)_nscfBridgeURLCacheSetDiskCapacity:(long long)a0;
- (double)_maxCacheableEntrySizeRatio;
- (id)_varyStateForURL:(id)a0;
- (void)_updateVaryState:(id)a0 forURL:(id)a1;
- (void)_nscfBridgeURLCacheSetMemoryCapacity:(long long)a0;
- (void)flushWithCompletion:(id /* block */)a0;
- (id)initWithMemoryCapacity:(unsigned long long)a0 diskCapacity:(unsigned long long)a1 directoryURL:(id)a2;
- (void)removeCachedResponseForRequest:(id)a0;
- (void)removeCachedResponseForDataTask:(id)a0;
- (void)set_maxCacheableEntrySizeRatio:(double)a0;
- (id)_diskCacheDefaultPath;
- (void *)_CFURLCache;
- (void)dealloc;
- (id)_initWithExistingCFURLCache:(void *)a0;
- (void)removeCachedResponsesSinceDate:(id)a0;
- (long long)_nscfBridgeURLCacheMemoryCapacity;
- (void)_nscfBridgeURLCacheRemoveAllCachedResponses;
- (long long)_nscfBridgeURLCacheDiskCapacity;
- (BOOL)_isVaryHeaderSupportEnabled;
- (id)_initVaryHeaderEnabledWithPath:(id)a0;
- (void)removeAllCachedResponses;
- (long long)_nscfBridgeURLCacheCurrentDiskUsage;
- (void)storeCachedResponse:(id)a0 forRequest:(id)a1;
- (void)storeCachedResponse:(id)a0 forDataTask:(id)a1;
- (id)_cacheDirectory;
- (id)initWithMemoryCapacity:(unsigned long long)a0 diskCapacity:(unsigned long long)a1 diskPath:(id)a2;
- (void)_nscfBridgeURLCacheStoreCachedResponse:(struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFCachedURLResponse *x1; } *)a0 forRequest:(struct _CFURLRequest { } *)a1;

@end
