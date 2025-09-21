@class ADJasperColorStillsPipelineParameters;

@interface ADJasperColorStillsExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADJasperColorStillsPipelineParameters *pipelineParameters;
@property (nonatomic) char performJasperToColorTransformCorrection;

- (void).cxx_destruct;
- (id)initForDevice:(id)a0;

@end
