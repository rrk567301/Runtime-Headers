@protocol MTLComputePipelineState;

@interface BlitRenderer : NSObject {
    id<MTLComputePipelineState> _blit_state;
}

- (void).cxx_destruct;
- (void)blitChainlinkToPostProcessColor:(id)a0 commandBuffer:(id)a1;

@end
