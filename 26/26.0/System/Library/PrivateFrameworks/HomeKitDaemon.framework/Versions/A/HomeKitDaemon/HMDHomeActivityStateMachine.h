@class NSArray, HMDHomeActivityStateTimedHoldInfo, NSString, HMDHomeActivityState;
@protocol HMDHomeActivityStateManagerDataSource, HMDHomeActivityStateMachineTransitionDelegate;

@interface HMDHomeActivityStateMachine : HMDHierarchicalStateMachine <HMFLogging, HMDHomeActivityStateAggregatorStateChangeDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSArray *aggregators;
@property (readonly, nonatomic) id<HMDHomeActivityStateManagerDataSource> dataSource;
@property (readonly) double holdTimeOutInSeconds;
@property (readonly, nonatomic) HMDHomeActivityStateTimedHoldInfo *initialStateHoldDetails;
@property (readonly, nonatomic) HMDHomeActivityState *currentHomeActivityState;
@property (weak, nonatomic) id<HMDHomeActivityStateMachineTransitionDelegate> stateTransitionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)canHoldBeAppliedToState:(unsigned long long)a0;
+ (long long)reasonForStateEvent:(id)a0;

- (void)configure;
- (void)createStateMachine;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)_aggregatorOfType:(unsigned long long)a0;
- (void)cancelOngoingHoldFromUserRequest:(id)a0;
- (id)comingHomeAggregator;
- (void)handleHomeActivityStateChange:(unsigned long long)a0 withHoldInfo:(id)a1 transitionalStateEndDate:(id)a2 reason:(long long)a3;
- (void)handleStateChangeForAggregatorOfType:(unsigned long long)a0;
- (void)handleUpdateHomeActivityStateFromUserRequest:(id)a0;
- (id)homeAwayAggregator;
- (id)initWithDataSource:(id)a0 aggregators:(id)a1 initialStateHoldDetails:(id)a2;
- (id)initWithDataSource:(id)a0 aggregators:(id)a1 initialStateHoldDetails:(id)a2 queue:(id)a3;
- (void)probeHomeActivityState;
- (id)vacationAggregator;

@end
