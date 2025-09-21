@class MTL4DebugCommandEncoder, MTL4ToolsMachineLearningPipelineState, MTL4ToolsArgumentTable;
@protocol MTL4MachineLearningPipelineState;

@interface MTL4DebugMachineLearningCommandEncoder : MTL4ToolsMachineLearningCommandEncoder {
    MTL4DebugCommandEncoder *_debugCommandEncoder;
    MTL4ToolsMachineLearningPipelineState *_currentPipelineState;
    MTL4ToolsArgumentTable *_currentArgumentTable;
}

@property (readonly, nonatomic) id<MTL4MachineLearningPipelineState> mlPipelineState;

- (void)setPipelineState:(id)a0;
- (void)dealloc;
- (id)commandBuffer;
- (void)updateFence:(id)a0 afterEncoderStages:(unsigned long long)a1;
- (void)barrierAfterEncoderStages:(unsigned long long)a0 beforeEncoderStages:(unsigned long long)a1 visibilityOptions:(unsigned long long)a2;
- (void)barrierAfterQueueStages:(unsigned long long)a0 beforeStages:(unsigned long long)a1 visibilityOptions:(unsigned long long)a2;
- (void)barrierAfterStages:(unsigned long long)a0 beforeQueueStages:(unsigned long long)a1 visibilityOptions:(unsigned long long)a2;
- (void)dispatchNetworkWithIntermediatesHeap:(id)a0;
- (void)endEncoding;
- (id)initWithMLCommandEncoder:(id)a0 commandBuffer:(id)a1;
- (void)setArgumentTable:(id)a0;
- (void)waitForFence:(id)a0 beforeEncoderStages:(unsigned long long)a1;

@end
