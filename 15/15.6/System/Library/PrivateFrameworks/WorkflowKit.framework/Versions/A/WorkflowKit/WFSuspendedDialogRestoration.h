@class FBSDisplayLayoutMonitor, WFDialogRequest, WFUIPresenter, WFWorkflowRunningContext, NSString, WFScreenOnObserver;

@interface WFSuspendedDialogRestoration : NSObject <WFUIPresenterDelegate>

@property (retain, nonatomic) WFScreenOnObserver *screenOnObserver;
@property (retain, nonatomic) WFUIPresenter *presenter;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor;
@property (retain, nonatomic) WFDialogRequest *suspendedRequest;
@property (retain, nonatomic) WFWorkflowRunningContext *suspendedRunningContext;
@property (copy, nonatomic) id /* block */ suspendedRequestCompletion;
@property (nonatomic) char screenDidTurnOffDuringActiveRequest;
@property (nonatomic) char shortcutsAppDidBackgroundDuringActiveRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (void)stopObservingApplicationState;
- (id)initWithUserInterfacePresenter:(id)a0;
- (void)beginObservingApplicationState;
- (void)presenterDidReceiveSuspendedResponseForRequest:(id)a0 runningContext:(id)a1 withCompletionHandler:(id /* block */)a2;
- (char)presenterShouldShowRequest:(id)a0 runningContext:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)presenterWillDismissPresentedContent;
- (char)shortcutsAppIsForegroundInLayout:(id)a0;

@end
