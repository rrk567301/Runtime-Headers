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

- (id)windowNibName;
- (id)initWithWindow:(id)a0;
- (void)windowDidLoad;
- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_hideWindow;
- (void)_updateClientUI;
- (void)_connectViewBridge;
- (void)_sendCompletionHandlerAndFireNotificationIfNeeded:(id /* block */)a0;
- (void)_showIfReady;
- (void)showSecurityWindowWithCompletionHandler:(id /* block */)a0;

@end
