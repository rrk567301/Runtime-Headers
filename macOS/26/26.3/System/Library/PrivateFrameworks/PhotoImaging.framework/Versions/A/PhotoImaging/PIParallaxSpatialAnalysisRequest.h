@class PFPosterOrientedLayout, PFParallaxSpatialPhotoLayer;
@protocol PFParallaxSpatialPhotoSceneAnalyzer;

@interface PIParallaxSpatialAnalysisRequest : NURenderRequest

@property (retain, nonatomic) id<PFParallaxSpatialPhotoSceneAnalyzer> sceneAnalyzer;
@property (retain, nonatomic) PFPosterOrientedLayout *layout;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic) BOOL isInteractive;
@property (retain, nonatomic) PFParallaxSpatialPhotoLayer *spatialPhotoLayer;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)submit:(id /* block */)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
