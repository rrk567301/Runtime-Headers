@class TRIRolloutDeployment, _PASLock;

@interface TRIRolloutTaskSupport : NSObject <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIRolloutDeployment *rolloutDeployment;

- (id)dimensions;
- (id)trialSystemTelemetry;
- (id)tags;
- (void).cxx_destruct;
- (void)addDimension:(id)a0;
- (id)metrics;
- (void)mergeTelemetry:(id)a0;
- (void)addMetric:(id)a0;
- (id)initWithRolloutDeployment:(id)a0;

@end
