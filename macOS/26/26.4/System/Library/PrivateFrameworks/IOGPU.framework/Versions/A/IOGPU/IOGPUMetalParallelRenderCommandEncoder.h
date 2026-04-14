@interface IOGPUMetalParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder

- (void)popDebugGroup;
- (void)setLabel:(id)a0;
- (unsigned long long)getType;
- (void)pushDebugGroup:(id)a0;
- (BOOL)isMemorylessRender;
- (void)endEncoding;
- (id)_renderCommandEncoderCommon;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;

@end
