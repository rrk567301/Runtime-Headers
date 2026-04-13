@interface MTLIOAccelParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder

- (void)endEncoding;
- (void)setLabel:(id)a0;
- (void)pushDebugGroup:(id)a0;
- (void)popDebugGroup;
- (BOOL)isMemorylessRender;
- (unsigned long long)getType;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;
- (BOOL)separateCommits;
- (void)setSeparateCommits:(BOOL)a0;

@end
