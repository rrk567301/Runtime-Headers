@class NSView, AutomatorSecurityHelperHostViewController;

@interface AMSecurityHelperWindowController : NSWindowController

@property (weak) NSView *_placeholder;
@property char _isShowing;
@property char _showSecurityWindowCalled;
@property char _didLoadRemoteView;
@property char _thirdPartyActionsState;
@property (retain, nonatomic) AutomatorSecurityHelperHostViewController *_automatorSecurityHelperHostViewController;
@property (copy) id /* block */ _completionHandler;

+ (id)sharedWindowController;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithWindow:(id)a0;
- (void)_commonInit;
- (void)windowDidLoad;
- (id)windowNibName;
- (void)_hideWindow;
- (void)_updateClientUI;
- (void)_connectViewBridge;
- (void)_sendCompletionHandlerAndFireNotificationIfNeeded:(id /* block */)a0;
- (void)_showIfReady;
- (void)showSecurityWindowWithCompletionHandler:(id /* block */)a0;

@end
