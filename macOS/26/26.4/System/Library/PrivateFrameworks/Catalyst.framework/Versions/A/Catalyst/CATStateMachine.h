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

- (void)invokeAction:(SEL)a0 event:(id)a1;
- (id)initWithTarget:(id)a0;
- (BOOL)canTransitionWithTriggeringEvent:(id)a0;
- (void)delegateDidEnterState:(id)a0 event:(id)a1;
- (id)addStateWithName:(id)a0;
- (void).cxx_destruct;
- (id)eventForTriggeringEvent:(id)a0;
- (void)delegateWillExitState:(id)a0 event:(id)a1;
- (id)init;
- (void)addState:(id)a0;
- (void)start;
- (id)description;
- (id)stateWithName:(id)a0;
- (void)dealloc;
- (void)transitionWithTriggeringEvent:(id)a0;

@end
