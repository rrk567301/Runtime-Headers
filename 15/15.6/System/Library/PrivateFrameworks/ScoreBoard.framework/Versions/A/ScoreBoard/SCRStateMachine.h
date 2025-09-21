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
- (void)synchronouslyTransitionToState:(unsigned long long)a0;
- (char)_acquireProcessingLock:(char)a0 acquisitionHandler:(id /* block */)a1;
- (void)_assertNextStateTransitionIsValid;
- (void)_enqueueTransitionToState:(unsigned long long)a0;
- (id)_initWithParent:(id)a0;
- (id)_pendingStateTransition;
- (void)_performStateTransition;
- (void)_processPendingTransitions:(char)a0;
- (void)_processingLock_processPendingTransitions;
- (id)_transitionStringForTransitionContext:(id)a0;

@end
