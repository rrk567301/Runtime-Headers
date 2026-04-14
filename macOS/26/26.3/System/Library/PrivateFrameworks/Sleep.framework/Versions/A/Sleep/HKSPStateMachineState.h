@class NSString, HKSPStateMachine;

@interface HKSPStateMachineState : NSObject <HKSPStateMachineEventHandler, NSCopying>

@property (weak, nonatomic) HKSPStateMachine *stateMachine;
@property (readonly, nonatomic) BOOL isCurrentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateState;
- (void)_updateState;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)stateIdentifier;
- (id)stateName;
- (void)didExit;
- (void)willEnter;
- (void)willExit;
- (id)initWithStateMachine:(id)a0;
- (void)_didEnter;
- (void)_didExit;
- (BOOL)_willEnter;
- (void)_willExit;
- (void)didEnter;
- (id)equalsBuilderWithObject:(id)a0;

@end
