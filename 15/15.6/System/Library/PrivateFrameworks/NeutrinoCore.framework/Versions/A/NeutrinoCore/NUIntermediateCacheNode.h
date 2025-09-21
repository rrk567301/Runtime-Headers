@interface NUIntermediateCacheNode : NUCacheNode

- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateVideo:(out id *)a0;
- (id)_evaluateVideoComposition:(out id *)a0;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (char)shouldCacheNodeForPipelineState:(id)a0;
- (char)wantsDependentJob;

@end
