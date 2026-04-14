@class HMDHomeActivityHomeAwayAggregator, NSString, HMDHomeActivityVacationAggregatorState;

@interface HMDHomeActivityVacationAggregator : HMDHomeActivityStateAggregator <HMFLogging> {
    unsigned long long _state;
}

@property (readonly, nonatomic) HMDHomeActivityVacationAggregatorState *computedState;
@property (retain, nonatomic) HMDHomeActivityHomeAwayAggregator *homeAwayAggregator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (unsigned long long)contributorType;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (id)_computedState;
- (id)_vacationTimestampFromHomeAwayAggregator:(id)a0;
- (id)initWithStorage:(id)a0 dataSource:(id)a1;
- (BOOL)isStateEquivalentForExistingReport:(id)a0 newReport:(id)a1;
- (double)moveToVacationTimeIntervalFromDataSource:(id)a0;
- (id)nextRefreshTimestamp;

@end
