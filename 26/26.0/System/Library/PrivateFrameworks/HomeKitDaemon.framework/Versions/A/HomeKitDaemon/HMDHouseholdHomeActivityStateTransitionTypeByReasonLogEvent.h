@class NSString, NSDictionary, NSUUID;

@interface HMDHouseholdHomeActivityStateTransitionTypeByReasonLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) unsigned long long fromState;
@property (readonly, nonatomic) unsigned long long toState;
@property (readonly, nonatomic) long long automatedCount;
@property (readonly, nonatomic) long long automatedHoldEndCount;
@property (readonly, nonatomic) long long manualHoldEndCount;
@property (readonly, nonatomic) long long manualHoldStartCount;
@property (readonly, nonatomic) long long otherCount;
@property (readonly, nonatomic) long long totalCount;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0;
- (id)initWithHomeUUID:(id)a0 fromState:(unsigned long long)a1 toState:(unsigned long long)a2 automatedCount:(long long)a3 automatedHoldEndCount:(long long)a4 manualHoldEndCount:(long long)a5 manualHoldStartCount:(long long)a6 otherCount:(long long)a7;

@end
