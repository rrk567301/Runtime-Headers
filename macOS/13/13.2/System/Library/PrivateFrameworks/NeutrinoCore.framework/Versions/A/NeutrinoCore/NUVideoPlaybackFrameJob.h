@interface NUVideoPlaybackFrameJob : NURenderJob

- (id)result;
- (BOOL)complete:(out id *)a0;
- (BOOL)render:(out id *)a0;
- (id)initWithRequest:(id)a0;
- (BOOL)wantsCompleteStage;
- (id)renderer:(out id *)a0;
- (id)newRenderPipelineStateForEvaluationMode:(long long)a0;
- (BOOL)wantsPrepareNodeCached;
- (BOOL)wantsRenderNodeCached;
- (id)scalePolicy;
- (BOOL)wantsOutputVideoFrame;
- (id)initWithVideoFrameRequest:(id)a0;
- (id)frameRequest;
- (BOOL)shouldGenerateHDRMetadata;

@end
