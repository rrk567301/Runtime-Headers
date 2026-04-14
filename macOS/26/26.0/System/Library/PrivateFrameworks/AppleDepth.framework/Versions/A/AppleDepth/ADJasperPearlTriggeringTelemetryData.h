@interface ADJasperPearlTriggeringTelemetryData : NSObject

@property (nonatomic) double caLastTriggerLastFrameTimestamp;
@property (nonatomic) float caLastTriggerLastFrameTemperature;
@property (nonatomic) double caCurrentTriggerFirstFrameTimestamp;
@property (nonatomic) float caCurrentTriggerFirstFrameTemperature;
@property (nonatomic) double caCurrentTriggerLastFrameTimestamp;
@property (nonatomic) float caCurrentTriggerLastFrameTemperature;
@property (nonatomic) unsigned long long caCurrentTriggerFrameCount;
@property (nonatomic) BOOL caCurrentTriggerEndReasonIsConvergence;
@property (nonatomic) BOOL caCurrentTriggerEndReasonIsMaxFrameCount;
@property (nonatomic) BOOL caCurrentTriggerEndReasonIsOutputValidationMetricIncreased;

- (id)init;
- (void)notifyNewFrameArrived:(double)a0 temperature:(float)a1;
- (void)notifyTriggeringSessionEnded;
- (void)setTriggeringEndReason:(BOOL)a0 triggerEndReasonIsMaxFrameCount:(BOOL)a1 triggerEndReasonIsValidationMetricIncreased:(BOOL)a2;

@end
