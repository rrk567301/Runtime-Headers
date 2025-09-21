@class NSString, NSDictionary, NSUUID;

@interface HMDRegionStateCorrectnessLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly) char firstAccessoryReachable;
@property (readonly) char regionStateAtHome;
@property (readonly) char regionStateNearByHome;
@property (readonly) char regionStateUnknown;
@property (readonly) char isStateCorrect;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updateWithFirstAccessory:(long long)a0 nearbyHome:(long long)a1;
+ (id)updateWithRegion:(long long)a0 nearbyHome:(long long)a1 accessoryReachable:(char)a2;

- (id)initWithReason:(unsigned long long)a0 firstAccessoryReachable:(char)a1 regionStateAtHome:(long long)a2 regionStateNearByHome:(long long)a3 isStateCorrect:(char)a4;

@end
