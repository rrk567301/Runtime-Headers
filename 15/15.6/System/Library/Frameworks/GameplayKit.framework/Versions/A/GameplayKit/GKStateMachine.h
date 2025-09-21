@class GKState, NSDictionary;

@interface GKStateMachine : NSObject {
    NSDictionary *_states;
}

@property (readonly, nonatomic) GKState *currentState;

+ (id)stateMachineWithStates:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (char)enterState:(Class)a0;
- (char)canEnterState:(Class)a0;
- (id)initWithStates:(id)a0;
- (id)_dotStringInstanceData;
- (id)_instanceData;
- (void)forceEnterState:(Class)a0;
- (id)stateForClass:(Class)a0;
- (void)updateWithDeltaTime:(double)a0;

@end
