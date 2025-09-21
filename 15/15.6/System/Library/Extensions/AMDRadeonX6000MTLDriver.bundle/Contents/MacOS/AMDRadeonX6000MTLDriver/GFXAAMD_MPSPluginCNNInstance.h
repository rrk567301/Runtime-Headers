@class NSString, GFXAAMD_MPSPlugin, MPSPluginCNNConvolutionDescriptor;
@protocol MTLBuffer, MTLDevice;

@interface GFXAAMD_MPSPluginCNNInstance : MPSExternalCNNUnary <MPSExternalCNNConvolution> {
    struct AMD_MPSPluginCNNInstanceMembersRec { GFXAAMD_MPSPlugin *mpsPlugin; struct { MPSPluginCNNConvolutionDescriptor *descriptor; struct MPSPluginCNNConvolutionData { unsigned int weightsDataType; int weightsLayout; unsigned int weightsQuantizationType; void *weights; float *bias; float *lookUpTable; void *ranges; struct MPSCNNBatchNormParamsForInference *batchNormalizationParameters; } convolutionData; } MPSCNNAttrs; struct Winograd_CNN_ArgsRec { unsigned int N; unsigned int C; unsigned int H; unsigned int W; unsigned int K; unsigned int n_groups; union { struct { unsigned int flags; unsigned int reserved; } ; unsigned long long flags64; } ; unsigned long long data_addr; unsigned long long filter_addr; unsigned long long output_addr; unsigned long long return_addr; unsigned int R; unsigned int S; unsigned int pad_h; unsigned int pad_w; unsigned int out_h; unsigned int out_w; unsigned long long bias_addr; float relu_alpha; unsigned int reserved2; struct Offsets { unsigned long long d_offset; unsigned long long f_offset; unsigned long long o_offset; unsigned long long b_offset; } Offsets; } winogradCNNArgs; struct vector<Tensile::KernelInvocation, std::allocator<Tensile::KernelInvocation>> { struct KernelInvocation *__begin_; struct KernelInvocation *__end_; struct __compressed_pair<Tensile::KernelInvocation *, std::allocator<Tensile::KernelInvocation>> { struct KernelInvocation *__value_; } __end_cap_; } kernelDispatcher; id<MTLBuffer> cnnWeights; id<MTLBuffer> cnnBiases; id<MTLDevice> mtlDevice; unsigned int pluginUsage; } m_members;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithDevice:(id)a0;
- (void)serializeData:(const struct MPSCNNConvolutionData { unsigned int x0; unsigned int x1; void *x2; float *x3; float *x4; struct MPSCNNBatchNormParamsForInference **x5; int x6; float x7; float x8; float x9; float *x10; char x11; } *)a0;
- (unsigned long long)encodeBatchToCommandBuffer:(id)a0 computeCommandEncoder:(id)a1 options:(unsigned long long)a2 pluginOptions:(unsigned long long)a3 sourceTextures:(id)a4 sourceInfo:(const struct { unsigned long long x0; unsigned long long x1; struct { long long x0; long long x1; long long x2; } x2; struct { long long x0; long long x1; long long x2; } x3; unsigned long long x4; unsigned long long x5; } *)a5 destinationTextures:(id)a6 destinationInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; } x3; unsigned long long x4; } *)a7 predicationBuffer:(id)a8 predicationOffset:(unsigned long long)a9;
- (void)convolutionHandlerWithEncoder_1x1:(id)a0 commandBuffer:(id)a1 srcTexture:(id)a2 dstTexture:(id)a3 srcBuffer:(id)a4 dstBuffer:(id)a5 destinationWeightsBufferFP32:(id)a6 srcWidth:(unsigned long long)a7 srcHeight:(unsigned long long)a8 srcArrayLength:(unsigned long long)a9 dstWidth:(unsigned long long)a10 dstHeight:(unsigned long long)a11 dstArrayLength:(unsigned long long)a12;
- (void)convolutionHandlerWithEncoder_3x3:(id)a0 commandBuffer:(id)a1 srcTexture:(id)a2 dstTexture:(id)a3 srcBuffer:(id)a4 dstBuffer:(id)a5 destinationWeightsBufferFP32:(id)a6 srcWidth:(unsigned long long)a7 srcHeight:(unsigned long long)a8 srcArrayLength:(unsigned long long)a9 dstWidth:(unsigned long long)a10 dstHeight:(unsigned long long)a11 dstArrayLength:(unsigned long long)a12 srcComponentCount:(unsigned long long)a13 srcFeatureChannels:(unsigned long long)a14;
- (void)postConvolutionHandlerWithEncoder:(id)a0 srcBuffer:(id *)a1 dstBuffer:(id *)a2 destinationWeightsBufferFP32:(id *)a3 weightBufferRequiresConvert:(char)a4;
- (char)preConvolutionHandlerWithEncoder:(id)a0 srcBuffer:(id *)a1 srcLength:(unsigned long long)a2 dstBuffer:(id *)a3 dstLength:(unsigned long long)a4 destinationWeightsBufferFP32:(id *)a5 weightsLength:(unsigned long long)a6 weightBufferRequiresConvert:(char)a7;
- (char)setCNNParametersWithDescriptor:(id)a0 dataSource:(struct MPSPluginCNNConvolutionData { unsigned int x0; int x1; unsigned int x2; void *x3; float *x4; float *x5; struct MPSCNNBatchNormParamsForInference **x6; } *)a1;
- (void)setMPSPlugin:(id)a0 usage:(unsigned int)a1;

@end
