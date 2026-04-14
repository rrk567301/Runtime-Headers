@class _PASLock, TRIExperimentDeployment;

@interface TRIExperimentBaseTask : TRIBaseTask <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIExperimentDeployment *experiment;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)tags;
- (id)dimensions;
- (id)metrics;
- (void)addMetric:(id)a0;
- (id)trialSystemTelemetry;
- (id)nextTasksForRunStatus:(int)a0;
- (void)addDimension:(id)a0;
- (void)mergeTelemetry:(id)a0;
- (void)logAsRollout:(BOOL)a0;
- (id)initWithExperiment:(id)a0;
- (id)containerForFirstNamespaceInExperimentWithContext:(id)a0;

@end
