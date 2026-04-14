@interface IOGPUMetal4RenderCommandEncoder : _MTL4RenderCommandEncoder

- (void)setLabel:(id)a0;
- (void)pushDebugGroup:(id)a0;
- (void)popDebugGroup;
- (void)dealloc;
- (long long)getType;
- (void)endEncoding;
- (id)initWithCommandAllocator:(id)a0;

@end
