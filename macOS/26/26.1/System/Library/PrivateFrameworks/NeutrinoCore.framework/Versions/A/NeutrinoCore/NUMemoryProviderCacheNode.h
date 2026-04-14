@interface NUMemoryProviderCacheNode : NUMemoryCacheNode

- (id)colorSpace;
- (id)pixelFormat;
- (id)_evaluateImage:(out id *)a0;
- (BOOL)wantsDependentJob;

@end
