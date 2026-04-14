@interface MTLGPUDebugArgumentEncoder : MTLToolsArgumentEncoder {
    const void *_layout;
}

- (void)setRenderPipelineState:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithArgumentEncoder:(id)a0 layout:(const void *)a1 device:(id)a2;
- (id)newArgumentEncoderForBufferAtIndex:(unsigned long long)a0;
- (void)setAccelerationStructure:(id)a0 atIndex:(unsigned long long)a1;
- (void)setComputePipelineState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setComputePipelineStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setIndirectCommandBuffer:(id)a0 atIndex:(unsigned long long)a1;
- (void)setIndirectCommandBuffers:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setRenderPipelineStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
