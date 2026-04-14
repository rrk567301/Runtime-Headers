@interface IOGPUMetalParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder

- (void)setLabel:(id)a0;
- (BOOL)isMemorylessRender;
- (void)pushDebugGroup:(id)a0;
- (void)popDebugGroup;
- (unsigned long long)getType;
- (void)endEncoding;
- (id)_renderCommandEncoderCommon;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;

@end
