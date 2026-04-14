@interface IOGPUMetal4RenderCommandEncoder : _MTL4RenderCommandEncoder

- (void)popDebugGroup;
- (long long)getType;
- (void)setLabel:(id)a0;
- (void)dealloc;
- (void)pushDebugGroup:(id)a0;
- (void)endEncoding;
- (id)initWithCommandAllocator:(id)a0;

@end
