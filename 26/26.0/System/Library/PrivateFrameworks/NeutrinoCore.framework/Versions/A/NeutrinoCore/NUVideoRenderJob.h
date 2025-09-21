@interface NUVideoRenderJob : NURenderJob

- (id)result;
- (BOOL)prepare:(out id *)a0;
- (id)generateVideoComposition:(out id *)a0;
- (BOOL)requiresVideoComposition;
- (id)scalePolicy;
- (id)videoRenderRequest;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputVideo;
- (BOOL)wantsRenderStage;

@end
