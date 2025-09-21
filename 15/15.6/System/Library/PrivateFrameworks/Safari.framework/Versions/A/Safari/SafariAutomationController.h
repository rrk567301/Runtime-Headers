@class WKPreferences, NSString, _WKAutomationSession;

@interface SafariAutomationController : NSObject <_WKAutomationDelegate, _WKAutomationSessionDelegate>

@property (nonatomic) char allowsRemoteAutomation;
@property (nonatomic) char userInteractionAllowed;
@property (readonly, nonatomic) _WKAutomationSession *automationSession;
@property (readonly, copy, nonatomic) WKPreferences *preferencesForAutomation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_automationSession:(id)a0 acceptCurrentJavaScriptDialogForWebView:(id)a1;
- (long long)_automationSession:(id)a0 currentPresentationForWebView:(id)a1;
- (void)_automationSession:(id)a0 dismissCurrentJavaScriptDialogForWebView:(id)a1;
- (char)_automationSession:(id)a0 isShowingJavaScriptDialogForWebView:(id)a1;
- (id)_automationSession:(id)a0 messageOfCurrentJavaScriptDialogForWebView:(id)a1;
- (void)_automationSession:(id)a0 requestHideWindowOfWebView:(id)a1 completionHandler:(id /* block */)a2;
- (void)_automationSession:(id)a0 requestMaximizeWindowOfWebView:(id)a1 completionHandler:(id /* block */)a2;
- (void)_automationSession:(id)a0 requestNewWebViewWithOptions:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_automationSession:(id)a0 requestRestoreWindowOfWebView:(id)a1 completionHandler:(id /* block */)a2;
- (void)_automationSession:(id)a0 requestSwitchToWebView:(id)a1 completionHandler:(id /* block */)a2;
- (void)_automationSession:(id)a0 setUserInput:(id)a1 forCurrentJavaScriptDialogForWebView:(id)a2;
- (long long)_automationSession:(id)a0 typeOfCurrentJavaScriptDialogForWebView:(id)a1;
- (void)_automationSessionDidDisconnectFromRemote:(id)a0;
- (void)_processPool:(id)a0 didRequestAutomationSessionWithIdentifier:(id)a1 configuration:(id)a2;
- (char)_processPoolAllowsRemoteAutomation:(id)a0;
- (void)_allowsRemoteAutomationChanged;
- (void)_closeAllAutomationWindowsSkippingInspected:(char)a0;
- (void)_lockAllAutomationWindowsForUserInteraction;
- (id)_processPool;
- (char)_uninstallAutomationSession;
- (void)_unlockAllAutomationWindowsForUserInteraction;
- (void)_webDriverSecurePreferencesDidUpdate;
- (void)createAutomationSessionWithIdentifier:(id)a0;
- (void)createAutomationSessionWithIdentifier:(id)a0 configuration:(id)a1 retryBehavior:(long long)a2;
- (char)shouldAllowAction:(SEL)a0 to:(id)a1 from:(id)a2;
- (char)shouldAllowSynthesizedAction:(SEL)a0 to:(id)a1 from:(id)a2;
- (char)shouldAllowUserAction:(SEL)a0 to:(id)a1 from:(id)a2;
- (void)terminateSession;
- (char)window:(id)a0 shouldProcessAction:(SEL)a1 to:(id)a2 from:(id)a3;

@end
