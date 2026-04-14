@interface NUProviderCacheNode : NUIntermediateCacheNode

- (id)colorSpace;
- (id)pixelFormat;
- (id)_evaluateImage:(out id *)a0;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (BOOL)useTiledProviderCache;

@end
