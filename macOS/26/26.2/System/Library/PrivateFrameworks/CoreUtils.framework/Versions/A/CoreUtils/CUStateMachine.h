@class NSArray, NSPointerArray, CUState, NSMutableArray;

@interface CUStateMachine : NSObject {
    CUState *_currentState;
    NSMutableArray *_eventQueue;
    BOOL _dispatching;
    NSPointerArray *_lcaPath;
    BOOL _started;
    CUState *_targetState;
}

@property (retain, nonatomic) CUState *initialState;
@property (retain, nonatomic) NSArray *states;

- (void)transitionToState:(id)a0;
- (void)invalidate;
- (void)dispatchEvent:(id)a0;
- (void)_firstTimeInit;
- (void).cxx_destruct;
- (void)start;
- (void)dealloc;

@end
