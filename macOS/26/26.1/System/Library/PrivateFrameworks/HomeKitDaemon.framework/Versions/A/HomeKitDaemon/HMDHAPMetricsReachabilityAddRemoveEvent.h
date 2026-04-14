@class NSNumber;

@interface HMDHAPMetricsReachabilityAddRemoveEvent : HMDHAPMetrics

@property (readonly, nonatomic) unsigned long long addRemoveEvent;
@property (readonly, nonatomic) NSNumber *linkType;

- (id)coreAnalyticsEventDictionary;
- (void).cxx_destruct;
- (id)coreAnalyticsEventName;
- (id)initWithAccessory:(id)a0 hmdAddRemoveEvent:(unsigned long long)a1 forLinkType:(id)a2;

@end
