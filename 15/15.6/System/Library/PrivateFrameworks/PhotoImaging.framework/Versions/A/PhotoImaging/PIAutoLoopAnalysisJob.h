@class AVAsset, NSDictionary;

@interface PIAutoLoopAnalysisJob : NURenderJob

@property (retain, nonatomic) AVAsset *videoSource;
@property (retain, nonatomic) NSDictionary *recipe;

- (void).cxx_destruct;
- (id)result;
- (char)render:(out id *)a0;
- (id)cacheKey;
- (char)prepare:(out id *)a0;
- (id)scalePolicy;
- (char)wantsCompleteStage;
- (char)wantsOutputGeometry;
- (char)wantsOutputVideo;
- (id)analysisRequest;

@end
