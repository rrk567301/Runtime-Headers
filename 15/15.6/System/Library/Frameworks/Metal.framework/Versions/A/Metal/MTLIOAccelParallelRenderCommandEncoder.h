@interface MTLIOAccelParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder

- (void)pushDebugGroup:(id)a0;
- (char)separateCommits;
- (void)endEncoding;
- (char)isMemorylessRender;
- (void)popDebugGroup;
- (void)setLabel:(id)a0;
- (void)setSeparateCommits:(char)a0;
- (unsigned long long)getType;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;

@end
