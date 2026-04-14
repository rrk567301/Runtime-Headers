@class _PASLock, TRIExperimentDeployment;

@interface TRIExperimentBaseTask : TRIBaseTask <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIExperimentDeployment *experiment;

- (id)trialSystemTelemetry;
- (void)addMetric:(id)a0;
- (id)tags;
- (id)dimensions;
- (unsigned long long)hash;
- (id)metrics;
- (void)mergeTelemetry:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithExperiment:(id)a0;
- (id)description;
- (void)addDimension:(id)a0;
- (id)containerForFirstNamespaceInExperimentWithContext:(id)a0;
- (id)nextTasksForRunStatus:(int)a0;

@end
