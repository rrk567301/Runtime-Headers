@class NSMutableDictionary;
@protocol CSStateMachineDelegate;

@interface CSStateMachine : NSObject

@property (nonatomic) long long initialState;
@property (retain, nonatomic) NSMutableDictionary *transitions;
@property (retain, nonatomic) NSMutableDictionary *eventToStateTransitions;
@property (weak, nonatomic) id<CSStateMachineDelegate> delegate;
@property (readonly, nonatomic) long long currentState;

- (id)initWithInitialState:(long long)a0;
- (void)reset;
- (void)performTransitionForEvent:(long long)a0;
- (void)addTransitionFromAnyStateTo:(long long)a0 for:(long long)a1;
- (void)addTransitionFrom:(long long)a0 to:(long long)a1 for:(long long)a2;
- (void).cxx_destruct;

@end
