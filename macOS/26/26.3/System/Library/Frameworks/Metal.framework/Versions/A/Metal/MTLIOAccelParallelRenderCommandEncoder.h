@interface MTLIOAccelParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder

- (void)popDebugGroup;
- (unsigned long long)getType;
- (void)setLabel:(id)a0;
- (BOOL)isMemorylessRender;
- (void)pushDebugGroup:(id)a0;
- (BOOL)separateCommits;
- (void)endEncoding;
- (void)setSeparateCommits:(BOOL)a0;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;

@end
