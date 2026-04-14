@interface MTL4DebugArgumentTable : MTL4ToolsArgumentTable {
    struct vector<MTL4DebugBindingInfo, std::allocator<MTL4DebugBindingInfo>> { struct MTL4DebugBindingInfo *__begin_; struct MTL4DebugBindingInfo *__end_; struct MTL4DebugBindingInfo *__cap_; } _bufferBindings;
    struct vector<MTL4DebugBindingInfo, std::allocator<MTL4DebugBindingInfo>> { struct MTL4DebugBindingInfo *__begin_; struct MTL4DebugBindingInfo *__end_; struct MTL4DebugBindingInfo *__cap_; } _textureBindings;
    struct vector<MTL4DebugBindingInfo, std::allocator<MTL4DebugBindingInfo>> { struct MTL4DebugBindingInfo *__begin_; struct MTL4DebugBindingInfo *__end_; struct MTL4DebugBindingInfo *__cap_; } _samplerBindings;
    BOOL _supportsAttributeStrides;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct MTL4DebugBindingInfo { int x0; BOOL x1; } *)bufferBindingAtIndex:(unsigned int)a0;
- (id)initWithArgumentTable:(id)a0 device:(id)a1 descriptor:(id)a2;
- (const struct MTL4DebugBindingInfo { int x0; BOOL x1; } *)samplerBindingAtIndex:(unsigned int)a0;
- (void)setAddress:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setAddress:(unsigned long long)a0 attributeStride:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setResource:(struct MTLResourceID { unsigned long long x0; })a0 atBufferIndex:(unsigned long long)a1;
- (void)setSamplerState:(struct MTLResourceID { unsigned long long x0; })a0 atIndex:(unsigned long long)a1;
- (void)setTexture:(struct MTLResourceID { unsigned long long x0; })a0 atIndex:(unsigned long long)a1;
- (const struct MTL4DebugBindingInfo { int x0; BOOL x1; } *)textureBindingAtIndex:(unsigned int)a0;

@end
