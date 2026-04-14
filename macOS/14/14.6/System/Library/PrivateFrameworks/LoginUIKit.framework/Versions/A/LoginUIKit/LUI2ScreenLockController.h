@class LUI2DateViewController, LUI2AuthHintViewController, LUI2MultiWindowController, LUI2BackgroundViewController, LUI2PasswordViewController, LUI2MessageViewController, LUI2GenericMessageViewController, TRMPortManager, LUIPopoverController, NSLayoutConstraint, LUI2SpinnerViewController, LUI2StatusViewController, LUI2UserViewController, LUI2ButtonViewController, LUI2UserNameViewController, LUI2UserNameLabelController, LUI2BigTimeViewController, NSView, LUI2UserCollectionViewController, NSString;

@interface LUI2ScreenLockController : NSObject <TRMPortManagerDelegate>

@property BOOL enabledInternal;
@property (retain) LUIPopoverController *popover;
@property (retain) NSView *userViewAligner;
@property (retain) NSView *footer;
@property (retain) NSLayoutConstraint *spinnerPasswordConstraint;
@property (retain) NSLayoutConstraint *spinnerUserConstraint;
@property (retain) NSLayoutConstraint *authMainHintVerticalConstraint;
@property (retain) NSLayoutConstraint *authSubHintVerticalConstraint;
@property (retain) NSLayoutConstraint *dateVerticalConstraint;
@property (retain) NSLayoutConstraint *bigTimeVerticalConstraint;
@property (retain) NSLayoutConstraint *userCollectionViewControllerWidthConstraint;
@property (retain) NSLayoutConstraint *userCollectionViewControllerHeightConstraint;
@property (retain, nonatomic) TRMPortManager *trmPortManager;
@property (retain) NSLayoutConstraint *userNameLabelOverlapConstraint;
@property (retain) NSLayoutConstraint *userNameLabelPasswordRequiredConstraint;
@property (retain) NSLayoutConstraint *messageConstraint;
@property (readonly) LUI2MultiWindowController *multiWindowController;
@property (readonly) LUI2AuthHintViewController *authHintViewController;
@property (readonly) LUI2BackgroundViewController *backgroundViewController;
@property (readonly) LUI2ButtonViewController *buttonViewController;
@property (readonly) LUI2MessageViewController *messageViewController;
@property (readonly) LUI2PasswordViewController *passwordViewController;
@property (readonly) LUI2SpinnerViewController *spinnerViewController;
@property (readonly) LUI2StatusViewController *statusViewController;
@property (readonly) LUI2GenericMessageViewController *trmMessageViewController;
@property (readonly) LUI2UserNameViewController *userNameViewController;
@property (readonly) LUI2UserNameLabelController *userNameLabelController;
@property (readonly) LUI2UserViewController *userViewController;
@property (readonly) LUI2BigTimeViewController *bigTimeViewController;
@property (readonly) LUI2DateViewController *dateViewController;
@property (readonly) LUI2UserCollectionViewController *userCollectionViewController;
@property (getter=isEnabled) BOOL enabled;
@property (getter=isPasswordRequired) BOOL passwordRequired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)setEnabled:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)showPopover:(id)a0;
- (void)_updateKeyViews;
- (double)_authMainHintContraintConstant;
- (double)_authSubHintContraintConstant;
- (double)_bigTimeConstraintConstant;
- (double)_dateConstraintConstant;
- (void)_displaysDidChange:(id)a0;
- (BOOL)_isShowingMultiUserLayout;
- (double)_messageConstraintConstant;
- (void)_setupScreenLockController;
- (void)_updateUserNameLabelContraint;
- (id)currentPopover;
- (BOOL)escapePressed:(id)a0;
- (void)hidePopover;
- (void)portManagerPortsUpdated;
- (void)shakePopover;
- (void)showMultiUserLayout;

@end
