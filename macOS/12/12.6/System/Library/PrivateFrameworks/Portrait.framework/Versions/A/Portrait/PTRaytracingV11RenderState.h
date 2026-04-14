@class PTRaytracingUtils, PTDisparityUpscale, NSString;
@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;

@interface PTRaytracingV11RenderState : NSObject {
    int _quality;
    NSString *_description;
}

@property int rayCount;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingSDOF;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingVisualizeIntersection;
@property (retain, nonatomic) id<MTLBuffer> aperturePointsXY;
@property (retain, nonatomic) id<MTLTexture> raytracedYUVRadius;
@property (retain, nonatomic) id<MTLTexture> inputLumaPyramid;
@property (retain, nonatomic) id<MTLTexture> inputChromaPyramid;
@property (retain, nonatomic) PTDisparityUpscale *disparityUpscale;
@property (retain, nonatomic) PTRaytracingUtils *raytracingUtils;
@property BOOL isAbovePreviewQuality;
@property BOOL doRayMarching;
@property BOOL doDisparityUpsampling;
@property BOOL doVisualization;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 quality:(int)a3 colorSize:(struct CGSize { double x0; double x1; })a4 disparitySize:(struct CGSize { double x0; double x1; })a5 pyramidPixelFormat:(unsigned long long)a6 config:(id)a7;

@end
