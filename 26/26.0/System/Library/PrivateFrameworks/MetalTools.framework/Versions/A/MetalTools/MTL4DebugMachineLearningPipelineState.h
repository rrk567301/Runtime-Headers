@class MTL4MachineLearningPipelineDescriptor;

@interface MTL4DebugMachineLearningPipelineState : MTL4ToolsMachineLearningPipelineState

@property (readonly, nonatomic) MTL4MachineLearningPipelineDescriptor *descriptor;

- (void)dealloc;
- (id)initWithMLPipelineState:(id)a0 parent:(id)a1 descriptor:(id)a2;

@end
