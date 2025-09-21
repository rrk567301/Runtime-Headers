@interface IOGPUMetalParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder

- (void)pushDebugGroup:(id)a0;
- (void)endEncoding;
- (char)isMemorylessRender;
- (void)popDebugGroup;
- (void)setLabel:(id)a0;
- (unsigned long long)getType;
- (id)_renderCommandEncoderCommon;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;

@end
