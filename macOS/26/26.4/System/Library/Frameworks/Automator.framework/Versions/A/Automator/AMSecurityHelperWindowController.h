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

- (void)windowDidLoad;
- (void)_commonInit;
- (id)initWithWindow:(id)a0;
- (id)windowNibName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_hideWindow;
- (void)_updateClientUI;
- (void)_connectViewBridge;
- (void)_sendCompletionHandlerAndFireNotificationIfNeeded:(id /* block */)a0;
- (void)_showIfReady;
- (void)showSecurityWindowWithCompletionHandler:(id /* block */)a0;

@end
