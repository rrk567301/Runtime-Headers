@class Backwarp_Ext;
@protocol MTLComputePipelineState;

@interface Upsampler : VEMetalBase {
    id<MTLComputePipelineState> _imageUpsampleRGBPackedKernel;
    id<MTLComputePipelineState> _fillKernel;
    Backwarp_Ext *_backwarp;
}

- (id)init;
- (void).cxx_destruct;
- (void)encodeFillTextureToCommandBuffer:(id)a0 destination:(id)a1 withValue:(float)a2;
- (void)encodeUpsampleRBGPackedToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2 scaleFactor:(float)a3;
- (BOOL)fillImage:(struct __CVBuffer { } *)a0 withValue:(float)a1;
- (BOOL)setupKernels;
- (BOOL)upsampleRBGPackedBuffer:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1 scaleFactor:(float)a2;
- (BOOL)upscaleFlow:(struct __CVBuffer { } *)a0 upscaleRatio:(float)a1 destination:(struct __CVBuffer { } *)a2;

@end
