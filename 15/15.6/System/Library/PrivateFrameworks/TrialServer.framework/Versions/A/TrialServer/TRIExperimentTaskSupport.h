@class _PASLock, TRIExperimentDeployment;

@interface TRIExperimentTaskSupport : NSObject <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIExperimentDeployment *experimentDeployment;

- (void).cxx_destruct;
- (id)tags;
- (id)metrics;
- (id)dimensions;
- (void)addMetric:(id)a0;
- (id)trialSystemTelemetry;
- (void)mergeTelemetry:(id)a0;
- (void)addDimension:(id)a0;
- (id)initWithExperimentDeployment:(id)a0;
- (void)setIdentifyTelemetryAsV1Rollout:(char)a0;

@end
