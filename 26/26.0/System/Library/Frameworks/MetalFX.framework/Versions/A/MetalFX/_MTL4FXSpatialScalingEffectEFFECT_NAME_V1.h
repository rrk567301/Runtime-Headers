@class NSString, MTLTextureDescriptor, MTL4RenderPassDescriptor, NSMutableArray;
@protocol MTLRenderPipelineState, MTL4ArgumentTable, MTLBuffer, MTLResidencySet, MTLTexture, MTLFence, MTLDeviceSPI;

@interface _MTL4FXSpatialScalingEffectEFFECT_NAME_V1 : _MTL4FXSpatialScaler <MTL4FXSpatialScalerSPI> {
    id<MTLDeviceSPI> _device;
    id<MTLRenderPipelineState> _mfxNormPerceptPSO;
    id<MTLRenderPipelineState> _mfxUpscalePSO;
    id<MTLRenderPipelineState> _mfxSharpenPSO;
    MTL4RenderPassDescriptor *_mfxPassDescriptor;
    id<MTLTexture> _mfxNormPerceptTex;
    id<MTLTexture> _mfxUpscaledTex;
    MTLTextureDescriptor *_texDesc;
    unsigned long long _inputFormat;
    unsigned long long _outputFormat;
    BOOL _inputSRGB;
    BOOL _outputSRGB;
    unsigned long long _intermediatePixelFormat;
    id<MTL4ArgumentTable> _normPerceptFragInputs;
    id<MTLBuffer> _normalizeBuffer;
    id<MTL4ArgumentTable> _scaleFragInputs;
    NSMutableArray *_fxrUpscaleBuffer;
    id<MTLBuffer> _scaleBuffer;
    id<MTL4ArgumentTable> _sharpenFragInputs;
    id<MTLBuffer> _fxrSharpenBuffer;
    id<MTLBuffer> _sharpenBuffer;
    BOOL _needNormPercept;
    id<MTLResidencySet> _residencySetGlobal;
    id<MTLResidencySet> _residencySetPercept;
    unsigned long long _frame;
    unsigned long long _framesInFlight;
    id<MTLFence> _internalFence;
}

@property (nonatomic) unsigned long long colorTextureBarrierStages;
@property (readonly, nonatomic) unsigned long long outputTextureBarrierStages;
@property (retain, nonatomic) id<MTLTexture> debugTexture;
@property (readonly, nonatomic) unsigned long long colorTextureUsage;
@property (readonly, nonatomic) unsigned long long outputTextureUsage;
@property (nonatomic) unsigned long long inputContentWidth;
@property (nonatomic) unsigned long long inputContentHeight;
@property (retain, nonatomic) id<MTLTexture> colorTexture;
@property (retain, nonatomic) id<MTLTexture> outputTexture;
@property (readonly, nonatomic) unsigned long long colorTextureFormat;
@property (readonly, nonatomic) unsigned long long outputTextureFormat;
@property (readonly, nonatomic) unsigned long long inputWidth;
@property (readonly, nonatomic) unsigned long long inputHeight;
@property (readonly, nonatomic) unsigned long long outputWidth;
@property (readonly, nonatomic) unsigned long long outputHeight;
@property (readonly, nonatomic) long long colorProcessingMode;
@property (retain, nonatomic) id<MTLFence> fence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0;
- (id)initWithDevice:(id)a0 compiler:(id)a1 descriptor:(id)a2;

@end
