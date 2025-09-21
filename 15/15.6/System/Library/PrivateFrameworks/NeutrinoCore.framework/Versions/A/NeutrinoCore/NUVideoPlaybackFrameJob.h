@interface NUVideoPlaybackFrameJob : NURenderJob

- (id)result;
- (char)render:(out id *)a0;
- (id)initWithRequest:(id)a0;
- (id)frameRequest;
- (id)initWithVideoFrameRequest:(id)a0;
- (id)newRenderPipelineStateForEvaluationMode:(long long)a0;
- (id)renderer:(out id *)a0;
- (id)scalePolicy;
- (char)wantsCompleteStage;
- (char)wantsOutputVideoFrame;
- (char)wantsPrepareNodeCached;
- (char)wantsRenderNodeCached;

@end
