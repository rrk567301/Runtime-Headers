@class ADMonocularVideoPipelineParameters;

@interface ADMonocularVideoExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADMonocularVideoPipelineParameters *pipelineParameters;
@property (nonatomic) BOOL temporalConsistencyActive;

- (void).cxx_destruct;
- (id)initForDevice:(id)a0;

@end
