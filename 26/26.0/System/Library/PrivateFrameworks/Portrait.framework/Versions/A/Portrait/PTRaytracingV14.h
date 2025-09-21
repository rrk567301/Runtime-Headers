@class PTUtil, NSString, PTPyramid, PTMetalContext, PTRaytracingUtilsV1, PTRaytracingV14RenderState, NSDictionary, PTColorConversion, PTRenderDebugLayer;

@interface PTRaytracingV14 : NSObject <RenderingIntegration> {
    PTRaytracingV14RenderState *_renderState;
    NSDictionary *_options;
    PTColorConversion *_colorConversion;
    PTPyramid *_rgbaPyramid;
    PTRenderDebugLayer *_debugLayer;
    long long _debugRendering;
    PTRaytracingUtilsV1 *_raytracingUtils;
    PTUtil *_util;
    struct CGSize { double width; double height; } _disparitySize;
    PTMetalContext *_metalContext;
    BOOL _injectedRGBAPyramid;
    BOOL _bicubicUpscale;
    struct PTFocusEdge { float width; float gradientThreshold; float gradientWeight; float minMaxThreshold; } _focusEdge;
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
