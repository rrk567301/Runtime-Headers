@class NSXPCListener, WFSiriExecutionMetrics, NSString;
@protocol WFSiriWorkflowRunnerClientDelegate;

@interface WFSiriWorkflowRunnerClient : WFWorkflowRunnerClient <NSXPCListenerDelegate, WFSiriUIPresenterInterface>

@property (readonly, nonatomic) NSXPCListener *dialogRequestListener;
@property (weak, nonatomic) id<WFSiriWorkflowRunnerClientDelegate> delegate;
@property (retain, nonatomic) WFSiriExecutionMetrics *siriExecutionMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void)stop;
- (void)handleWorkflowRunResult:(id)a0 completion:(id /* block */)a1;
- (void)willBeginExecutingShortcutWithActionCount:(id)a0;
- (void)willBeginExecutingShortcutStep:(id)a0;
- (void)speakTextWithUtterance:(id)a0 completionHandler:(id /* block */)a1;
- (void)openUrl:(id)a0 withBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleUserActivityData:(id)a0 withBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)executeIntent:(id)a0 completionHandler:(id /* block */)a1;
- (void)showDialogRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)openInteractionInApp:(id)a0 completionHandler:(id /* block */)a1;
- (void)openApp:(id)a0 completionHandler:(id /* block */)a1;
- (void)executeLinkAction:(id)a0 inApplication:(id)a1 completionHandler:(id /* block */)a2;
- (void)executeLinkAction:(id)a0 inApplication:(id)a1 withNameOverride:(id)a2 completionHandler:(id /* block */)a3;
- (void)punchOutRequestedWithCompletionHandler:(id /* block */)a0;
- (id)initWithWorkflowName:(id)a0 executionContext:(long long)a1 airPlayRouteIDs:(id)a2;
- (id)initWithAutoShortcutIdentifier:(id)a0 action:(id)a1 metadata:(id)a2;
- (id)initWithWorkflowName:(id)a0 runSource:(long long)a1 executionContext:(long long)a2 airPlayRouteIDs:(id)a3;
- (id)initWithAutoShortcutIdentifier:(id)a0 runSource:(long long)a1 action:(id)a2 metadata:(id)a3;
- (id)workflowRunSourceForSiriRunSource:(long long)a0;

@end
