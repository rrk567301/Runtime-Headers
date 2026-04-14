@interface IOGPUMetal4RenderCommandEncoder : _MTL4RenderCommandEncoder

- (long long)getType;
- (void)dealloc;
- (void)setLabel:(id)a0;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)a0;
- (void)endEncoding;
- (id)initWithCommandAllocator:(id)a0;

@end
