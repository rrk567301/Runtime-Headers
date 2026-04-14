@class NSMutableDictionary;

@interface SiriAnalyticsRootClock : SiriAnalyticsLogicalClock <SiriAnalyticsSensitiveConditionsObserverDelegate> {
    NSMutableDictionary *_derivativeClocksByStreamUUID;
    NSMutableDictionary *_sensitiveConditionRanges;
}

- (void).cxx_destruct;
- (id)derivativeClocks;
- (BOOL)isTrackingDerivativeClockByStreamUUID:(id)a0;
- (id)derivativeClockForStreamUUID:(id)a0;
- (id)sensitiveConditionsForTimestamp:(unsigned long long)a0;
- (id)initWithClockIdentifier:(id)a0 timestampOffset:(unsigned long long)a1;
- (void)sensitiveCondition:(unsigned long long)a0 startedAt:(unsigned long long)a1;
- (void)sensitiveCondition:(unsigned long long)a0 endedAt:(unsigned long long)a1;

@end
