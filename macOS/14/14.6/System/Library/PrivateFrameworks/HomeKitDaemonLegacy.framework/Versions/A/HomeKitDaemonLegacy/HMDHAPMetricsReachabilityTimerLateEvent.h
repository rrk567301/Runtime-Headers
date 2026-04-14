@class NSNumber;

@interface HMDHAPMetricsReachabilityTimerLateEvent : HMDHAPMetrics

@property (readonly, nonatomic) NSNumber *duration;
@property (readonly, nonatomic) NSNumber *expectedDuration;

- (void).cxx_destruct;
- (id)coreAnalyticsEventName;
- (id)coreAnalyticsEventDictionary;
- (id)initWithAccessory:(id)a0 duration:(id)a1 expectedDuration:(id)a2;

@end
