@protocol MTLComputePipelineState;

@interface FRCBlit : FRCMetalBase {
    id<MTLComputePipelineState> _bufferToTexture;
    id<MTLComputePipelineState> _textureToBuffer;
    id<MTLComputePipelineState> _bufferToTextureTwoComponent;
    id<MTLComputePipelineState> _textureToBufferTwoComponent;
    id<MTLComputePipelineState> _linearBufferToTextureOneComponent;
    id<MTLComputePipelineState> _linearBufferToTextureTwoComponent;
    id<MTLComputePipelineState> _rgbaTextureToLinearBuffer;
    id<MTLComputePipelineState> _linearBufferToLinearBuffer;
    id<MTLComputePipelineState> _textureArrayToLinearBuffer;
    id<MTLComputePipelineState> _rgTextureToLinearBuffer;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)setupMetal;
- (void)copyBuffer:(struct __CVBuffer { } *)a0 toTexture:(id)a1 commandBuffer:(id)a2;
- (void)copyLinearBuffer:(struct __IOSurface { } *)a0 toLinearBuffer:(struct __IOSurface { } *)a1 commandBuffer:(id)a2;
- (void)copyLinearBuffer:(struct __IOSurface { } *)a0 toTexture:(id)a1 commandBuffer:(id)a2;
- (void)copyTexture:(id)a0 toBuffer:(struct __CVBuffer { } *)a1 commandBuffer:(id)a2;
- (void)copyTexture:(id)a0 toLinearBuffer:(struct __IOSurface { } *)a1 commandBuffer:(id)a2;

@end
