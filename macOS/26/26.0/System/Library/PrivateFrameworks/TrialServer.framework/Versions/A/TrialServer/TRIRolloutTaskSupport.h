@class TRIRolloutDeployment, _PASLock;

@interface TRIRolloutTaskSupport : NSObject <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIRolloutDeployment *rolloutDeployment;

- (id)tags;
- (id)trialSystemTelemetry;
- (id)initWithRolloutDeployment:(id)a0;
- (id)dimensions;
- (void)addMetric:(id)a0;
- (void)mergeTelemetry:(id)a0;
- (void)addDimension:(id)a0;
- (id)metrics;
- (void).cxx_destruct;

@end
