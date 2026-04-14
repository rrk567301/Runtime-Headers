@class PTColor, NSString, PTRaytracingV2RenderState, PTRenderDebugLayer;
@protocol MTLPipelineLibrary, MTLLibrary, MTLTexture, MTLBuffer, MTLDeviceSPI;

@interface PTRaytracingV2 : NSObject <RenderingIntegration> {
    PTRaytracingV2RenderState *_renderState;
    PTColor *_portraitColor;
    PTRenderDebugLayer *_debugLayer;
    long long _debugRendering;
    struct CGSize { double width; double height; } _disparitySize;
    struct CGSize { double width; double height; } _colorSize;
    id<MTLDeviceSPI> _device;
    id<MTLBuffer> _randomValues;
    id<MTLLibrary> _library;
    id<MTLPipelineLibrary> _pipelineLibrary;
    id<MTLTexture> _linearRGBA;
    id<MTLTexture> _raytracedRGBRadius;
    id<MTLTexture> _raytracedRGBRadiusIntermediate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)prewarm;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 colorSize:(struct CGSize { double x0; double x1; })a3 disparitySize:(struct CGSize { double x0; double x1; })a4 debugRendering:(long long)a5 verbose:(BOOL)a6 gpuProfiling:(BOOL)a7 config:(id)a8 quality:(int)a9;
- (int)renderContinuousWithSource:(id)a0 renderRequest:(id)a1;
- (unsigned long long)minimumResourceHeapSize;
- (void)setResourceHeap:(id)a0;

@end
