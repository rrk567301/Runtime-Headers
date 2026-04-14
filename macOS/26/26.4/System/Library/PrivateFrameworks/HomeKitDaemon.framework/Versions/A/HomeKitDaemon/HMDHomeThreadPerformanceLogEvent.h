@class NSString, NSDictionary, NSUUID;

@interface HMDHomeThreadPerformanceLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) double latency;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithMetricsMode:(long long)a0 latency:(double)a1 homeUUID:(id)a2;

- (id)initWithMetricsMode:(long long)a0 latency:(double)a1 homeUUID:(id)a2;

@end
