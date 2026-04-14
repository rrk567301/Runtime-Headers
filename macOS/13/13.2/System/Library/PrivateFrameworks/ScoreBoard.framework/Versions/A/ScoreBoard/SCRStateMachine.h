@class SCRStateTransitionContext;
@protocol SCRStateTransitionable;

@interface SCRStateMachine : NSObject {
    id<SCRStateTransitionable> _parent;
    unsigned long long _currentState;
    SCRStateTransitionContext *_nextStateTransition;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _processingLock;
}

+ (id)stateMachineForTransitionableObject:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)transitionToState:(unsigned long long)a0;
- (id)_stringForState:(unsigned long long)a0;
- (void)_updateInternalState;
- (id)_initWithParent:(id)a0;
- (void)synchronouslyTransitionToState:(unsigned long long)a0;
- (void)_processPendingTransitions:(BOOL)a0;
- (void)_processingLock_processPendingTransitions;
- (void)_assertNextStateTransitionIsValid;
- (void)_performStateTransition;
- (id)_pendingStateTransition;
- (void)_enqueueTransitionToState:(unsigned long long)a0;
- (BOOL)_acquireProcessingLock:(BOOL)a0 acquisitionHandler:(id /* block */)a1;
- (id)_transitionStringForTransitionContext:(id)a0;

@end
