@class _PASLock, TRIExperimentDeployment;

@interface TRIExperimentBaseTask : TRIBaseTask <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIExperimentDeployment *experiment;

- (id)tags;
- (id)trialSystemTelemetry;
- (id)dimensions;
- (void)addMetric:(id)a0;
- (void)mergeTelemetry:(id)a0;
- (void)addDimension:(id)a0;
- (id)description;
- (id)initWithExperiment:(id)a0;
- (id)metrics;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)containerForFirstNamespaceInExperimentWithContext:(id)a0;
- (id)nextTasksForRunStatus:(int)a0;

@end
