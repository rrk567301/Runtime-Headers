@interface PNParallaxSpatialPhotoProducer : NSObject <PFParallaxSpatialPhotoProducer>

@property (nonatomic, readonly) double zoomInPercentage;
@property (nonatomic) BOOL allowBackgroundDownload;

+ (void)enableInMemoryCache;
+ (void)prewarmGeneration;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEligibleForSpatialGenerationWithPixelSize:(struct CGSize { double x0; double x1; })a0;
- (id)createSpatialPhotoSceneAnalyzer;
- (void)enableBackgroundDownload;
- (double)focalLengthPxForFocalLengthIn35mm:(double)a0 pixelSize:(struct CGSize { double x0; double x1; })a1;
- (id)generateSpatialPhotoSceneForPixelBuffer:(struct __CVBuffer { } *)a0 cacheKey:(id)a1 focalLengthPx:(double)a2 portraitNormalizedTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 landscapeNormalizedTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 isInteractive:(BOOL)a5 progressHandler:(id /* block */)a6 isCanceledHandler:(id /* block */)a7 error:(id *)a8;
- (id)_spatialPhotoSceneFor:(struct __CVBuffer { } *)a0 cacheKey:(id)a1 focalLengthPx:(double)a2 portraitNormalizedTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 landscapeNormalizedTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 isInteractive:(BOOL)a5 error:(id *)a6 progressHandler:(id /* block */)a7 isCanceledHandler:(id /* block */)a8;

@end
