@interface NUVideoRenderJob : NURenderJob

- (id)result;
- (id)generateVideoComposition:(out id *)a0;
- (char)prepare:(out id *)a0;
- (char)requiresVideoComposition;
- (id)scalePolicy;
- (id)videoRenderRequest;
- (char)wantsCompleteStage;
- (char)wantsOutputGeometry;
- (char)wantsOutputVideo;
- (char)wantsRenderStage;

@end
