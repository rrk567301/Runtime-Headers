@interface AppRemoteAssets.NormalizedURLCache : NSURLCache {
    void /* unknown type, empty encoding */ ignoredQueryParameters;
}

- (void)storeCachedResponse:(id)a0 forRequest:(id)a1;
- (void).cxx_destruct;
- (id)initWithMemoryCapacity:(long long)a0 diskCapacity:(long long)a1 directoryURL:(id)a2;
- (id)cachedResponseForRequest:(id)a0;
- (void)removeCachedResponseForRequest:(id)a0;
- (id)init;
- (id)initWithMemoryCapacity:(long long)a0 diskCapacity:(long long)a1 diskPath:(id)a2;

@end
