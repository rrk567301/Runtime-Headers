@class TRIRolloutDeployment, _PASLock;

@interface TRIRolloutTaskSupport : NSObject <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIRolloutDeployment *rolloutDeployment;

- (id)metrics;
- (void)addMetric:(id)a0;
- (id)dimensions;
- (void)mergeTelemetry:(id)a0;
- (id)trialSystemTelemetry;
- (id)tags;
- (void)addDimension:(id)a0;
- (void).cxx_destruct;
- (id)initWithRolloutDeployment:(id)a0;

@end
