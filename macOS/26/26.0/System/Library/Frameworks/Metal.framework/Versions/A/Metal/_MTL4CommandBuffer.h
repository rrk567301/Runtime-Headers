@class NSString, NSMutableArray;
@protocol MTLDevice, MTLLogState, MTLBuffer, MTL4CommandAllocator;

@interface _MTL4CommandBuffer : _MTLObjectWithLabel <MTL4CommandBufferGGDSPI> {
    NSMutableArray *_mlCommandEncoders;
}

@property (readonly) unsigned long long globalTraceObjectID;
@property (retain, nonatomic) id<MTLLogState> logState;
@property (readonly, nonatomic) unsigned long long currentGeneration;
@property (retain, nonatomic) id<MTLBuffer> privateData;
@property (nonatomic) unsigned long long privateDataOffset;
@property (readonly, nonatomic) id<MTL4CommandAllocator> commandAllocator;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDevice:(id)a0;
- (void)useResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (void)encodeSignalEvent:(id)a0 value:(unsigned long long)a1;
- (void)encodeWaitForEvent:(id)a0 value:(unsigned long long)a1;
- (id)computeCommandEncoder;
- (void)useInternalResidencySet:(id)a0;
- (void)useInternalResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)a0;
- (void)useResidencySet:(id)a0;
- (void)writeTimestampIntoHeap:(id)a0 atIndex:(unsigned long long)a1;
- (void)beginCommandBufferWithAllocator:(id)a0;
- (void)beginCommandBufferWithAllocator:(id)a0 options:(id)a1;
- (id)computeCommandEncoderWithSubstreamCount:(unsigned int)a0;
- (void)endCommandBuffer;
- (id)machineLearningCommandEncoder;
- (id)renderCommandEncoderWithDescriptor:(id)a0;
- (id)renderCommandEncoderWithDescriptor:(id)a0 options:(unsigned long long)a1;
- (void)resetCommandBuffer;
- (void)resolveCounterHeap:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 intoBuffer:(id)a2 atOffset:(unsigned long long)a3 waitFence:(id)a4 updateFence:(id)a5;
- (void)resolveCounterHeap:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 intoBuffer:(struct MTL4BufferRange { unsigned long long x0; unsigned long long x1; })a2 waitFence:(id)a3 updateFence:(id)a4;
- (id)sampledComputeCommandEncoder:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a0 capacity:(unsigned long long)a1;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)a0 programInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a1 capacity:(unsigned long long)a2;
- (void)clearMLCommandEncoderList;
- (id)mlCommandEncoders;
- (void)registerMLEncoder:(id)a0;
- (void)setUpPrivateData:(id)a0;
- (void)setupShaderLoggingWithLogState:(id)a0 allocator:(id)a1;

@end
