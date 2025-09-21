@class NSMutableDictionary, MTLRenderPipelineDescriptor;
@protocol MTLDevice;

@interface GTMTLTextureRenderer : NSObject {
    id<MTLDevice> _device;
    MTLRenderPipelineDescriptor *_overlayPipelineDescriptor;
    MTLRenderPipelineDescriptor *_texturePipelineDescriptor;
    MTLRenderPipelineDescriptor *_depthStencilPipelineDescriptor;
    NSMutableDictionary *_overlayPipelines;
    NSMutableDictionary *_texturePipelines;
    NSMutableDictionary *_depthStencilPipelines;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)encodeWaits:(id)a0 commandBuffer:(id)a1;
- (id)getPipelineStateFromCache:(id)a0 withDescriptor:(id)a1 withFormat:(unsigned long long)a2;
- (void)render:(id)a0 withEncoder:(id)a1 withFormat:(unsigned long long)a2 renderTargetSize:(struct CGSize { double x0; double x1; })a3 viewContentsScale:(double)a4;
- (void)renderOverlay:(id)a0 color:(unsigned int)a1 shrinkToFit:(BOOL)a2 withEncoder:(id)a3 withFormat:(unsigned long long)a4 transform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a5 anchor:(struct CGPoint { double x0; double x1; })a6 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 renderTargetSize:(struct CGSize { double x0; double x1; })a8 viewContentsScale:(double)a9;
- (void)renderTexture:(id)a0 isDepthStencil:(BOOL)a1 shrinkToFit:(BOOL)a2 withEncoder:(id)a3 withFormat:(unsigned long long)a4 transform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a5 anchor:(struct CGPoint { double x0; double x1; })a6 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 renderTargetSize:(struct CGSize { double x0; double x1; })a8 viewContentsScale:(double)a9;
- (id)wrapLinear:(id)a0;

@end
