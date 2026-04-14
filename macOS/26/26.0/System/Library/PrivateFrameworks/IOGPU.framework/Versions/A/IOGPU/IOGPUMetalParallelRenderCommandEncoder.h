@interface IOGPUMetalParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder

- (unsigned long long)getType;
- (BOOL)isMemorylessRender;
- (void)setLabel:(id)a0;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)a0;
- (void)endEncoding;
- (id)_renderCommandEncoderCommon;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;

@end
