@class HMDHomeActivityHomeAwayAggregatorState, HMDHomeActivityHomeAwayUserStatesDetails, NSString;

@interface HMDHomeActivityHomeAwayAggregator : HMDHomeActivityStateAggregator <HMFLogging>

@property (readonly, nonatomic) HMDHomeActivityHomeAwayAggregatorState *computedState;
@property (readonly, copy) HMDHomeActivityHomeAwayUserStatesDetails *userActivityStatesDetails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (unsigned long long)contributorType;

- (id)initWithDataSource:(id)a0;
- (void)handleRestrictedGuestScheduleEndedForUserUUID:(id)a0;
- (void)handleRestrictedGuestScheduleStartedForUserUUID:(id)a0;
- (BOOL)handleUpdateFromDetector:(id)a0;
- (BOOL)isReportTimestampWithinValidPeriod:(id)a0;
- (BOOL)isStateEquivalentForExistingReport:(id)a0 newReport:(id)a1;
- (BOOL)processUserPresenceWithAuthStatus:(id)a0 regionStatus:(id)a1 updateReason:(id)a2 forUser:(id)a3 fromDevice:(id)a4;

@end
