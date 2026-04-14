@class ADVisualDepthPipelineParameters;

@interface ADVisualDepthExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADVisualDepthPipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)initForPipeline:(id)a0;

@end
