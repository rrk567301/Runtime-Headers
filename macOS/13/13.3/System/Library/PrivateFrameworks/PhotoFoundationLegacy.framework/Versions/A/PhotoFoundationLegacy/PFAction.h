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
+ (void)registerPFActionNotificationsReceiver:(id)a0;
+ (id)statusDescription:(int)a0;
+ (void)unregisterPFActionNotificationsReceiver:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canRedo;
- (BOOL)canUndo;
- (void)cancel;
- (void)interrupt;
- (void)performAction:(id /* block */)a0;
- (id)_workQueue;
- (int)performAction;
- (void)setStatus:(int)a0;
- (double)progressPercent;
- (int)executeRedo;
- (int)executeUndo;
- (void)reportProgress;
- (int)executeAction;
- (void)performUndo:(id /* block */)a0;
- (int)performRedo;
- (int)performUndo;
- (int)executeAction:(id /* block */)a0;
- (void)performRedo:(id /* block */)a0;
- (void)___performUndo:(id /* block */)a0;
- (void)_prePerformRedo;
- (void)___performRedo:(id /* block */)a0;
- (void)_prePerformUndo;
- (int)___performAction;
- (void)___performAction:(id /* block */)a0;
- (int)___performRedo;
- (int)___performUndo;
- (void)_asyncInvokeSyncWork:(SEL)a0 withCallback:(id /* block */)a1;
- (void)_asyncPerformWorkBlock:(id /* block */)a0;
- (void)_postPerformAction;
- (void)_postPerformUndo;
- (void)_prePerformAction;
- (BOOL)_subclassOverrides:(SEL)a0;
- (void)_syncPerformWorkBlock:(id /* block */)a0;
- (int)_synchronouslyInvokeAsyncWork:(SEL)a0;
- (void)completedWorkUnit;
- (id)defaultActionName;
- (int)executeRedo:(id /* block */)a0;
- (int)executeUndo:(id /* block */)a0;
- (id)initWithWorkQOS:(unsigned int)a0;
- (BOOL)interruptSupported;
- (BOOL)isAsyncAction;
- (BOOL)isSyncAction;
- (unsigned long long)workUnits;

@end
