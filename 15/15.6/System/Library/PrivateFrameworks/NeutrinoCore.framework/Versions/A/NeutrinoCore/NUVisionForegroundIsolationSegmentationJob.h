@protocol NUImageBuffer;

@interface NUVisionForegroundIsolationSegmentationJob : NUVisionBasedRenderJob

@property (readonly, nonatomic) id<NUImageBuffer> maskBuffer;

- (void).cxx_destruct;
- (id)result;
- (char)render:(out id *)a0;
- (struct { long long x0; long long x1; })idealModelSize;
- (id)scalePolicy;
- (char)wantsCompleteStage;
- (char)wantsOutputGeometry;
- (char)wantsOutputImage;

@end
