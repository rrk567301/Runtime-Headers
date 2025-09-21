@class _MTLIndirectArgumentBufferLayout, NSString, GFXAAMD_MtlBuffer;
@protocol MTLDevice;

@interface GFXAAMD_MtlIndirectArgumentBufferEncoder : MTLIOAccelIndirectArgumentEncoder <MTLIndirectArgumentEncoderSPI> {
    struct AMD_MtlIndirectArgumentBufferEncoderMembers { GFXAAMD_MtlBuffer *IABBuffer; unsigned long long IABoffset; struct AMD_IndirectArgumentBufferLayoutMembers *layout; unsigned long long encodedLength; unsigned char usingHardwareRT : 1; unsigned int unused : 31; } _amd;
}

@property (readonly) unsigned long long encodedLength;
@property (readonly) unsigned long long alignment;
@property (readonly, nonatomic) _MTLIndirectArgumentBufferLayout *layout;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRenderPipelineState:(id)a0 atIndex:(unsigned long long)a1;
- (void *)constantDataAtIndex:(unsigned long long)a0;
- (void)setAccelerationStructure:(id)a0 atIndex:(unsigned long long)a1;
- (void)setArgumentBuffer:(id)a0 offset:(unsigned long long)a1;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setComputePipelineState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setComputePipelineStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setIndirectCommandBuffer:(id)a0 atIndex:(unsigned long long)a1;
- (void)setIndirectCommandBuffers:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setIntersectionFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setIntersectionFunctionTable:(id)a0 atIndex:(unsigned long long)a1;
- (void)setIntersectionFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setIntersectionFunctionTables:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setRenderPipelineStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setVisibleFunctionTable:(id)a0 atIndex:(unsigned long long)a1;
- (void)setVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setVisibleFunctionTables:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithLayout:(id)a0 device:(id)a1;

@end
