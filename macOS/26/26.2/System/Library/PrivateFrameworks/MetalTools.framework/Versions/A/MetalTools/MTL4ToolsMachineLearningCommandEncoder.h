@class NSString;
@protocol MTL4CommandAllocator, MTL4CommandBuffer;

@interface MTL4ToolsMachineLearningCommandEncoder : MTL4ToolsCommandEncoder <MTL4MachineLearningCommandEncoderGGDSPI>

@property (copy) NSString *label;
@property (readonly, nonatomic) id<MTL4CommandBuffer> commandBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<MTL4CommandAllocator> commandAllocator;

- (void)setPipelineState:(id)a0;
- (unsigned long long)startEventValue;
- (void)dispatchNetworkWithIntermediatesHeap:(id)a0;
- (void)endEncodingWithSignalEvent:(id)a0 waitEvent:(id)a1 signalValue:(unsigned long long)a2 waitValue:(unsigned long long)a3;
- (unsigned long long)endEventValue;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (void)setArgumentTable:(id)a0;

@end
