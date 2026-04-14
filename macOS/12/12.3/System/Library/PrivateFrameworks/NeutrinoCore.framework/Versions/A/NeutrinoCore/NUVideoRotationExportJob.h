@interface NUVideoRotationExportJob : NUExportJob

- (BOOL)render:(out id *)a0;
- (BOOL)prepare:(out id *)a0;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsRenderStage;
- (BOOL)requiresVideoComposition;
- (BOOL)wantsOutputImage;
- (BOOL)wantsPrepareNodeCached;
- (BOOL)wantsRenderNodeCached;
- (BOOL)wantsRenderScaleClampedToNativeScale;
- (id)scalePolicy;
- (id)initWithExportRequest:(id)a0;
- (BOOL)wantsOutputVideo;
- (id)videoRotationExportRequest;
- (id)initWithVideoRotationExportRequest:(id)a0;
- (BOOL)wantsOutputVideoFrame;

@end
