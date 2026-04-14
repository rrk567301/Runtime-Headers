@class LUI2PopupButtonViewController, LUI2AuthHintViewController, LUI2MultiWindowController, LUI2BackgroundViewController, LUI2PasswordViewController, LUI2MessageViewController, LUIPopoverController, LUI2RecoveryKeyViewController, LUI2SpinnerViewController, NSLayoutConstraint, LUI2StatusViewController, LUI2UserListViewController, LUI2UserViewController, LUI2ButtonViewController, LUI2UserNameViewController, NSView;

@interface LUI2LWUIController : NSObject

@property BOOL enabledInternal;
@property (retain) LUIPopoverController *popover;
@property (retain) NSView *userViewAligner;
@property (retain) NSView *footer;
@property (retain) NSLayoutConstraint *spinnerPasswordConstraint;
@property (retain) NSLayoutConstraint *spinnerUserConstraint;
@property (readonly) LUI2MultiWindowController *multiWindowController;
@property (readonly) LUI2AuthHintViewController *authHintViewController;
@property (readonly) LUI2BackgroundViewController *backgroundViewController;
@property (readonly) LUI2ButtonViewController *buttonViewController;
@property (readonly) LUI2MessageViewController *messageViewController;
@property (readonly) LUI2PasswordViewController *passwordViewController;
@property (readonly) LUI2PopupButtonViewController *popupButtonViewController;
@property (readonly) LUI2RecoveryKeyViewController *recoveryKeyViewController;
@property (readonly) LUI2SpinnerViewController *spinnerViewController;
@property (readonly) LUI2StatusViewController *statusViewController;
@property (readonly) LUI2UserListViewController *userListViewController;
@property (readonly) LUI2UserNameViewController *userNameViewController;
@property (readonly) LUI2UserViewController *userViewController;
@property (getter=isEnabled) BOOL enabled;

- (void)dealloc;
- (id)init;
- (void)setEnabled:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)showPopover:(id)a0;
- (id)initWithAuthorizationPluginView:(id)a0;
- (void)_updateKeyViews:(id)a0;
- (id)_viewForPopover:(int)a0;
- (void)showPopover:(id)a0 relativeToView:(id)a1;
- (void)hidePopover;
- (void)_setupLWUIControllerWithAuthorizationPluginView:(id)a0;
- (id)currentPopover;
- (void)shakePopover;

@end
