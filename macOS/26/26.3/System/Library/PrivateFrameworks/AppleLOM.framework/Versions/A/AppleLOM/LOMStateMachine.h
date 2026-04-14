@class LOMState, NSMutableArray;

@interface LOMStateMachine : NSObject {
    NSMutableArray *_transactions;
    id _owner;
}

@property (retain) LOMState *currentState;

- (void).cxx_destruct;
- (BOOL)postEvent:(id)a0;
- (id)initWithOwner:(id)a0;
- (void)addStateTransitions:(id)a0;

@end
