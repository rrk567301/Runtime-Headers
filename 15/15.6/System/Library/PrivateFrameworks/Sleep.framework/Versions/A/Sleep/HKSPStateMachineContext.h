@class HKSPStateMachineState;

@interface HKSPStateMachineContext : NSObject

@property (nonatomic) char isInitializing;
@property (retain, nonatomic) HKSPStateMachineState *nextState;
@property (retain, nonatomic) HKSPStateMachineState *previousState;
@property (readonly, nonatomic) char hasStateTransition;
@property (readonly, nonatomic) char hasStateTransitionOrInitializing;
@property (readonly, nonatomic) char hasStateTransitionAndNotInitializing;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)contextWithNextState:(id)a0 previousState:(id)a1 isInitializing:(char)a2;
- (id)initWithNextState:(id)a0 previousState:(id)a1 isInitializing:(char)a2;

@end
