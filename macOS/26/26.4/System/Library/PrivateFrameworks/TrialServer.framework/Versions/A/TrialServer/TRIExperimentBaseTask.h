@class _PASLock, TRIExperimentDeployment;

@interface TRIExperimentBaseTask : TRIBaseTask <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIExperimentDeployment *experiment;

- (id)dimensions;
- (id)trialSystemTelemetry;
- (id)tags;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addDimension:(id)a0;
- (id)metrics;
- (unsigned long long)hash;
- (void)mergeTelemetry:(id)a0;
- (id)initWithExperiment:(id)a0;
- (id)description;
- (void)addMetric:(id)a0;
- (id)containerForFirstNamespaceInExperimentWithContext:(id)a0;
- (id)nextTasksForRunStatus:(int)a0;

@end
