@class NSError, NSString, PFBlockControl;

@interface PFAction : NSObject {
    _Atomic unsigned long long _completedWorkUnits;
    unsigned long long _totalWorkUnits;
    char _undoChainedCorrectly;
    char _redoChainedCorrectly;
    _Atomic unsigned long long _actionId;
    PFBlockControl *_progressNotice;
}

@property (readonly) unsigned long long actionId;
@property (readonly) unsigned long long status;
@property (retain) NSError *failureAlertError;
@property (readonly) char executed;
@property char isUndoable;
@property (copy) NSString *actionName;
@property (readonly) char wasInterrupted;
@property (readonly) char implementsUndo;
@property unsigned int workQOSClass;

+ (void)initialize;
+ (char)isRunningStatus:(unsigned long long)a0;
+ (void)registerPFActionNotificationsReceiver:(id)a0;
+ (id)statusDescription:(unsigned long long)a0;
+ (void)unregisterPFActionNotificationsReceiver:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (char)canRedo;
- (char)canUndo;
- (void)cancel;
- (void)interrupt;
- (void)performAction:(id /* block */)a0;
- (void)setStatus:(unsigned long long)a0;
- (double)progressPercent;
- (unsigned long long)executeRedo;
- (unsigned long long)executeUndo;
- (id)_workQueue;
- (unsigned long long)performAction;
- (void)reportProgress;
- (unsigned long long)executeAction;
- (void)performUndo:(id /* block */)a0;
- (unsigned long long)performRedo;
- (unsigned long long)performUndo;
- (id)defaultActionName;
- (unsigned long long)executeAction:(id /* block */)a0;
- (void)performRedo:(id /* block */)a0;
- (void)___performRedo:(id /* block */)a0;
- (void)_prePerformRedo;
- (void)___performUndo:(id /* block */)a0;
- (void)_prePerformUndo;
- (unsigned long long)___performAction;
- (void)___performAction:(id /* block */)a0;
- (unsigned long long)___performRedo;
- (unsigned long long)___performUndo;
- (void)_asyncInvokeSyncWork:(SEL)a0 withCallback:(id /* block */)a1;
- (void)_asyncPerformWorkBlock:(id /* block */)a0;
- (void)_postPerformAction;
- (void)_postPerformUndo;
- (void)_prePerformAction;
- (char)_subclassOverrides:(SEL)a0;
- (void)_syncPerformWorkBlock:(id /* block */)a0;
- (unsigned long long)_synchronouslyInvokeAsyncWork:(SEL)a0;
- (void)completedWorkUnit;
- (unsigned long long)executeRedo:(id /* block */)a0;
- (unsigned long long)executeUndo:(id /* block */)a0;
- (id)initWithWorkQOS:(unsigned int)a0;
- (char)interruptSupported;
- (char)isAsyncAction;
- (char)isSyncAction;
- (unsigned long long)workUnits;

@end
