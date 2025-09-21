@class HMDHomeActivityStateMachine, NSString;
@protocol HMDHomeActivityStateManagerDataSource;

@interface HMDHomeActivityState : HMDHierarchicalStateMachineState <HMFLogging>

@property (class, readonly, nonatomic) unsigned long long stateType;

@property (readonly, nonatomic) HMDHomeActivityState *currentHomeActivityState;
@property (readonly, weak, nonatomic) HMDHomeActivityStateMachine *homeActivityStateMachine;
@property (readonly, nonatomic) id<HMDHomeActivityStateManagerDataSource> dataSource;
@property (getter=shouldAutoNotifySubsystemsAboutStateChange) BOOL autoNotifySubsystemsAboutStateChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithParent:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)checkAndNotifyAllConsumersAboutStateChangeDueToEvent:(id)a0;
- (id)initWithParent:(id)a0 dataSource:(id)a1;
- (BOOL)lookupAndTransitionToState:(unsigned long long)a0 withEvent:(id)a1;
- (void)notifyStateChangeToAllConsumers:(unsigned long long)a0 withHoldInfo:(id)a1 transitionalStateEndDate:(id)a2 reason:(long long)a3;
- (void)onInitialTransition:(id)a0;

@end
