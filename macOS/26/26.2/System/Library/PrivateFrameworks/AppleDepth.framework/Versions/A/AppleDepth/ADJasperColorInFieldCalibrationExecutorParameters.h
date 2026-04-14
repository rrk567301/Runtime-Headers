@class ADJasperColorInFieldCalibrationPipelineParameters;

@interface ADJasperColorInFieldCalibrationExecutorParameters : ADExecutorParameters

@property (nonatomic) BOOL reportTelemetry;
@property (readonly, retain, nonatomic) ADJasperColorInFieldCalibrationPipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)init;
- (id)initForDevice:(id)a0;
- (id)initWithPipelineParameters:(id)a0;

@end
