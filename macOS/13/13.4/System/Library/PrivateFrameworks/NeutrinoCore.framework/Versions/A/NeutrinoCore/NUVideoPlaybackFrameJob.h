@interface NUVideoPlaybackFrameJob : NURenderJob

- (id)result;
- (BOOL)complete:(out id *)a0;
- (BOOL)render:(out id *)a0;
- (id)initWithRequest:(id)a0;
- (id)frameRequest;
- (id)initWithVideoFrameRequest:(id)a0;
- (id)newRenderPipelineStateForEvaluationMode:(long long)a0;
- (id)renderer:(out id *)a0;
- (id)scalePolicy;
- (BOOL)shouldGenerateHDRMetadata;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputVideoFrame;
- (BOOL)wantsPrepareNodeCached;
- (BOOL)wantsRenderNodeCached;

@end
