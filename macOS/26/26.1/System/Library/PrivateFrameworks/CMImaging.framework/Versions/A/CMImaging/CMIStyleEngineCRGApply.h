@class NSString;
@protocol MTLBuffer, MTLTexture, CRGInput, CRGOutput, CRGTextureArgs, MTLComputePipelineState;

@interface CMIStyleEngineCRGApply : CRGNode <CRGRenderProvider> {
    id<CRGTextureArgs> _textureArgs;
    id<MTLComputePipelineState> _shader;
    id<MTLBuffer> _linearSystemStatus;
    id<MTLTexture> _inputIntegratedCoefficientsTexture;
    BOOL _inputIsLinear;
    BOOL _outputShouldBeLinear;
    float _strengthFactor;
    id<MTLBuffer> _maxLumaGradient90thPercentileBuffer;
    struct { float inputReadNoiseVar; float inputShotNoiseVar; float inputSquaredNoiseVar; } _syntheticNoiseParams;
    id<MTLTexture> _residualImage;
}

@property (readonly, nonatomic) id<CRGInput> input;
@property (readonly, nonatomic) id<CRGInput> inputOriginal;
@property (readonly, nonatomic) id<CRGInput> inputDeltaMap;
@property (readonly, nonatomic) id<CRGOutput> output;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (int)render:(id)a0;
- (id)initWithName:(id)a0 parentGroup:(id)a1 shader:(id)a2 linearSystemStatus:(id)a3 inputIntegratedCoefficientsTexture:(id)a4 inputIsLinear:(BOOL)a5 outputShouldBeLinear:(BOOL)a6 strengthFactor:(float)a7 maxLumaGradient90thPercentileBuffer:(id)a8 syntheticNoiseParams:(struct { float x0; float x1; float x2; })a9 residualImage:(id)a10 createInputOriginal:(BOOL)a11 createInputDeltaMap:(BOOL)a12;

@end
