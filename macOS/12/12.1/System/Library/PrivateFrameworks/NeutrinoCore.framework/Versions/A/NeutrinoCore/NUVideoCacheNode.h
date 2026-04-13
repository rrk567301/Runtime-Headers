@interface NUVideoCacheNode : NUCacheNode

- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (BOOL)tryLoadPersistentURL:(id)a0 error:(out id *)a1;
- (id)persistentURL;
- (id)newRenderRequestWithOriginalRequest:(id)a0 error:(out id *)a1;
- (id)outputSettings:(out id *)a0;

@end
