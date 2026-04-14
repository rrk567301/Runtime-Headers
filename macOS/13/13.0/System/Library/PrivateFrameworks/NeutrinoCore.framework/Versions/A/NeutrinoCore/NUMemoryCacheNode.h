@protocol NUBufferImage;

@interface NUMemoryCacheNode : NUCacheNode

@property (readonly) id<NUBufferImage> cachedImage;

- (void).cxx_destruct;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (BOOL)tryLoadPersistentURL:(id)a0 error:(out id *)a1;
- (id)persistentURL;
- (id)newRenderRequestWithOriginalRequest:(id)a0 error:(out id *)a1;
- (void)resolveSourceWithResponse:(id)a0;

@end
