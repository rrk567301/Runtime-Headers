@class NSArray, NSString;

@interface NSUndoManager : NSObject {
    id _undoStack;
    id _redoStack;
    NSArray *_runLoopModes;
    unsigned long long _NSUndoManagerPrivate1;
    id _target;
    id _proxy;
    void *_NSUndoManagerPrivate2;
    void *_NSUndoManagerPrivate3;
}

@property (readonly) long long groupingLevel;
@property (readonly, getter=isUndoRegistrationEnabled) BOOL undoRegistrationEnabled;
@property BOOL groupsByEvent;
@property unsigned long long levelsOfUndo;
@property (copy) NSArray *runLoopModes;
@property (readonly) BOOL canUndo;
@property (readonly) BOOL canRedo;
@property (readonly, getter=isUndoing) BOOL undoing;
@property (readonly, getter=isRedoing) BOOL redoing;
@property (readonly) BOOL undoActionIsDiscardable;
@property (readonly) BOOL redoActionIsDiscardable;
@property (readonly, copy) NSString *undoActionName;
@property (readonly, copy) NSString *redoActionName;
@property (readonly, copy) NSString *undoMenuItemTitle;
@property (readonly, copy) NSString *redoMenuItemTitle;

+ (void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(BOOL)a0;
+ (void)_endTopLevelGroupings;

- (void)dealloc;
- (id)init;
- (id)_methodSignatureForTargetSelector:(SEL)a0;
- (void)_forwardTargetInvocation:(id)a0;
- (id)_undoStack;
- (void)endUndoGrouping;
- (void)_processEndOfEventNotification:(id)a0;
- (BOOL)_endUndoGroupRemovingIfEmpty:(BOOL)a0;
- (void)disableUndoRegistration;
- (void)undoNestedGroup;
- (void)enableUndoRegistration;
- (BOOL)_shouldCoalesceTypingForText:(id)a0 :(id)a1;
- (void)_commitUndoGrouping;
- (void)_rollbackUndoGrouping;
- (void)_delayAutomaticTermination:(double)a0;
- (void)_scheduleAutomaticTopLevelGroupEnding;
- (void)beginUndoGrouping;
- (void)_prepareEventGrouping;
- (void)_postCheckpointNotification;
- (void)_cancelAutomaticTopLevelGroupEnding;
- (void)__redoCommonDoSingle:(BOOL)a0;
- (void)_registerUndoObject:(id)a0;
- (void)_setGroupIdentifier:(id)a0;
- (id)undoMenuTitleForUndoActionName:(id)a0;
- (id)redoMenuTitleForUndoActionName:(id)a0;
- (void)undo;
- (void)redo;
- (void)__redoSingle;
- (void)removeAllActions;
- (void)removeAllActionsWithTarget:(id)a0;
- (id)prepareWithInvocationTarget:(id)a0;
- (void)registerUndoWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)registerUndoWithTarget:(id)a0 handler:(id /* block */)a1;
- (void)setActionName:(id)a0;
- (void)setActionIsDiscardable:(BOOL)a0;

@end
