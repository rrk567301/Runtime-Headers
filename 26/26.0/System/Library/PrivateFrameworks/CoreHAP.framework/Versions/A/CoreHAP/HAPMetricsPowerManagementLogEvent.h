@class NSString, NSDictionary, NSUUID;

@interface HAPMetricsPowerManagementLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) long long logType;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initForHAPAccessory:(id)a0 withLogType:(long long)a1;
- (id)initForSuspendedAccessory:(id)a0;

@end
