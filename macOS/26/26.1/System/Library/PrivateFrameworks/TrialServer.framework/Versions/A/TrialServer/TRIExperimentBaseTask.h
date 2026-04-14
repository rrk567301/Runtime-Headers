@class _PASLock, TRIExperimentDeployment;

@interface TRIExperimentBaseTask : TRIBaseTask <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIExperimentDeployment *experiment;

- (id)metrics;
- (void)addMetric:(id)a0;
- (id)dimensions;
- (id)initWithExperiment:(id)a0;
- (void)mergeTelemetry:(id)a0;
- (id)trialSystemTelemetry;
- (unsigned long long)hash;
- (id)tags;
- (id)description;
- (void)addDimension:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)containerForFirstNamespaceInExperimentWithContext:(id)a0;
- (id)nextTasksForRunStatus:(int)a0;

@end
