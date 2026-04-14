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

- (void)dispatchEvent:(id)a0;
- (void)transitionToState:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)start;
- (void)dealloc;
- (void)_firstTimeInit;

@end
