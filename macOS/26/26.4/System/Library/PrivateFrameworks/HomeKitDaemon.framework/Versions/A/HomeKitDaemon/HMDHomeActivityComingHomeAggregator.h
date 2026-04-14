@class HMDHomeActivityComingHomeAggregatorState, NSString;

@interface HMDHomeActivityComingHomeAggregator : HMDHomeActivityStateAggregator <HMDHomeActivityStateAggregatedComingHomeStateProviding>

@property (readonly, nonatomic) HMDHomeActivityComingHomeAggregatorState *computedState;
@property (readonly, copy, nonatomic) HMDHomeActivityComingHomeAggregatorState *aggregatedComingHomeState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (unsigned long long)contributorType;

- (id)initWithDataSource:(id)a0;
- (BOOL)isExpiredReport:(id)a0;
- (BOOL)isStateEquivalentForExistingReport:(id)a0 newReport:(id)a1;
- (id)nextRefreshTimestamp;
- (BOOL)shouldSuppressIsComingHome:(BOOL)a0 withStateEnd:(id)a1;
- (double)timeIntervalFromETAExpiredToCurrentDate:(id)a0;
- (double)timeIntervalFromETAReportingThresholdToStateEnd:(id)a0;

@end
