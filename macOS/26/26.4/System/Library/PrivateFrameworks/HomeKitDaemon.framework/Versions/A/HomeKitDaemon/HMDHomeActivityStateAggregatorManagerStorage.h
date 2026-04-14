@class NSUUID, NSString;
@protocol HMDHomeActivityStateManagerDataSource;

@interface HMDHomeActivityStateAggregatorManagerStorage : HMFObject <HMFLogging, HMDHomeActivityStateAggregatorManagerStorage>

@property (retain, nonatomic) id<HMDHomeActivityStateManagerDataSource> dataSource;
@property (retain, nonatomic) NSUUID *homeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)submitHomeActivityStateTransitionFromState:(unsigned long long)a0 toState:(unsigned long long)a1 reason:(long long)a2 fromStateDuration:(id)a3 supportsAdaptiveTemperatureAutomations:(id)a4;
- (void)writeEnabledContributors:(id)a0;
- (void)writeHomeActivityState:(unsigned long long)a0 withHoldInfo:(id)a1 transitionalStateEndDate:(id)a2 reason:(long long)a3;

@end
