@class CATState, NSString, NSMutableDictionary;

@interface CATStateMachine : NSObject {
    NSMutableDictionary *mStateByName;
    NSString *mCalloutReason;
}

@property (retain, nonatomic) CATState *currentState;
@property (readonly, copy, nonatomic) NSString *name;
@property (retain, nonatomic) CATState *initialState;
@property (readonly, weak, nonatomic) id target;
@property (nonatomic) unsigned long long logLevel;

+ (id)new;

- (id)initWithTarget:(id)a0;
- (id)stateWithName:(id)a0;
- (void)invokeAction:(SEL)a0 event:(id)a1;
- (void)start;
- (void)transitionWithTriggeringEvent:(id)a0;
- (id)addStateWithName:(id)a0;
- (id)description;
- (id)init;
- (BOOL)canTransitionWithTriggeringEvent:(id)a0;
- (void)addState:(id)a0;
- (id)eventForTriggeringEvent:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)delegateWillExitState:(id)a0 event:(id)a1;
- (void)delegateDidEnterState:(id)a0 event:(id)a1;

@end
