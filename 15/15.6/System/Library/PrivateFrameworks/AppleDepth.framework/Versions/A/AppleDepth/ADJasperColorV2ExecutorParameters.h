@class ADJasperColorV2PipelineParameters;

@interface ADJasperColorV2ExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADJasperColorV2PipelineParameters *pipelineParameters;
@property (nonatomic) char outputHighConfidencePixelsOnly;

- (void).cxx_destruct;
- (id)initForDevice:(id)a0;

@end
