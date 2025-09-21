@class NSArray, NSString, _NSUndoStack, NSObject;
@protocol OS_dispatch_source;

@interface NSUndoManager : NSObject {
    _NSUndoStack *_undoStack;
    _NSUndoStack *_redoStack;
    NSArray *_runLoopModes;
    unsigned long long _flags;
    id _target;
    id _proxy;
    NSObject<OS_dispatch_source> *_automaticTerminationSource;
}

@property (readonly) long long groupingLevel;
@property (readonly, getter=isUndoRegistrationEnabled) char undoRegistrationEnabled;
@property char groupsByEvent;
@property unsigned long long levelsOfUndo;
@property (copy) NSArray *runLoopModes;
@property (readonly) char canUndo;
@property (readonly) char canRedo;
@property (readonly) unsigned long long undoCount;
@property (readonly) unsigned long long redoCount;
@property (readonly, getter=isUndoing) char undoing;
@property (readonly, getter=isRedoing) char redoing;
@property (readonly) char undoActionIsDiscardable;
@property (readonly) char redoActionIsDiscardable;
@property (readonly, copy) NSString *undoActionName;
@property (readonly, copy) NSString *redoActionName;
@property (readonly, copy) NSString *undoMenuItemTitle;
@property (readonly, copy) NSString *redoMenuItemTitle;

+ (void)initialize;
+ (void)_endTopLevelGroupings;
+ (void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(char)a0;

- (void)dealloc;
- (id)init;
- (void)endUndoGrouping;
- (void)registerUndoWithTarget:(id)a0 handler:(id /* block */)a1;
- (void)__redoCommonDoSingle:(char)a0;
- (id)undoMenuTitleForUndoActionName:(id)a0;
- (void)_processEndOfEventNotification:(id)a0;
- (id)redoMenuTitleForUndoActionName:(id)a0;
- (void)__redoSingle;
- (void)undoNestedGroup;
- (void)_cancelAutomaticTopLevelGroupEnding;
- (void)_commitUndoGrouping;
- (void)_delayAutomaticTermination:(double)a0;
- (char)_endUndoGroupRemovingIfEmpty:(char)a0;
- (void)_forwardTargetInvocation:(id)a0;
- (id)_methodSignatureForTargetSelector:(SEL)a0;
- (void)_postCheckpointNotification;
- (void)_prepareEventGrouping;
- (void)_registerUndoObject:(id)a0;
- (void)_registerUndoWithTarget:(id)a0 handler:(id /* block */)a1;
- (void)_rollbackUndoGrouping;
- (void)_scheduleAutomaticTopLevelGroupEnding;
- (void)_setGroupIdentifier:(id)a0;
- (char)_shouldCoalesceTypingForText:(id)a0 :(id)a1;
- (id)_undoStack;
- (void)beginUndoGrouping;
- (void)disableUndoRegistration;
- (void)enableUndoRegistration;
- (id)prepareWithInvocationTarget:(id)a0;
- (void)redo;
- (id)redoActionUserInfoValueForKey:(id)a0;
- (void)registerUndoWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)removeAllActions;
- (void)removeAllActionsWithTarget:(id)a0;
- (void)setActionIsDiscardable:(char)a0;
- (void)setActionName:(id)a0;
- (void)setActionUserInfoValue:(id)a0 forKey:(id)a1;
- (void)undo;
- (id)undoActionUserInfoValueForKey:(id)a0;

@end
