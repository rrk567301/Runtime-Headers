@class NSView, AutomatorSecurityHelperHostViewController;

@interface AMSecurityHelperWindowController : NSWindowController

@property (weak) NSView *_placeholder;
@property BOOL _isShowing;
@property BOOL _showSecurityWindowCalled;
@property BOOL _didLoadRemoteView;
@property BOOL _thirdPartyActionsState;
@property (retain, nonatomic) AutomatorSecurityHelperHostViewController *_automatorSecurityHelperHostViewController;
@property (copy) id /* block */ _completionHandler;

+ (id)sharedWindowController;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (void)_commonInit;
- (id)windowNibName;
- (void)windowDidLoad;
- (void)_hideWindow;
- (void)_sendCompletionHandlerAndFireNotificationIfNeeded:(id /* block */)a0;
- (void)showSecurityWindowWithCompletionHandler:(id /* block */)a0;
- (void)_showIfReady;
- (void)_updateClientUI;
- (void)_connectViewBridge;

@end
