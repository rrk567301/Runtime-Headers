@class _MTLIndirectArgumentBufferLayout, NSString, BronzeMtlBuffer;
@protocol MTLDevice;

@interface BronzeMtlIndirectArgumentBufferEncoder : MTLIOAccelIndirectArgumentEncoder <MTLIndirectArgumentEncoderSPI> {
    struct BronzeMtlIndirectArgumentBufferEncoderMembers { BronzeMtlBuffer *IABBuffer; unsigned long long IABoffset; struct BronzeIndirectArgumentBufferLayoutMembers *m_layout; unsigned long long _encodedLength; } IABEncoderMember;
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
- (void)setArgumentBuffer:(id)a0 offset:(unsigned long long)a1;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setComputePipelineState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setComputePipelineStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setIndirectCommandBuffer:(id)a0 atIndex:(unsigned long long)a1;
- (void)setIndirectCommandBuffers:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setRenderPipelineStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithLayout:(id)a0 device:(id)a1;

@end
