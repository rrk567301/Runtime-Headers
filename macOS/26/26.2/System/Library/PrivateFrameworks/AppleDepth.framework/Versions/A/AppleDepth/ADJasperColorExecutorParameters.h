@class ADJasperColorPipelineParameters;

@interface ADJasperColorExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADJasperColorPipelineParameters *pipelineParameters;
@property (nonatomic) BOOL useAlphaMapForTemporalConsistency;
@property (nonatomic) unsigned long long temporalConsistencyMethod;
@property (nonatomic) BOOL ignoreDistortionInDepthReprojection;

- (void).cxx_destruct;
- (id)initForDevice:(id)a0;

@end
