@class NSView, LUI2AuthHintViewController, LUI2MultiWindowController, LUI2BackgroundViewController, LUI2MessageViewController, LUI2PasswordViewController, LUI2UserNameViewController, LUI2UserViewController, LUI2ButtonViewController, LUIPopoverController, LUI2SpinnerViewController, LUI2StatusViewController;

@interface LUI2ScreenLockController : NSObject

@property BOOL enabledInternal;
@property (retain) LUIPopoverController *popover;
@property (retain) NSView *userViewAligner;
@property (retain) NSView *footer;
@property (readonly) LUI2MultiWindowController *multiWindowController;
@property (readonly) LUI2AuthHintViewController *authHintViewController;
@property (readonly) LUI2BackgroundViewController *backgroundViewController;
@property (readonly) LUI2ButtonViewController *buttonViewController;
@property (readonly) LUI2MessageViewController *messageViewController;
@property (readonly) LUI2PasswordViewController *passwordViewController;
@property (readonly) LUI2SpinnerViewController *spinnerViewController;
@property (readonly) LUI2StatusViewController *statusViewController;
@property (readonly) LUI2UserNameViewController *userNameViewController;
@property (readonly) LUI2UserViewController *userViewController;
@property (getter=isEnabled) BOOL enabled;

- (void)dealloc;
- (id)init;
- (void)setEnabled:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)showPopover:(id)a0;
- (void)hidePopover;
- (id)currentPopover;
- (void)shakePopover;
- (void)_setupScreenLockController;

@end
