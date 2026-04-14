@class ADPearlColorInFieldCalibrationPipelineParameters;

@interface ADPearlColorInFieldCalibrationExecutorParameters : ADExecutorParameters

@property (nonatomic) BOOL reportTelemetry;
@property (readonly, retain, nonatomic) ADPearlColorInFieldCalibrationPipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)init;
- (id)initForPipeline:(id)a0;
- (id)initWithPipelineParameters:(id)a0;

@end
