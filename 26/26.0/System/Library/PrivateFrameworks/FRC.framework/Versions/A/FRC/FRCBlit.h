@protocol MTLComputePipelineState;

@interface FRCBlit : FRCMetalBase {
    id<MTLComputePipelineState> _bufferToTexture;
    id<MTLComputePipelineState> _textureToBuffer;
    id<MTLComputePipelineState> _bufferToTextureTwoComponent;
    id<MTLComputePipelineState> _textureToBufferTwoComponent;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)setupMetal;
- (void)copyBuffer:(struct __CVBuffer { } *)a0 toTexture:(id)a1 commandBuffer:(id)a2;
- (void)copyTexture:(id)a0 toBuffer:(struct __CVBuffer { } *)a1 commandBuffer:(id)a2;

@end
