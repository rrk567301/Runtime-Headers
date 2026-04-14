@class _PASLock, TRIExperimentDeployment;

@interface TRIExperimentBaseTask : TRIBaseTask <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIExperimentDeployment *experiment;

- (id)trialSystemTelemetry;
- (id)metrics;
- (void)addMetric:(id)a0;
- (id)tags;
- (id)description;
- (void)addDimension:(id)a0;
- (void).cxx_destruct;
- (id)dimensions;
- (BOOL)isEqual:(id)a0;
- (id)initWithExperiment:(id)a0;
- (unsigned long long)hash;
- (void)mergeTelemetry:(id)a0;
- (id)containerForFirstNamespaceInExperimentWithContext:(id)a0;
- (id)nextTasksForRunStatus:(int)a0;

@end
