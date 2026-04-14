@class PTGlobalReduction, PTDisparityUpscale, NSString, PTQualitySettings;
@protocol MTLComputePipelineState, MTLBuffer;

@interface PTRaytracingV13RenderState : NSObject {
    int _quality;
    id<MTLBuffer> _disparityDiffGlobalMax;
    NSString *_description;
}

@property int rayCount;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingSDOF;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingVisualizeIntersection;
@property (retain, nonatomic) id<MTLBuffer> randomUChars;
@property (retain, nonatomic) id<MTLBuffer> aperturePointsXY;
@property (retain, nonatomic) PTDisparityUpscale *disparityUpscale;
@property (retain, nonatomic) PTGlobalReduction *globalReduction;
@property (retain, nonatomic) id<MTLBuffer> disparityDiffGlobalMinMax;
@property BOOL doVisualization;
@property (retain, nonatomic) PTQualitySettings *qualitySettings;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 quality:(int)a3 colorSize:(struct CGSize { double x0; double x1; })a4 disparitySize:(struct CGSize { double x0; double x1; })a5 pyramidPixelFormat:(unsigned long long)a6 config:(id)a7 debugTextures:(id)a8;

@end
