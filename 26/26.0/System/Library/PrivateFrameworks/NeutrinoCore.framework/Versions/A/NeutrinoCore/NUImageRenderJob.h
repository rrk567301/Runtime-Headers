@class NUStorageImageBuffer, NUPurgeableStoragePool, CIRenderTask, NUColorSpace, NUPurgeableImageAccessGuard, NUPixelFormat, NURegion;
@protocol NUPurgeableImage, NUMutablePurgeableImage;

@interface NUImageRenderJob : NURenderJob {
    NUPurgeableImageAccessGuard *_accessRegionGuard;
}

@property (retain, nonatomic) NUPixelFormat *pixelFormat;
@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (nonatomic) float contentHeadroom;
@property (readonly, nonatomic) NURegion *regionToRender;
@property (readonly, nonatomic) id<NUMutablePurgeableImage> targetImage;
@property (readonly, nonatomic) NURegion *renderedRegion;
@property (readonly, nonatomic) id<NUPurgeableImage> renderedImage;
@property (readonly, nonatomic) NUPurgeableStoragePool *storagePool;
@property (readonly, nonatomic) NUStorageImageBuffer *renderBuffer;
@property (retain, nonatomic) CIRenderTask *renderTask;

- (void)cleanUp;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)complete:(out id *)a0;
- (BOOL)render:(out id *)a0;
- (BOOL)prepare:(out id *)a0;
- (id)imageRequest;
- (id)_HDRPixelFormatForColorSpace:(id)a0;
- (void)abortComplete;
- (void)abortRender;
- (BOOL)copyStorage:(id)a0 fromRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 toImage:(id)a2 atPoint:(struct { long long x0; long long x1; })a3;
- (id)extentPolicy;
- (id)imageAccumulationNodeWithImageSize:(struct { long long x0; long long x1; })a0 tileSize:(struct { long long x0; long long x1; })a1 borderSize:(struct { long long x0; long long x1; })a2 format:(id)a3 colorSpace:(id)a4 headroom:(float)a5;
- (id)initWithImageRequest:(id)a0;
- (id)newRenderPipelineStateForEvaluationMode:(long long)a0;
- (id)prepareNodeWithPipelineState:(id)a0 error:(out id *)a1;
- (id)renderBufferOfSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (id)scalePolicy;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;

@end
