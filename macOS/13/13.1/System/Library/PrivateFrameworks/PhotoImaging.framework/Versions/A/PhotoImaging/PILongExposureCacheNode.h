@interface PILongExposureCacheNode : NUCacheNode

- (id)_evaluateImageGeometry:(out id *)a0;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (BOOL)tryLoadPersistentURL:(id)a0 error:(out id *)a1;
- (id)evaluateRenderDependenciesWithRequest:(id)a0 error:(out id *)a1;
- (id)resolvedSourceNode:(out id *)a0;
- (id)persistentURL;
- (id)initWithAutoLoopCacheNode:(id)a0 urlKey:(id)a1;
- (id)autoLoopCacheNode;

@end
