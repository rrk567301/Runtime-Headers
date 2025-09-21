@class NSString, NSDictionary, NSUUID, NSNumber;

@interface HMDHomeActivityStateTransitionLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) unsigned long long fromState;
@property (readonly, nonatomic) unsigned long long toState;
@property (readonly, nonatomic) NSString *transitionType;
@property (readonly, nonatomic) long long reason;
@property (readonly, nonatomic) NSNumber *automatedCount;
@property (readonly, nonatomic) NSNumber *automatedHoldEndCount;
@property (readonly, nonatomic) NSNumber *manualHoldEndCount;
@property (readonly, nonatomic) NSNumber *manualHoldStartCount;
@property (readonly, nonatomic) NSNumber *otherCount;
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
- (id)initWithHomeUUID:(id)a0 fromState:(unsigned long long)a1 toState:(unsigned long long)a2 reason:(long long)a3;

@end
