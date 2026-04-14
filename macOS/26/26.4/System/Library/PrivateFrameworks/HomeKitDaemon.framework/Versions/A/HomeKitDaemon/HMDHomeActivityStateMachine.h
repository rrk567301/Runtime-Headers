@class HMDHomeActivityState, NSString, HMDHomeActivityStateTimedHoldInfo;
@protocol HMDHomeActivityStateMachineTransitionDelegate, HMDHomeActivityStateManagerDataSource, HMDHomeActivityStateAggregatorStateDataSource;

@interface HMDHomeActivityStateMachine : HMDHierarchicalStateMachine <HMFLogging, HMDHomeActivityStateAggregatorStateChangeDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) id<HMDHomeActivityStateManagerDataSource> dataSource;
@property (readonly, nonatomic) id<HMDHomeActivityStateAggregatorStateDataSource> aggregatorStateDataSource;
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
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)cancelOngoingHoldFromUserRequest:(id)a0;
- (void)handleHomeActivityStateChange:(unsigned long long)a0 withHoldInfo:(id)a1 transitionalStateEndDate:(id)a2 reason:(long long)a3;
- (void)handleStateChangeForAggregatorOfType:(unsigned long long)a0;
- (void)handleUpdateHomeActivityStateFromUserRequest:(id)a0;
- (id)initWithDataSource:(id)a0 aggregatorStateDataSource:(id)a1 initialStateHoldDetails:(id)a2;
- (id)initWithDataSource:(id)a0 aggregatorStateDataSource:(id)a1 initialStateHoldDetails:(id)a2 queue:(id)a3;
- (void)probeHomeActivityState;

@end
