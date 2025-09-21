@class ADLKTConfidenceParameters;
@protocol MTLDevice, MTLTexture, MTLComputePipelineState, MTLBuffer;

@interface ADLKTOpticalFlow : NSObject {
    int _resX;
    int _resY;
    unsigned long long _nscales;
    BOOL _reducedMemoryConsumption;
    unsigned int _nwarpings[10];
    BOOL _useNonLocalRegularization;
    int _nlreg_radius;
    int _nlreg_padding;
    float _nlreg_sigma_l;
    float _nlreg_sigma_c;
    float _nlreg_sigma_w;
    unsigned int _firstScaleStride;
    id<MTLDevice> _device;
    struct CGSize { double width; double height; } _pyramid_size[10];
    unsigned long long _maxThreadExecutionWidth;
    id<MTLComputePipelineState> _computePipelines[11];
    struct __CVBuffer *_uv_pxbuf[2];
    id<MTLTexture> _uv_tex[2][10];
    id<MTLTexture> _uv_u32_alias_tex[2][10];
    id<MTLBuffer> _Adiagb_buf[2];
    id<MTLBuffer> _Ixy_buf[2];
    struct __CVBuffer { } *_w_pxbuf;
    id<MTLTexture> _w_tex[10];
    id<MTLTexture> _grayscaleTexture;
    id<MTLTexture> _gradientNormConfidenceTex;
    id<MTLTexture> _conditionNumberConfidenceTex;
    id<MTLBuffer> _computeMeanIntensityBuffer;
    id<MTLBuffer> _meanIntensityBuffer;
}

@property (class, readonly) unsigned int MaxScales;

@property (retain, nonatomic) ADLKTConfidenceParameters *confidenceParameters;

+ (struct { unsigned long long x0; id x1; BOOL x2; int x3; int x4; float x5; float x6; float x7; unsigned long long x8; unsigned int x9; BOOL x10; })defaultConfig;
+ (struct CGSize { double x0; double x1; })getNextPyramidLevelSize:(struct CGSize { double x0; double x1; })a0;
+ (struct { unsigned long long x0; id x1; BOOL x2; int x3; int x4; float x5; float x6; float x7; unsigned long long x8; unsigned int x9; BOOL x10; })highPerformanceConfig;
+ (struct { unsigned long long x0; id x1; BOOL x2; int x3; int x4; float x5; float x6; float x7; unsigned long long x8; unsigned int x9; BOOL x10; })highQualityConfig;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_zeroFlowWithCommandBuffer:(id)a0 uv_tex:(id)a1;
- (void)_setupPipelines;
- (int)_computeFeaturesWithCommandBuffer:(SEL)a0 cropSizeRatio:(id)a1 in_tex:(id)a2 out_tex:(id)a3;
- (void)setPyramidSizes;
- (int)_computeConfidence:(SEL)a0 shiftMap:(id)a1 outConfidenceMap:(id)a2 cropSizeRatio:(id)a3;
- (int)_computeFeaturesDerivativesWithCommandBuffer:(SEL)a0 cropSizeRatio:(id)a1 in_tex:(id)a2 out_tex:(id)a3;
- (BOOL)_createImagePyramidWithCommandBuffer:(SEL)a0 cropSizeRatio:(id)a1 inOutPyramidsArray:(id)a2 outMeanIntensityAtCoarsestScale:(id)a3 error:(id *)a4;
- (BOOL)_createImagePyramidWithCommandBuffer:(SEL)a0 in_tex:(id)a1 cropSizeRatio:(id)a2 outPyramidsArray:(id)a3 outMeanIntensityAtCoarsestScale:(id)a4 error:(id *)a5;
- (void)_doNLRegularizationWithCommandBuffer:(SEL)a0 in_uv_tex:(id)a1 join_tex:(id)a2 w_tex:(id)a3 out_uv_tex:(id)a4 cropSizeRatio:(id)a5;
- (int)_doSolverWithCommandBuffer:(SEL)a0 currentFeatures:(id)a1 currentDerivitive:(id)a2 previousFeatures:(id)a3 previousDerivitive:(id)a4 in_uv_tex:(id)a5 out_uv_tex:(id)a6 out_w_tex:(id)a7 uniforms:(id)a8 cropSizeRatio:(struct { unsigned int x0; unsigned int x1; int x2; unsigned int x3; BOOL x4; BOOL x5; void /* unknown type, blank encoding */ x6; void /* unknown type, blank encoding */ x7; void /* unknown type, blank encoding */ x8; void /* unknown type, blank encoding */ x9; })a9;
- (int)_downscale2XWithCommandBuffer:(id)a0 in_tex:(SEL)a1 out_tex:(id)a2 scaling_factor:(id)a3 cropSizeRatio:(id)a4 outMeanIntensity:(id)a5;
- (struct { unsigned int x0; unsigned int x1; int x2; unsigned int x3; BOOL x4; BOOL x5; void /* unknown type, blank encoding */ x6; void /* unknown type, blank encoding */ x7; void /* unknown type, blank encoding */ x8; void /* unknown type, blank encoding */ x9; })_prepareLKTGPUUniforms:(SEL)a0 out_uv_tex:(id)a1 coeff:(id)a2 stride:(unsigned int)a3 computeConfidenceComponents:(BOOL)a4;
- (BOOL)_setupBufferAndReturnErrorWithDevice:(id)a0 error:(id *)a1;
- (void)dispatchCommandEncoder:(id)a0 pipeline:(id)a1 width:(unsigned int)a2 height:(unsigned int)a3;
- (long long)encodeOpticalFlowSolverToCommandBuffer:(id)a0 currentFeaturesArray:(id)a1 currentDerivitiveArray:(id)a2 previousFeaturesArray:(id)a3 previousDerivitiveArray:(id)a4 currentPyramidsArray:(id)a5 outShiftMap:(id)a6;
- (long long)encodeOpticalFlowSolverToCommandBuffer:(id)a0 currentFeaturesArray:(id)a1 currentDerivitiveArray:(id)a2 previousFeaturesArray:(id)a3 previousDerivitiveArray:(id)a4 currentPyramidsArray:(id)a5 validBufferRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 outShiftMap:(id)a7 outConfidenceMap:(id)a8;
- (long long)encodePyramidFeaturesToCommandBuffer:(id)a0 colorTexture:(id)a1 outPyramidsArray:(id)a2 outFeaturesArray:(id)a3 outDerivitiveArray:(id)a4;
- (long long)encodePyramidFeaturesToCommandBuffer:(id)a0 grayscaleTexture:(id)a1 validBufferRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 outPyramidsArray:(id)a3 outFeaturesArray:(id)a4 outDerivitiveArray:(id)a5 outMeanIntensityAtCoarsestScale:(id)a6;
- (id)initWithDevice:(id)a0 inputSize:(struct CGSize { double x0; double x1; })a1 config:(struct { unsigned long long x0; id x1; BOOL x2; int x3; int x4; float x5; float x6; float x7; unsigned long long x8; unsigned int x9; BOOL x10; })a2;
- (id)initWithDevice:(id)a0 inputSize:(struct CGSize { double x0; double x1; })a1 config:(struct { unsigned long long x0; id x1; BOOL x2; int x3; int x4; float x5; float x6; float x7; unsigned long long x8; unsigned int x9; BOOL x10; })a2 confidenceParameters:(id)a3;
- (id)initWithDevice:(id)a0 inputSize:(struct CGSize { double x0; double x1; })a1 scales:(unsigned long long)a2;

@end
