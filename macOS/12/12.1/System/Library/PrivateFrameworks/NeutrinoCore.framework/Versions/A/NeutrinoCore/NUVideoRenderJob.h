@interface NUVideoRenderJob : NURenderJob

- (id)result;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsRenderStage;
- (BOOL)wantsCompleteStage;
- (BOOL)prepare:(out id *)a0;
- (BOOL)requiresVideoComposition;
- (id)scalePolicy;
- (BOOL)wantsOutputVideo;
- (id)generateVideoComposition:(out id *)a0;
- (id)videoRenderRequest;

@end
