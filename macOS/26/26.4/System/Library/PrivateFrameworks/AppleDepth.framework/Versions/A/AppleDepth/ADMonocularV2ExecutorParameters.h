@class ADMonocularV2PipelineParameters;

@interface ADMonocularV2ExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADMonocularV2PipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)init;
- (id)initForPipeline:(id)a0;

@end
