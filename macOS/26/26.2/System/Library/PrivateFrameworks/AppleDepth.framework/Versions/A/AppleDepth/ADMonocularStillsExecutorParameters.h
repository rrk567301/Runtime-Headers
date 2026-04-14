@class ADMonocularStillsPipelineParameters;

@interface ADMonocularStillsExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADMonocularStillsPipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)init;
- (id)initForPipeline:(id)a0;

@end
