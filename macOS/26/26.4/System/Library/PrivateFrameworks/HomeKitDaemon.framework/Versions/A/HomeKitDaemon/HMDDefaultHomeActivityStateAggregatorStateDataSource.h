@class HMDHomeActivityHomeAwayAggregatorState, HMDHomeActivityComingHomeAggregatorState, HMDHomeActivityVacationAggregatorState;
@protocol HMDHomeActivityStateAggregatedHomeAwayStateProviding, HMDHomeActivityStateAggregatedComingHomeStateProviding, HMDHomeActivityStateAggregatedVacationStateProviding;

@interface HMDDefaultHomeActivityStateAggregatorStateDataSource : NSObject <HMDHomeActivityStateAggregatorStateDataSource>

@property (nonatomic, readonly) id<HMDHomeActivityStateAggregatedHomeAwayStateProviding> homeAwayProvider;
@property (nonatomic, readonly) id<HMDHomeActivityStateAggregatedVacationStateProviding> vacationProvider;
@property (nonatomic, readonly) id<HMDHomeActivityStateAggregatedComingHomeStateProviding> comingHomeProvider;
@property (nonatomic, readonly) HMDHomeActivityHomeAwayAggregatorState *homeAwayAggregatorState;
@property (nonatomic, readonly) HMDHomeActivityVacationAggregatorState *vacationAggregatorState;
@property (nonatomic, readonly) HMDHomeActivityComingHomeAggregatorState *comingHomeAggregatorState;

- (void).cxx_destruct;
- (id)init;
- (id)initWithHomeAwayProvider:(id)a0 vacationProvider:(id)a1 comingHomeProvider:(id)a2;

@end
