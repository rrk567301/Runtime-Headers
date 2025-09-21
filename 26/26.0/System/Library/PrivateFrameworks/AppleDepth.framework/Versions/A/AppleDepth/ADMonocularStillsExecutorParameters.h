@class ADMonocularStillsPipelineParameters;

@interface ADMonocularStillsExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADMonocularStillsPipelineParameters *pipelineParameters;

- (id)init;
- (void).cxx_destruct;
- (id)initForPipeline:(id)a0;

@end
