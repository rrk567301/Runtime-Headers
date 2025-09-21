@class NSString;
@protocol MTLDevice;

@interface MTL4ToolsArgumentTable : MTLToolsObject <MTL4ArgumentTableGGDSPI>

@property (readonly) id<MTLDevice> device;
@property (readonly, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)getBufferBindings:(struct MTLResourceID { unsigned long long x0; } *)a0 bindingCount:(unsigned long long)a1;
- (unsigned long long)bufferBindingCount;
- (void)getTextureBindings:(struct MTLResourceID { unsigned long long x0; } *)a0 bindingCount:(unsigned long long)a1;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (unsigned long long)samplerBindingCount;
- (void)setAddress:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setAddress:(unsigned long long)a0 attributeStride:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setResource:(struct MTLResourceID { unsigned long long x0; })a0 atBufferIndex:(unsigned long long)a1;
- (void)setSamplerState:(struct MTLResourceID { unsigned long long x0; })a0 atIndex:(unsigned long long)a1;
- (void)setTexture:(struct MTLResourceID { unsigned long long x0; })a0 atIndex:(unsigned long long)a1;
- (unsigned long long)textureBindingCount;

@end
