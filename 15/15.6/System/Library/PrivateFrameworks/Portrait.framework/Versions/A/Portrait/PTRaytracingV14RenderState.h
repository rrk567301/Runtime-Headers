@class PTGlobalReduction, PTDisparityUpscale, NSString, PTQualitySettings;
@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;

@interface PTRaytracingV14RenderState : NSObject {
    int _quality;
    id<MTLBuffer> _disparityDiffGlobalMax;
    id<MTLTexture> _randomizedGauss;
    NSString *_description;
}

@property int rayCount;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingSDOF;
@property (retain, nonatomic) id<MTLBuffer> randomUChars;
@property (retain, nonatomic) id<MTLBuffer> aperturePointsXY;
@property (retain, nonatomic) id<MTLTexture> randomGaussNoise;
@property (retain, nonatomic) id<MTLTexture> focusEdgeMask;
@property (retain, nonatomic) id<MTLTexture> raytracedRGBRadius;
@property (retain, nonatomic) id<MTLTexture> raytracedRGBRadiusUpscaled;
@property (retain, nonatomic) id<MTLTexture> disparityEdges;
@property (retain, nonatomic) id<MTLTexture> disparityEdgesTemp;
@property (retain, nonatomic) PTDisparityUpscale *disparityUpscale;
@property (retain, nonatomic) PTGlobalReduction *globalReduction;
@property (retain, nonatomic) id<MTLBuffer> disparityDiffGlobalMinMax;
@property char doVisualization;
@property void /* unknown type, empty encoding */ colorSize;
@property float pyramidSamplingFraction;
@property float anamorphicFactor;
@property float raytracingRadiusLocal;
@property float edgeTolerance;
@property (retain, nonatomic) PTQualitySettings *qualitySettings;
@property (retain, nonatomic) id<MTLTexture> disparityDiff;

- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (unsigned long long)dependentFrames;
- (id)initWithMetalContext:(id)a0 util:(id)a1 quality:(int)a2 colorSize:(struct CGSize { double x0; double x1; })a3 disparitySize:(struct CGSize { double x0; double x1; })a4 debugRendering:(long long)a5 pyramidPixelFormat:(unsigned long long)a6 options:(id)a7 debugTextures:(id)a8;

@end
