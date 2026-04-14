@interface MTLIOAccelParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder

- (void)setLabel:(id)a0;
- (BOOL)isMemorylessRender;
- (void)pushDebugGroup:(id)a0;
- (void)popDebugGroup;
- (unsigned long long)getType;
- (BOOL)separateCommits;
- (void)endEncoding;
- (void)setSeparateCommits:(BOOL)a0;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;

@end
