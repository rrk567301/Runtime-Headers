@class PFPosterOrientedLayout, PIParallaxSpatialAnalysisRequest;

@interface _PIParallaxSpatialAnalysisJob : NURenderJob

@property (readonly, nonatomic) PIParallaxSpatialAnalysisRequest *spatialAnalysisRequest;
@property (readonly, nonatomic) PFPosterOrientedLayout *requestLayout;

- (id)initWithRequest:(id)a0;
- (id)result;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsRenderStage;

@end
