@interface NUMuteAudioNode : NURenderNode

- (id)initWithInput:(id)a0;
- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateVideo:(out id *)a0;
- (char)requiresAudioMix;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (char)shouldCacheNodeForPipelineState:(id)a0;

@end
