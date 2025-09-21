@class NSString, NSDictionary, NSUUID, NSNumber;

@interface HMDHomeActivityStateDurationLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) NSNumber *state;
@property (readonly, nonatomic) NSNumber *nextState;
@property (readonly, nonatomic) NSNumber *durationInMinutes;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHomeUUID:(id)a0 state:(id)a1 nextState:(id)a2 durationInMinutes:(id)a3;

@end
