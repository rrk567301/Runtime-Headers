@class NURenderNode;

@interface NUAbstractScaleNode : NURenderNode

@property (readonly, nonatomic) NURenderNode *inputNode;

- (id)_scaleImage:(id)a0 by:(struct { long long x0; long long x1; })a1 sampleMode:(long long)a2 extent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a3 error:(out id *)a4;
- (id)initWithInput:(id)a0 settings:(id)a1;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;

@end
