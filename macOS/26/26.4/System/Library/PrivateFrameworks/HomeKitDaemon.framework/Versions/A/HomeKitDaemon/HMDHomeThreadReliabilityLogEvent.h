@class NSString, NSDictionary, NSUUID;

@interface HMDHomeThreadReliabilityLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) long long expectedNotificationCount;
@property (readonly, nonatomic) long long receivedNotificationCount;
@property (readonly, nonatomic) long long readCharacteristicCount;
@property (readonly, nonatomic) long long expectedReachableCount;
@property (readonly, nonatomic) long long reachableCount;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithMetricsMode:(long long)a0 expectedNotificationCount:(long long)a1 receivedNotificationCount:(long long)a2 readCharacteristicCount:(long long)a3 expectedReachableCount:(long long)a4 reachableCount:(long long)a5 homeUUID:(id)a6;

- (id)initWithMetricsMode:(long long)a0 expectedNotificationCount:(long long)a1 receivedNotificationCount:(long long)a2 readCharacteristicCount:(long long)a3 expectedReachableCount:(long long)a4 reachableCount:(long long)a5 homeUUID:(id)a6;

@end
