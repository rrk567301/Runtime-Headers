@class NSString, NSDictionary, NSUUID, NSNumber;

@interface HMDAccessoryDarkPollLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) long long logType;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *suspendedState;
@property (readonly, nonatomic) BOOL reachable;
@property (readonly, nonatomic) BOOL remotelyReachable;
@property (readonly, nonatomic) NSNumber *minimumIntervalMinutes;
@property (readonly, nonatomic) long long wakeType;
@property (readonly, nonatomic) unsigned char wolanVersion;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0 suspendedState:(id)a1 reachable:(BOOL)a2 remotelyReachable:(BOOL)a3 logType:(long long)a4;

@end
