@interface MTLIOAccelParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder

- (BOOL)separateCommits;
- (void)pushDebugGroup:(id)a0;
- (void)endEncoding;
- (BOOL)isMemorylessRender;
- (void)popDebugGroup;
- (void)setLabel:(id)a0;
- (void)setSeparateCommits:(BOOL)a0;
- (unsigned long long)getType;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;

@end
