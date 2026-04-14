@class ADMetricDepthPipelineParameters;

@interface ADMetricDepthExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADMetricDepthPipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)initForPipeline:(id)a0;

@end
