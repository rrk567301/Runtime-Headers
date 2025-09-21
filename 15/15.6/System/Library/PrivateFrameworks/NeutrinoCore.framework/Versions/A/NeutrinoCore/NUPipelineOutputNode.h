@interface NUPipelineOutputNode : NURenderNode

@property (readonly, nonatomic) char renderTransparencyOpaque;

- (id)initWithInput:(id)a0;
- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateImageGeometry:(out id *)a0;
- (id)_evaluateImageGeometryWithZeroedOrigin:(char)a0 error:(out id *)a1;
- (id)_evaluateVideoProperties:(out id *)a0;
- (char)enforceEvenDimensions;
- (id)extentPolicy;
- (long long)imageGeometryRoundingPolicy;
- (id)initWithInput:(id)a0 settings:(id)a1;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (char)shouldCacheNodeForPipelineState:(id)a0;

@end
