@class NSXPCListenerEndpoint, NSXPCConnection;

@interface WFSiriUIPresenter : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) BOOL connected;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;

- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (void)willBeginExecutingShortcutWithActionCount:(id)a0;
- (void)willBeginExecutingShortcutStep:(id)a0;
- (void)speakTextWithUtterance:(id)a0 completionHandler:(id /* block */)a1;
- (void)openUrl:(id)a0 withBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)executeIntent:(id)a0 completionHandler:(id /* block */)a1;
- (void)showDialogRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)openInteractionInApp:(id)a0 completionHandler:(id /* block */)a1;
- (void)openApp:(id)a0 completionHandler:(id /* block */)a1;
- (void)executeLinkAction:(id)a0 inApplication:(id)a1 completionHandler:(id /* block */)a2;
- (void)executeLinkAction:(id)a0 inApplication:(id)a1 withNameOverride:(id)a2 completionHandler:(id /* block */)a3;
- (void)punchOutRequestedWithCompletionHandler:(id /* block */)a0;
- (void)resumeConnectionIfNecessary;
- (id)presenterWithErrorHandler:(id /* block */)a0;
- (void)handleUserActivity:(id)a0 withBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
