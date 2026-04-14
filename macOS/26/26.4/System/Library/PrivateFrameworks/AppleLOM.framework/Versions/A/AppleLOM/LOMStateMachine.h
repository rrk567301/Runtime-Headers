@class LOMState, NSMutableArray;

@interface LOMStateMachine : NSObject {
    NSMutableArray *_transactions;
    id _owner;
}

@property (retain) LOMState *currentState;

- (BOOL)postEvent:(id)a0;
- (id)initWithOwner:(id)a0;
- (void).cxx_destruct;
- (void)addStateTransitions:(id)a0;

@end
