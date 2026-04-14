@protocol MTLDepthStencilState, MTLRenderPipelineState;

@interface CP_OBJECT_stencil_clear_render_pass : NSObject {
    id<MTLRenderPipelineState> _render_state;
    id<MTLDepthStencilState> _depth_stencil_state;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 configuration:(id)a1;

@end
