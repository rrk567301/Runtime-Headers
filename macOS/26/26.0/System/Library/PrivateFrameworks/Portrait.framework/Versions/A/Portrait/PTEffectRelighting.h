@class PTUtil, PTMetalContext, PTBrightSceneDetector, PTBoxFilter, PTStudioLightColorCorrectionAndConversion, PTSyntheticLight, PTSingleColorCubeCorrectionStage, PTMSRResize, MTLFunctionConstantValues;
@protocol MTLComputePipelineState, MTLTexture;

@interface PTEffectRelighting : NSObject {
    id<MTLComputePipelineState> _studioLight;
    id<MTLComputePipelineState> _createLightMask;
    id<MTLComputePipelineState> _fgBgForDebug;
    id<MTLComputePipelineState> _lightMaskForDebug;
    id<MTLComputePipelineState> _relightFullsizeInput;
    id<MTLComputePipelineState> _lightMaskOutline;
    id<MTLComputePipelineState> _filterLightGainApplyToRGB;
    PTSyntheticLight *_syntheticLight;
    PTUtil *_util;
    PTMetalContext *_metalContext;
    struct RelightingParam { void /* unknown type, empty encoding */ bgLightIntensity; void /* unknown type, empty encoding */ bgVignetteLightIntensity; float bgVignetteFalloff; float fgOffsetFactorNear; float fgOffsetFactorFar; float bgEffectThresholdDisparityMin; float fgLightDesaturation; void /* unknown type, empty encoding */ fgLightColor; void /* unknown type, empty encoding */ bgToneCurveReciprocal; void /* unknown type, empty encoding */ highlightClippingMinMax; void /* unknown type, empty encoding */ highlightClippingVignetteMinMax; float studioLightFromSegmentationBlend; } _parameters;
    struct SmoothFaceRectData { void /* unknown type, empty encoding */ aspectRatioScale; float lightMaskExponent; float preumbraBendFactor; float lightMaskWidth; float lightMaskFaceOffsetY; void /* unknown type, empty encoding */ faceEyeWeight; struct { void /* unknown type, empty encoding */ columns[2]; } rotation; struct SmoothFaceRect { void /* unknown type, empty encoding */ faceCenter; float faceRadius; void /* unknown type, empty encoding */ bodyPos; void /* unknown type, empty encoding */ bodySize; void /* unknown type, empty encoding */ leftEyeCenter; float leftEyeRadius; void /* unknown type, empty encoding */ rightEyeCenter; float rightEyeRadius; float preumbra; float weight; } faces[4]; } _smoothFaceRects;
    int _frameIndex;
    void /* unknown type, empty encoding */ _weightHeadEye;
    float _eyeRadiusFactor;
    id<MTLTexture> _lightMasks;
    void /* unknown type, empty encoding */ _bgVignetteLightIntensity;
    float _lightGainMapScale;
    id<MTLTexture> _lightGainMapLowRes;
    id<MTLTexture> _lightGainMapLowResFiltered;
    id<MTLTexture> _lightGainMapFiltered;
    PTBrightSceneDetector *_brightSceneDetector;
    float _lastFrameTimeSeconds;
    PTSingleColorCubeCorrectionStage *_colorCube;
    PTMSRResize *_msrColorPyramid;
    id<MTLTexture> _quarterSizeRGBA;
    id<MTLTexture> _relightSizeRGBA;
    int _colorCubeType;
    PTBoxFilter *_boxFilter;
    id<MTLTexture> _approximatedDiffuseIntermediate;
    id<MTLTexture> _approximatedDiffuse;
    MTLFunctionConstantValues *_functionConstants;
    PTStudioLightColorCorrectionAndConversion *_colorCorrectionAndConversion;
}

+ (struct SmoothFaceRectData { float x0; float x1; float x2; float x3; struct { void /* unknown type, empty encoding */ x0[2]; } x4; struct SmoothFaceRect { float x0; float x1; float x2; float x3; float x4; } x5[4]; })computeSmoothFaceRect:(SEL)a0 transform:(id)a1 weightHeadEye:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 eyeRadiusFactor:(float)a3 aspectRatio:(float)a4;

- (void)reset;
- (void).cxx_destruct;
- (id)gainMap;
- (struct SmoothFaceRectData { float x0; float x1; float x2; float x3; struct { void /* unknown type, empty encoding */ x0[2]; } x4; struct SmoothFaceRect { float x0; float x1; float x2; float x3; float x4; } x5[4]; } *)smoothFaceRects;
- (void)updateColorCube;
- (id)approximateDiffuseFromSegmentation:(id)a0;
- (id)brightSceneDetector;
- (id)colorCube;
- (void)estimateLightIntensity:(id)a0 inFaceRects:(void *)a1 numberOfFaceRects:(int)a2 humanDetections:(id)a3 effectRenderRequest:(id)a4 asyncWork:(id)a5;
- (void)fgBgDebugWithDisparity:(id)a0 inDiffuse:(id)a1 inFocusDisparityModifier:(id)a2 outMask:(id)a3 debugType:(long long)a4;
- (int)filterLightGainApplyInRGB:(id)a0;
- (void)initRelightingParam;
- (id)initWithMetalContext:(id)a0 availableEffectTypes:(unsigned long long)a1 prewarmOnly:(BOOL)a2 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 msrColorPyramid:(id)a4 studiolightFromSegmentation:(BOOL)a5 sharedResources:(id)a6;
- (void)lightMaskDebugWithMSRPyramid:(id)a0 outFaceMask:(id)a1;
- (void)renderLightMask:(id)a0 lightMasks:(id)a1 smoothFaceRects:(struct SmoothFaceRectData { float x0; float x1; float x2; float x3; struct { void /* unknown type, empty encoding */ x0[2]; } x4; struct SmoothFaceRect { float x0; float x1; float x2; float x3; float x4; } x5[4]; } *)a2;
- (void)studioLightInColor:(id)a0 inDiffuse:(id)a1 inDisparity:(id)a2 inFocusDisparityModifier:(id)a3 outColor:(id)a4 relightStrength:(float)a5 studioLightFromSegmentationBlend:(float)a6 studioLightEffectModifier:(id)a7;
- (id)syntheticLight;
- (void)updateParamters:(id)a0 relightStrength:(float)a1;

@end
