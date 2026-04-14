@class CMContinuityCaptureState, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, CMContinuityCaptureStateMachineActionDelegate;

@interface CMContinuityCaptureStateMachine : NSObject {
    NSMutableArray *_transactions;
    NSMutableArray *_previousStates;
    NSMutableDictionary *_events;
    NSMutableArray *_eventQueue;
    id<CMContinuityCaptureStateMachineActionDelegate> _actionDelegate;
}

@property (retain, nonatomic) CMContinuityCaptureState *currentState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *deferredEvents;

- (id)description;
- (void).cxx_destruct;
- (void)addEvents:(id)a0;
- (void)addStateTransitions:(id)a0;
- (void)stateMachineStartStream:(unsigned long long)a0;
- (void)stateMachineStopStream:(unsigned long long)a0;
- (void)stateMachineNotifyCompletion:(id)a0;
- (void)stateMachineTerminate;
- (id)initWithActionDelegate:(id)a0 queue:(id)a1;
- (void)setupStateMachineForExtension;
- (void)setupStateMachineForAgent;
- (void)stateMachineUserDisconnect:(unsigned long long)a0;
- (void)stateMachineUserReconnect:(unsigned long long)a0;
- (void)stateMachineDisableReconnect;
- (void)stateMachineStreamDisable:(unsigned long long)a0;
- (void)stateMachineStreamEnable:(unsigned long long)a0;
- (void)stateMachinePause:(unsigned long long)a0;
- (void)stateMachineUserDisconnectPendingNotification:(unsigned long long)a0;
- (void)stateMachineEnterPause:(unsigned long long)a0;
- (void)stateMachineExitPause:(unsigned long long)a0;
- (void)stateMachineEnterDisable:(unsigned long long)a0;
- (void)stateMachineResume:(unsigned long long)a0;
- (BOOL)stateMachinePauseGuard;
- (BOOL)stateMachineCaptureSessionGuard;
- (BOOL)stateMachineConnectionChangeGuard;
- (BOOL)stateMachineSidecarConnectGuard;
- (BOOL)stateMachineStreamGuard;
- (BOOL)stateMachineImageCaptureGuard;
- (void)stateMachineSidecarConnect:(unsigned long long)a0;
- (void)stateMachineSidecarDisconnect:(unsigned long long)a0;
- (void)stateMachineRestartStream:(unsigned long long)a0 data:(id)a1;
- (void)stateMachineForceRestartStream:(unsigned long long)a0;
- (void)stateMachineImageCapture;
- (id)eventForName:(id)a0;
- (BOOL)postSameStateAction:(id)a0 transition:(id)a1 event:(id)a2;
- (id)getDeferredEventsToPostForState:(id)a0;
- (id)getNewStateAfterPostingDeferredEvents:(id)a0 deferredEventsToPost:(id *)a1;
- (BOOL)postStateChangeAction:(id)a0 transition:(id)a1 event:(id)a2;
- (void)enqueueEventWithNameToPost:(id)a0;
- (void)_enqueueEventWithNameToPost:(id)a0 data:(id)a1;
- (void)enqueueDataEventWithNameToPost:(id)a0 data:(id)a1;
- (void)aggregateEvents;
- (void)enqueueEventWithNameToPostOnCurrentQueue:(id)a0;
- (void)notifyCompletion:(id)a0;
- (void)_notifyCompletion:(id)a0;
- (unsigned long long)actionTypeForEventName:(id)a0;
- (BOOL)postEventWithName:(id)a0 data:(id)a1;

@end
