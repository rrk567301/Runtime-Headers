@class NSString;
@protocol MTLCommandQueue, MTLDevice, PGDeserializerObjectDelegate;

@interface _PGDeserializer : NSObject <PGDeserializer, MTLDeserializationContext> {
    id<MTLCommandQueue> _commandQueue;
    id<PGDeserializerObjectDelegate> _objectDelegate;
}

@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)newDepthStencilStateWithDescriptor:(const struct { unsigned int x0; struct { unsigned char x0 : 3; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 26; struct { unsigned char x0 : 3; unsigned char x1 : 3; unsigned char x2 : 3; unsigned char x3 : 3; unsigned int x4 : 20; unsigned int x5; unsigned int x6; } x5; struct { unsigned char x0 : 3; unsigned char x1 : 3; unsigned char x2 : 3; unsigned char x3 : 3; unsigned int x4 : 20; unsigned int x5; unsigned int x6; } x6; } x1; } *)a0;
- (id)newSamplerStateWithDescriptor:(const struct { unsigned int x0; struct { unsigned char x0 : 2; unsigned char x1 : 2; unsigned char x2 : 1; unsigned char x3 : 3; unsigned char x4 : 4; unsigned char x5 : 4; unsigned char x6 : 4; unsigned char x7 : 4; unsigned char x8 : 2; unsigned char x9 : 5; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 3; unsigned int x13 : 28; float x14; float x15; unsigned long long x16; } x1; } *)a0;
- (id)newTextureViewWithPixelFormat:(struct { unsigned int x0; unsigned int x1; unsigned short x2; } *)a0;
- (id)newTextureWithDescriptor:(struct { unsigned int x0; struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 8; unsigned short x6 : 16; unsigned int x7; unsigned int x8; unsigned int x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned long long x14; } x1; } *)a0;
- (id)functionWithFunctionRef:(unsigned long long)a0;
- (void)deleteSamplerStateForReference:(unsigned int)a0;
- (id)decodeSegmentWithHeader:(struct { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0 withIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a1 withDecoder:(id)a2 into:(id)a3;
- (void)decodeSegments:(void **)a0 lengths:(unsigned long long *)a1 count:(unsigned long long)a2 into:(id)a3;
- (void)deleteBufferForReference:(unsigned int)a0;
- (void)deleteComputePipelineStateForReference:(unsigned int)a0;
- (void)deleteDepthStencilStateForReference:(unsigned int)a0;
- (void)deleteFenceForReference:(unsigned int)a0;
- (void)deleteFunctionForReference:(unsigned int)a0;
- (void)deleteHeapForReference:(unsigned int)a0;
- (void)deleteObjectWithSerializedData:(const char *)a0 serializedDataSize:(unsigned long long)a1;
- (void)deleteRenderPipelineStateForReference:(unsigned int)a0;
- (void)deleteTextureForReference:(unsigned int)a0;
- (id)getBufferForReference:(unsigned int)a0;
- (id)getComputePipelineStateForReference:(unsigned int)a0;
- (id)getDepthStencilStateForReference:(unsigned int)a0;
- (id)getFenceForReference:(unsigned int)a0;
- (id)getFunctionForReference:(unsigned int)a0;
- (id)getHeapForReference:(unsigned int)a0;
- (id)getRenderPipelineStateForReference:(unsigned int)a0;
- (id)getResourceForReference:(unsigned int)a0;
- (id)getSamplerStateForReference:(unsigned int)a0;
- (id)getTextureForReference:(unsigned int)a0;
- (struct { unsigned long long x0; unsigned long long x1; })heapTextureSizeAndAlignWithSerializedData:(const char *)a0 serializedDataSize:(unsigned long long)a1;
- (id)initWithDevice:(id)a0 objectDelegate:(id)a1;
- (id)newComputePipelineStateWithDescriptor:(struct { unsigned int x0; unsigned int x1; } *)a0 serializedDataSize:(unsigned long long)a1;
- (id)newComputePipelineStateWithSerializedData:(const char *)a0 serializedDataSize:(unsigned long long)a1;
- (id)newDepthStencilStateWithSerializedData:(const char *)a0 serializedDataSize:(unsigned long long)a1;
- (id)newFence:(const struct { unsigned int x0; } *)a0;
- (id)newFenceWithSerializedData:(const char *)a0 serializedDataSize:(unsigned long long)a1;
- (id)newFunctionWithSerializedData:(const char *)a0 serializedDataSize:(unsigned long long)a1 metalLibData:(id)a2;
- (id)newRenderPipelineStateWithDescriptor:(const struct { unsigned int x0; unsigned int x1; } *)a0 serializedDataSize:(unsigned long long)a1;
- (id)newRenderPipelineStateWithSerializedData:(const char *)a0 serializedDataSize:(unsigned long long)a1;
- (id)newSamplerStateWithSerializedData:(const char *)a0 serializedDataSize:(unsigned long long)a1;
- (id)newTextureForSerializedData:(const char *)a0 serializedDataSize:(unsigned long long)a1 ioSurface:(struct __IOSurface { } *)a2;
- (id)newTextureViewWithBuffer:(struct { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned long long x3; struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 8; unsigned short x6 : 16; unsigned int x7; unsigned int x8; unsigned int x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned long long x14; } x4; } *)a0;
- (id)newTextureViewWithSwizzle:(struct { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; struct { unsigned long long x0; unsigned long long x1; } x4; struct { unsigned long long x0; unsigned long long x1; } x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; } *)a0;
- (id)newTextureViewWithTextureType:(struct { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; struct { unsigned long long x0; unsigned long long x1; } x4; struct { unsigned long long x0; unsigned long long x1; } x5; } *)a0;
- (id)newTextureWithHeap:(struct { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 8; unsigned short x6 : 16; unsigned int x7; unsigned int x8; unsigned int x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned long long x14; } x2; unsigned char x3 : 1; unsigned int x4 : 31; unsigned long long x5; } *)a0;
- (id)newTextureWithSerializedData:(const char *)a0 serializedDataSize:(unsigned long long)a1;

@end
