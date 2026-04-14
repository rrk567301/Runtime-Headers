@class PTMetalContext, NSString, PTPyramid, PTRaytracingUtilsV2, PTGuidedFilter, NSDictionary, PTGlobalReduction, PTRaytracingInterpolateResultV2, PTQualitySettings, PTRenderDebugLayer;
@protocol MTLTexture, MTLBuffer, MTLComputePipelineState;

@interface PTRaytracingV2002 : NSObject <RenderingIntegration> {
    NSDictionary *_options;
    PTPyramid *_rgbaPyramid;
    PTRenderDebugLayer *_debugLayer;
    long long _debugRendering;
    PTMetalContext *_metalContext;
    BOOL _injectedRGBAPyramid;
    struct PTFocusEdge { float width; float gradientThreshold; float gradientWeight; float minMaxThreshold; } _focusEdge;
    PTQualitySettings *_qualitySettings;
    PTRaytracingUtilsV2 *_raytracingUtils;
    PTRaytracingInterpolateResultV2 *_raytracingInterpolateResult;
    PTGlobalReduction *_globalReduction;
    PTGuidedFilter *_guidedFilter;
    struct PTUnitDisk { id<MTLBuffer> xy; int rayCount; void /* unknown type, blank encoding */ radiusLocal; } _aperturePoints;
    id<MTLBuffer> _randomUChars;
    id<MTLBuffer> _disparityDiffGlobalMinMax;
    id<MTLTexture> _disparityEdges;
    id<MTLTexture> _disparityEdgesTemp;
    id<MTLTexture> _disparityDiff;
    id<MTLTexture> _disparityDiffUpscaled;
    id<MTLTexture> _focusEdgeMask;
    id<MTLTexture> _raytracedRGBWeight;
    id<MTLTexture> _raytracedRGBWeightUpscaled;
    id<MTLTexture> _guideRGBACoefficients;
    id<MTLTexture> _guideRGBAUpscale;
    BOOL _doVisualization;
    int _kRayCount;
    void /* unknown type, empty encoding */ _colorSize;
    float _kPyramidSamplingFraction;
    float _anamorphicFactor;
    float _edgeTolerance;
    float _foregroundBlurLimitingFactor;
    id<MTLComputePipelineState> _raytracingSDOF;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)prewarm;
- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0 colorSize:(struct CGSize { double x0; double x1; })a1 disparitySize:(struct CGSize { double x0; double x1; })a2 debugRendering:(long long)a3 verbose:(BOOL)a4 options:(id)a5 quality:(int)a6;
- (unsigned long long)minimumResourceHeapSize;
- (int)renderContinuousWithSource:(id)a0 renderRequest:(id)a1;
- (void)setResourceHeap:(id)a0;

@end
