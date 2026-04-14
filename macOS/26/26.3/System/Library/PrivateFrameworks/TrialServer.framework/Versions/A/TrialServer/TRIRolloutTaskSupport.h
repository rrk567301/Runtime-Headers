@class TRIRolloutDeployment, _PASLock;

@interface TRIRolloutTaskSupport : NSObject <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIRolloutDeployment *rolloutDeployment;

- (id)trialSystemTelemetry;
- (id)metrics;
- (void)addMetric:(id)a0;
- (id)tags;
- (void)addDimension:(id)a0;
- (void).cxx_destruct;
- (id)dimensions;
- (id)initWithRolloutDeployment:(id)a0;
- (void)mergeTelemetry:(id)a0;

@end
