@class TRIRolloutDeployment, _PASLock;

@interface TRIRolloutTaskSupport : NSObject <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIRolloutDeployment *rolloutDeployment;

- (id)trialSystemTelemetry;
- (void)addMetric:(id)a0;
- (id)tags;
- (id)dimensions;
- (id)metrics;
- (void)mergeTelemetry:(id)a0;
- (void).cxx_destruct;
- (id)initWithRolloutDeployment:(id)a0;
- (void)addDimension:(id)a0;

@end
