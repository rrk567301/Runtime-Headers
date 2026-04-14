@interface PIInpaintSubsampleCacheNode : PIInpaintCacheNode

- (long long)padding;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (long long)subsampleFactorForScale:(struct { long long x0; long long x1; })a0;
- (void)resolveWithInputImage:(id)a0 inpaintOperations:(id)a1 detectedFaces:(id)a2 cacheKey:(id)a3;
- (id)_modifyEvaluatedGeometry:(id)a0;
- (BOOL)_updateInputRegion:(id)a0 outputRegion:(id)a1 forOperation:(id)a2 geometry:(id)a3 error:(out id *)a4;
- (id)retouchInputNode;

@end
