@protocol NUImageBuffer;

@interface NUVisionForegroundIsolationSegmentationJob : NUVisionBasedRenderJob

@property (readonly, nonatomic) id<NUImageBuffer> maskBuffer;

- (id)result;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (struct { long long x0; long long x1; })idealModelSize;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;

@end
