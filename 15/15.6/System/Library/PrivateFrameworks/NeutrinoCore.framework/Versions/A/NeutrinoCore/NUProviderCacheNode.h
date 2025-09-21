@interface NUProviderCacheNode : NUIntermediateCacheNode

- (id)pixelFormat;
- (id)colorSpace;
- (id)_evaluateImage:(out id *)a0;
- (char)shouldCacheNodeForPipelineState:(id)a0;
- (char)useTiledProviderCache;

@end
