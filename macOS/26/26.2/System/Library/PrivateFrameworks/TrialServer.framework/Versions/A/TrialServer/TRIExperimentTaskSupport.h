@class _PASLock, TRIExperimentDeployment;

@interface TRIExperimentTaskSupport : NSObject <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIExperimentDeployment *experimentDeployment;

- (id)trialSystemTelemetry;
- (void)addMetric:(id)a0;
- (id)tags;
- (id)dimensions;
- (id)metrics;
- (void)mergeTelemetry:(id)a0;
- (void).cxx_destruct;
- (void)setIdentifyTelemetryAsV1Rollout:(BOOL)a0;
- (void)addDimension:(id)a0;
- (id)initWithExperimentDeployment:(id)a0;

@end
