@class NSCache, PTCinematographyScript;

@interface PIPortraitVideoDebugDetectionsRenderNode : NURenderNode

@property (retain, nonatomic) PTCinematographyScript *cinematographyScript;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } renderTime;
@property (retain, nonatomic) NSCache *labelImageCache;

- (void).cxx_destruct;
- (id)_evaluateImage:(out id *)a0;
- (char)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (char)shouldCacheNodeForPipelineState:(id)a0;
- (id)_imageByAddingDetection:(id)a0 toImage:(id)a1 isPrimary:(char)a2 canvasSize:(struct CGSize { double x0; double x1; })a3 inverseOrientation:(long long)a4;
- (id)initWithInput:(id)a0 assetURL:(id)a1 cinematographyState:(id)a2 monochrome:(char)a3;

@end
