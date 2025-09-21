@class NSString, NSDictionary, NSUUID;

@interface HMDRemoteDeviceReachabilityChangeLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly) unsigned long long reason;
@property (readonly) char reachable;
@property (readonly) char targetSupportsIDSPresence;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithReason:(unsigned long long)a0 reachable:(char)a1 targetSupportsIDSPresence:(char)a2;

@end
