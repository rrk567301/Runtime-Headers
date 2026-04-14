@class NSString, NSMutableArray;
@protocol MTLDevice, MTLBuffer, MTL4CommandAllocator;

@interface MTL4ToolsCommandBuffer : MTLToolsObject <MTL4CommandBufferGGDSPI> {
    NSMutableArray *_usedResidencySets;
    id<MTL4CommandAllocator> _commandAllocator;
    id<MTLBuffer> _privateData;
}

@property (copy) NSString *label;
@property (readonly) id<MTL4CommandAllocator> commandAllocator;
@property (readonly, nonatomic) unsigned long long currentGeneration;
@property (retain, nonatomic) id<MTLBuffer> privateData;
@property (nonatomic) unsigned long long privateDataOffset;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)useResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (id)computeCommandEncoder;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)a0;
- (void)useResidencySet:(id)a0;
- (void)writeTimestampIntoHeap:(id)a0 atIndex:(unsigned long long)a1;
- (void)beginCommandBufferWithAllocator:(id)a0;
- (void)beginCommandBufferWithAllocator:(id)a0 options:(id)a1;
- (id)computeCommandEncoderWithSubstreamCount:(unsigned int)a0;
- (void)endCommandBuffer;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (id)machineLearningCommandEncoder;
- (id)renderCommandEncoderWithDescriptor:(id)a0;
- (id)renderCommandEncoderWithDescriptor:(id)a0 options:(unsigned long long)a1;
- (void)resetCommandBuffer;
- (void)resolveCounterHeap:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 intoBuffer:(id)a2 atOffset:(unsigned long long)a3 waitFence:(id)a4 updateFence:(id)a5;
- (void)resolveCounterHeap:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 intoBuffer:(struct MTL4BufferRange { unsigned long long x0; unsigned long long x1; })a2 waitFence:(id)a3 updateFence:(id)a4;
- (id)sampledComputeCommandEncoder:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a0 capacity:(unsigned long long)a1;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)a0 programInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a1 capacity:(unsigned long long)a2;
- (id)unwrappedMTL4RenderPassDescriptor:(id)a0;
- (id)usedResidencySets;

@end
