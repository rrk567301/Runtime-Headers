@class NSString, MTL4MachineLearningPipelineReflection;
@protocol MTLDevice;

@interface MTL4ToolsMachineLearningPipelineState : MTLToolsObject <MTL4MachineLearningPipelineStateGGDSPI>

@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) MTL4MachineLearningPipelineReflection *reflection;
@property (readonly) unsigned long long intermediatesHeapSize;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
