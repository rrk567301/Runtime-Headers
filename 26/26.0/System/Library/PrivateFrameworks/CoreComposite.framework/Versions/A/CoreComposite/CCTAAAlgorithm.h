@class CCTAAAlgorithmDescriptor, CCContextDeviceGroup;
@protocol MTLComputePipelineState, MTLTexture, MTLBuffer;

@interface CCTAAAlgorithm : CCAlgorithm {
    id<MTLComputePipelineState> _computePipelineTAAKernelWithFunctionConsts[16];
    CCContextDeviceGroup *_deviceGroup;
    CCTAAAlgorithmDescriptor *_algorithmDescriptor;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _hRatesVector;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _vRatesVector;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _hFactorVector;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _vFactorVector;
    struct vector<TAARegion1D, std::allocator<TAARegion1D>> { struct *__begin_; struct *__end_; struct *__cap_; } _hRegionVector[2];
    struct vector<TAARegion1D, std::allocator<TAARegion1D>> { struct *__begin_; struct *__end_; struct *__cap_; } _vRegionVector[2];
    struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } _taaRegions[2][4];
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _rasterizationRatesX;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _rasterizationRatesY;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _accumulationFactorsX;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _accumulationFactorsY;
    struct TAAAccumulationCurveParameters { int curveType; float constantAccumulationFactor; float maxAccumulationFactor; float accumulationStartRate; float accumulationPlateauRate; float accumulationSlopeModifier; void /* unknown type, empty encoding */ explicitCurvePoints[4]; struct { float edge00; float edge0; float edge1; float edge2; } clippedLogistic; struct { float a1; float a2; float bSlope; BOOL increasing; } configurableLogistic; } _taaCurveParameters;
    struct TAAAccumulationCurveConstants { float invRange; float s; float mx; float a1; float b1; float a2; float b2; struct { float smoothstepScalar; } clippedLogistic; struct { float capValue; float maxY; } configurableLogistic; } _curveConstants;
    struct TAAUniforms { int debugView; int coverageType; float temporalContrastBiasMuliplier; float forcedCoverageValue; float stdMultiplier; float innerPeripheryOverride; void /* unknown type, empty encoding */ regionTileOffset; void /* unknown type, empty encoding */ regionLutOffset; unsigned short eye_idx; } _taaUniforms;
    struct TAAFunctionConsts { BOOL kEnableDebugView; BOOL kEnableTemporalContrastBias; BOOL kEnableHighQualityAG; BOOL kEnableSpeedOfLight; } _taaFunctionConsts;
    struct TAAFrameData { struct { void /* unknown type, empty encoding */ columns[4]; } viewMatrix[2]; struct { void /* unknown type, empty encoding */ columns[4]; } projMatrix[2]; struct { void /* unknown type, empty encoding */ columns[4]; } reprojectionMatrix[2]; void /* unknown type, empty encoding */ granularity; unsigned short sliceIndex[2]; unsigned short taaTileCount; struct VRRViewport { void /* unknown type, empty encoding */ uvOrigin; void /* unknown type, empty encoding */ uvSize; void /* unknown type, empty encoding */ screenOrigin; void /* unknown type, empty encoding */ screenSize; void /* unknown type, empty encoding */ physicalOrigin; void /* unknown type, empty encoding */ physicalSize; void /* unknown type, empty encoding */ physicalOrigin_u; void /* unknown type, empty encoding */ physicalSize_u; void /* unknown type, empty encoding */ physicalTileOffset; void /* unknown type, empty encoding */ physicalTileCount; } viewport[2]; BOOL doubleTallLayout; } _previousFrameData;
    id<MTLTexture> _prevColorTexture;
    id<MTLBuffer> _prevRateMapBuffer;
    int _texWidth;
    int _texHeight;
    BOOL _isReallocatable;
    struct CCComputeCommandEncoderMethods { Class _classId; struct CCObjCMethodWrapper<CCComputeCommandEncoderMethods, void, id<MTLComputePipelineState>> { SEL _sel; void /* function */ *_function; } setComputePipelineState; struct CCObjCMethodWrapper<CCComputeCommandEncoderMethods, void, id<MTLTexture>, unsigned long> { SEL _sel; void /* function */ *_function; } setTextureAtIndex; struct CCObjCMethodWrapper<CCComputeCommandEncoderMethods, void, id<MTLBuffer>, unsigned long, unsigned long> { SEL _sel; void /* function */ *_function; } setBufferAtIndex; struct CCObjCMethodWrapper<CCComputeCommandEncoderMethods, void, const void *, unsigned long, unsigned long> { SEL _sel; void /* function */ *_function; } setBytesAtIndex; struct CCObjCMethodWrapper<CCComputeCommandEncoderMethods, void, MTLSize, MTLSize> { SEL _sel; void /* function */ *_function; } dispatchThreadgroups; } _computeCommandEncoder;
}

- (void)setDescriptor:(id)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
