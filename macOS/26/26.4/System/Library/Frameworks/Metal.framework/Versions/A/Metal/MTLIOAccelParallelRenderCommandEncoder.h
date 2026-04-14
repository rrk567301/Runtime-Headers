@interface MTLIOAccelParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder

- (void)popDebugGroup;
- (void)setLabel:(id)a0;
- (unsigned long long)getType;
- (void)pushDebugGroup:(id)a0;
- (BOOL)isMemorylessRender;
- (BOOL)separateCommits;
- (void)endEncoding;
- (void)setSeparateCommits:(BOOL)a0;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;

@end
