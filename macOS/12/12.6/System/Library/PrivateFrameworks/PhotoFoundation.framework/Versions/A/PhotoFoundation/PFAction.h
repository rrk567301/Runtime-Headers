@class NSError, NSString, PFBlockControl;

@interface PFAction : NSObject {
    _Atomic unsigned long long _completedWorkUnits;
    unsigned long long _totalWorkUnits;
    BOOL _undoChainedCorrectly;
    BOOL _redoChainedCorrectly;
    _Atomic unsigned long long _actionId;
    PFBlockControl *_progressNotice;
}

@property (readonly) unsigned long long actionId;
@property (readonly) int status;
@property (retain) NSError *failureAlertError;
@property (readonly) BOOL executed;
@property BOOL isUndoable;
@property (copy) NSString *actionName;
@property (readonly) BOOL wasInterrupted;
@property (readonly) BOOL implementsUndo;
@property unsigned int workQOSClass;

+ (void)initialize;
+ (BOOL)isRunningStatus:(int)a0;
+ (id)statusDescription:(int)a0;
+ (void)registerPFActionNotificationsReceiver:(id)a0;
+ (void)unregisterPFActionNotificationsReceiver:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)interrupt;
- (BOOL)canRedo;
- (BOOL)canUndo;
- (void)performAction:(id /* block */)a0;
- (id)_workQueue;
- (void)setStatus:(int)a0;
- (double)progressPercent;
- (int)executeUndo;
- (int)executeRedo;
- (int)performAction;
- (int)performUndo;
- (void)performUndo:(id /* block */)a0;
- (int)performRedo;
- (void)performRedo:(id /* block */)a0;
- (unsigned long long)workUnits;
- (void)reportProgress;
- (BOOL)_subclassOverrides:(SEL)a0;
- (void)___performAction:(id /* block */)a0;
- (int)_synchronouslyInvokeAsyncWork:(SEL)a0;
- (int)___performAction;
- (void)_asyncInvokeSyncWork:(SEL)a0 withCallback:(id /* block */)a1;
- (void)_prePerformAction;
- (void)_postPerformAction;
- (void)_syncPerformWorkBlock:(id /* block */)a0;
- (void)_asyncPerformWorkBlock:(id /* block */)a0;
- (void)___performUndo:(id /* block */)a0;
- (int)___performUndo;
- (void)_prePerformUndo;
- (void)_postPerformUndo;
- (void)___performRedo:(id /* block */)a0;
- (int)___performRedo;
- (void)_prePerformRedo;
- (id)initWithWorkQOS:(unsigned int)a0;
- (void)completedWorkUnit;
- (BOOL)isAsyncAction;
- (BOOL)isSyncAction;
- (id)defaultActionName;
- (BOOL)interruptSupported;
- (int)executeAction;
- (int)executeAction:(id /* block */)a0;
- (int)executeUndo:(id /* block */)a0;
- (int)executeRedo:(id /* block */)a0;

@end
