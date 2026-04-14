@class NSString;
@protocol MTL4ArgumentTable, MTL4MachineLearningPipelineState, MTLSharedEvent, MTL4CommandBuffer, MTL4CommandAllocator;

@interface _MTL4MachineLearningCommandEncoder : _MTL4CommandEncoder <MTL4MachineLearningCommandEncoderGGDSPI> {
    id<MTL4MachineLearningPipelineState> _currentPipelineState;
    id<MTL4ArgumentTable> _currentArgumentTable;
    void *_dispatchList;
    id<MTLSharedEvent> _event;
}

@property (copy) NSString *label;
@property (readonly, nonatomic) id<MTL4CommandBuffer> commandBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<MTL4CommandAllocator> commandAllocator;

- (void)setPipelineState:(id)a0;
- (void)dealloc;
- (id)initWithDevice:(id)a0;
- (id)event;
- (unsigned long long)startEventValue;
- (void)dispatchNetworkWithIntermediatesHeap:(id)a0;
- (void)endEncoding;
- (void)endEncodingWithSignalEvent:(id)a0 waitEvent:(id)a1 signalValue:(unsigned long long)a2 waitValue:(unsigned long long)a3;
- (unsigned long long)endEventValue;
- (void)setArgumentTable:(id)a0;
- (void)encodeToCommandQueue:(id)a0;
- (id)initWithCommandBuffer:(id)a0 allocator:(id)a1;

@end
