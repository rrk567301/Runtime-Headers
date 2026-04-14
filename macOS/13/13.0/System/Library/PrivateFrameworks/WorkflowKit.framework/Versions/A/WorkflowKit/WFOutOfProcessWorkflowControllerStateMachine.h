@class NSObject;
@protocol OS_dispatch_queue, WFOutOfProcessWorkflowControllerStateMachineDelegate;

@interface WFOutOfProcessWorkflowControllerStateMachine : WFStateMachine

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (weak, nonatomic) id<WFOutOfProcessWorkflowControllerStateMachineDelegate> delegate;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)exitWithReason:(id)a0;
- (BOOL)blocksTransitionsOnInvalidation;
- (BOOL)isRunningShortcut;
- (BOOL)isFinishingShortcut;
- (void)idleStateWithReason:(id)a0;
- (void)handlingRequestWithReason:(id)a0;
- (void)acquiringRunnerWithReason:(id)a0;
- (void)startRunningShortcutWithReason:(id)a0;
- (void)pauseAndWriteShortcutToDiskState;
- (void)stopShortcutWithError:(id)a0 reason:(id)a1;
- (void)finishRunningWithReason:(id)a0 result:(id)a1;
- (void)notifyDelegateWithReason:(id)a0 result:(id)a1 currentDialogAttribution:(id)a2;
- (void)tearDownRunnerWithReason:(id)a0;
- (void)handleXPCErrorWithDescription:(id)a0 currentDialogAttribution:(id)a1;
- (void)handleRunnerWillExit;

@end
