@class NSURLCacheInternal;

@interface NSURLCache : NSObject {
    NSURLCacheInternal *_internal;
}

@property (class, retain) NSURLCache *sharedURLCache;

@property unsigned long long memoryCapacity;
@property unsigned long long diskCapacity;
@property (readonly) unsigned long long currentMemoryUsage;
@property (readonly) unsigned long long currentDiskUsage;

- (void)set_maxCacheableEntrySizeRatio:(double)a0;
- (void)_nscfBridgeURLCacheSetMemoryCapacity:(long long)a0;
- (long long)_nscfBridgeURLCacheCurrentDiskUsage;
- (id)_initWithExistingCFURLCache:(void *)a0;
- (void)removeAllCachedResponses;
- (void)_nscfBridgeURLCacheStoreCachedResponse:(struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFCachedURLResponse *x1; } *)a0 forRequest:(struct _CFURLRequest { } *)a1;
- (void)_updateVaryState:(id)a0 forURL:(id)a1;
- (void)_nscfBridgeURLCacheRemoveAllCachedResponses;
- (id)_diskCacheDefaultPath;
- (void)flushWithCompletion:(id /* block */)a0;
- (id)_cacheDirectory;
- (void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)a0;
- (long long)_nscfBridgeURLCacheDiskCapacity;
- (id)_initVaryHeaderEnabledWithPath:(id)a0;
- (void)_nscfBridgeURLCacheSetDiskCapacity:(long long)a0;
- (void)storeCachedResponse:(id)a0 forDataTask:(id)a1;
- (id)initWithMemoryCapacity:(unsigned long long)a0 diskCapacity:(unsigned long long)a1 diskPath:(id)a2;
- (id)cachedResponseForRequest:(id)a0;
- (double)_maxCacheableEntrySizeRatio;
- (BOOL)_isVaryHeaderSupportEnabled;
- (void)removeCachedResponsesSinceDate:(id)a0;
- (void)removeCachedResponseForDataTask:(id)a0;
- (id)initWithMemoryCapacity:(unsigned long long)a0 diskCapacity:(unsigned long long)a1 directoryURL:(id)a2;
- (id)init;
- (long long)_nscfBridgeURLCacheMemoryCapacity;
- (void *)_CFURLCache;
- (id)_varyStateForURL:(id)a0;
- (void)getCachedResponseForDataTask:(id)a0 completionHandler:(id /* block */)a1;
- (long long)_nscfBridgeURLCacheCurrentMemoryUsage;
- (void)removeCachedResponseForRequest:(id)a0;
- (void)storeCachedResponse:(id)a0 forRequest:(id)a1;
- (id)_initWithIdentifier:(id)a0 memoryCapacity:(long long)a1 diskCapacity:(long long)a2 private:(BOOL)a3;
- (void)dealloc;
- (struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFCachedURLResponse *x1; } *)_nscfBridgeURLCacheCopyResponseForRequest:(struct _CFURLRequest { } *)a0;

@end
