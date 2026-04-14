@class NSNumber;

@interface HMDHAPMetricsReachabilityTimerLateEvent : HMDHAPMetrics

@property (readonly, nonatomic) NSNumber *actualDuration;
@property (readonly, nonatomic) NSNumber *expectedDuration;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0 actualDuration:(id)a1 expectedDuration:(id)a2;

@end
