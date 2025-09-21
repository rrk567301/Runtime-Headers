@class ADJasperColorPipelineParameters;

@interface ADJasperColorExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADJasperColorPipelineParameters *pipelineParameters;
@property (nonatomic) char doTemporalConsistency;
@property (nonatomic) char useAlphaMapForTemporalConsistency;
@property (nonatomic) char doComputeNormals;
@property (nonatomic) unsigned long long temporalConsistencyMethod;

- (void).cxx_destruct;
- (id)initForDevice:(id)a0;

@end
