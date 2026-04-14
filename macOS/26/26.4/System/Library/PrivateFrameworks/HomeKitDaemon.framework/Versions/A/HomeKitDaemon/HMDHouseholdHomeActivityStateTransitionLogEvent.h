@class NSString, NSDictionary, NSUUID;

@interface HMDHouseholdHomeActivityStateTransitionLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) long long homeCount;
@property (readonly, nonatomic) long long awayCount;
@property (readonly, nonatomic) long long vacationCount;
@property (readonly, nonatomic) long long comingHomeCount;
@property (readonly, nonatomic) long long comingHomeFromVacationCount;
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
- (id)initWithHomeUUID:(id)a0 homeCount:(long long)a1 awayCount:(long long)a2 vacationCount:(long long)a3 comingHomeCount:(long long)a4 comingHomeFromVacationCount:(long long)a5 automatedCount:(long long)a6 automatedHoldEndCount:(long long)a7 manualHoldEndCount:(long long)a8 manualHoldStartCount:(long long)a9 otherCount:(long long)a10;

@end
