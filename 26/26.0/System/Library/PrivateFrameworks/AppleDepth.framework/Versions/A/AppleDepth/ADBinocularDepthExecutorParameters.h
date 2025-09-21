@class ADBinocularDepthPipelineParameters;

@interface ADBinocularDepthExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADBinocularDepthPipelineParameters *pipelineParameters;
@property (nonatomic) double coreAnalyticsEventInterval;
@property (nonatomic) double saturationCheckInterval;
@property (nonatomic) float saturationThreshold;

- (void).cxx_destruct;
- (id)initForPipeline:(id)a0;

@end
