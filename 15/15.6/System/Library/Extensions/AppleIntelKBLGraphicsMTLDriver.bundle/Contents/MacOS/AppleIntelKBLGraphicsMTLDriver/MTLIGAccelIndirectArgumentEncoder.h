@class _MTLIndirectArgumentBufferLayout, NSString;
@protocol MTLDevice;

@interface MTLIGAccelIndirectArgumentEncoder : MTLIOAccelIndirectArgumentEncoder <MTLIndirectArgumentEncoderSPI> {
    struct IGAccelIndirectArgumentEncoder { id x0; id x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; char *x6; unsigned int x7; struct IntelStateHeapAllocator *x8; struct IntelStateHeapAllocator *x9; struct IntelStateHeapAllocator *x10; } *_pIGIndirectArgumentEncoder;
    unsigned long long _encodedLength;
    unsigned long long _encodedAlignment;
}

@property (readonly, nonatomic) _MTLIndirectArgumentBufferLayout *layout;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long encodedLength;
@property (readonly) unsigned long long alignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setRenderPipelineState:(id)a0 atIndex:(unsigned long long)a1;
- (void *)constantDataAtIndex:(unsigned long long)a0;
- (void)setArgumentBuffer:(id)a0 offset:(unsigned long long)a1;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setComputePipelineState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setComputePipelineStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setRenderPipelineStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setVisibleFunctionTable:(id)a0 atIndex:(unsigned long long)a1;
- (void)setVisibleFunctionTables:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithLayout:(id)a0 device:(id)a1;

@end
