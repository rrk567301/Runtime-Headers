@class NSMutableDictionary, PFStateMachineNode;

@interface PFStateMachineGraph : NSObject {
    NSMutableDictionary *_nodes;
    NSMutableDictionary *_globalTransitions;
}

@property (retain) PFStateMachineNode *initialNode;

- (id)init;
- (id)addNode:(id)a0;
- (void).cxx_destruct;
- (void)addGlobalTransition:(id)a0;
- (void)addGlobalTransitionOn:(id)a0 to:(id)a1;
- (id)dot:(BOOL)a0;
- (id)findNodeWithName:(id)a0;
- (id)transitionForEventName:(id)a0;

@end
