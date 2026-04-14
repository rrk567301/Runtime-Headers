@class PTRenderEffectNetwork, NSString, PTUtil, PTRenderRequest, PTEffectUtil, PTPyramidRGB, PTMSRResize, PTRenderPipeline, PTEffectDisparityFilter, PTColor;
@protocol PTRenderState, MTLDevice, MTLBuffer, MTLLibrary, MTLTexture, MTLPipelineLibrary, MTLCommandQueueSPI;

@interface PTEffectRendererSDOF : PTEffect {
    id<MTLDevice> _device;
    id<MTLLibrary> _library;
    id<MTLPipelineLibrary> _pipelineLibrary;
    id<MTLCommandQueueSPI> _commandQueue;
    PTRenderPipeline *_renderPipeline[3];
    id<PTRenderState> _renderStates[3];
    id<MTLTexture> _disparityFixedFocus;
    id<MTLBuffer> _focusDisparityArray;
    id<MTLBuffer> _focusObject;
    id<MTLBuffer> _lastFocus;
    PTMSRResize *_msrResize;
    NSString *_transferFunction;
    NSString *_YCbCrMatrix;
    NSString *_colorPrimaries;
    int _colorYCbCrMatrix;
    PTRenderEffectNetwork *_network;
    PTEffectDisparityFilter *_disparityFilter;
    PTPyramidRGB *_rgbaPyramid;
    PTColor *_portraitColor;
    PTRenderRequest *_sdofRenderRequest;
    int _colorWidth;
    int _colorHeight;
    BOOL _hasANE;
    float _fNumber;
    BOOL _asynchronous;
    int _frameIndex;
    void /* unknown type, empty encoding */ _faceRects[4];
    int _numberOfFaceRects;
    float _focusDepthFixed;
    float _focusDepthMax;
    float _focusDepthOffset;
    void /* unknown type, blank encoding */ _iirUpdateCoefficient;
    id<MTLTexture> _temporalDisparityPrevFiltered;
    PTUtil *_util;
    PTEffectUtil *_effectUtil;
    float _focusDisparityUpdateCoefficient;
}

- (void).cxx_destruct;
- (void)reset;
- (int)render:(struct __CVBuffer { } *)a0 detectedObjects:(const struct __CFDictionary { } *)a1 toColorBuffer:(struct __CVBuffer { } *)a2;
- (id)initWithTransferFunction:(id)a0 YCbCrMatrix:(id)a1 colorPrimaries:(id)a2 dimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 metalCommandQueue:(id)a4 effectType:(long long)a5 prewarmOnly:(BOOL)a6;
- (void)parseFaceRects:(const struct __CFDictionary { } *)a0;
- (void)setColorSpaceInformation:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1;
- (void)depthEstimation;
- (void)renderDebugInformation:(id)a0 outChroma:(id)a1 outLuma:(id)a2 defaults:(id)a3;

@end
