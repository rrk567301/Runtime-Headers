@class NSString;
@protocol MTLComputePipelineState, MTLDevice, MTLSamplerState;

@interface MPSIGCNNPoolingMax : MPSExternalCNNUnary <MPSExternalCNNPoolingMax> {
    id<MTLDevice> igDevice;
    struct poolingKernelInfo { int kernelType; id<MTLComputePipelineState> kernelPipelineState; id<MTLComputePipelineState> kernelPipelineStateClampToEdge; id<MTLSamplerState> samplerClampToZero; id<MTLSamplerState> samplerClampToEdge; struct poolingParamsForKernels { unsigned long long output_x; unsigned long long output_y; unsigned long long strideX; unsigned long long strideY; unsigned long long kernelW; unsigned long long kernelH; unsigned long long srcTextureWidth; unsigned long long srcTextureHeight; int type; } kernelParams; struct cnnBfloatKernelInfo *bfloatInfo; } kernelInfo;
    struct intel_PoolingParams { unsigned long long kernelWidth; unsigned long long kernelHeight; unsigned long long strideX; unsigned long long strideY; unsigned long long srcTextureWidth; unsigned long long srcTextureHeight; int type; } poolingParams;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDevice:(id)a0 kernelWidth:(unsigned long long)a1 kernelHeight:(unsigned long long)a2 strideInPixelsX:(unsigned long long)a3 strideInPixelsY:(unsigned long long)a4;
- (unsigned long long)maxBatchSize;
- (unsigned long long)encodeBatchToCommandBuffer:(id)a0 computeCommandEncoder:(id)a1 options:(unsigned long long)a2 pluginOptions:(unsigned long long)a3 sourceTextures:(id)a4 sourceInfo:(const struct { unsigned long long x0; unsigned long long x1; struct { long long x0; long long x1; long long x2; } x2; struct { long long x0; long long x1; long long x2; } x3; unsigned long long x4; unsigned long long x5; } *)a5 destinationTextures:(id)a6 destinationInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; } x3; unsigned long long x4; } *)a7 predicationBuffer:(id)a8 predicationOffset:(unsigned long long)a9;
- (unsigned long long)encodeToCommandBuffer:(id)a0 computeCommandEncoder:(id)a1 options:(unsigned long long)a2 sourceTexture:(id)a3 sourceInfo:(const struct { unsigned long long x0; unsigned long long x1; struct { long long x0; long long x1; long long x2; } x2; struct { long long x0; long long x1; long long x2; } x3; unsigned long long x4; unsigned long long x5; } *)a4 destinationTexture:(id)a5 destinationInfo:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; } x3; unsigned long long x4; } *)a6;

@end
