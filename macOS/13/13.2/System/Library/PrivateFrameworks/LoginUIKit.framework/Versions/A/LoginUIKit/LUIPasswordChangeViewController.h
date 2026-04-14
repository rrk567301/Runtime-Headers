@class NSTextField, NSString, NSSecureTextField, LUISimplePopover, LUIPasswordPolicyDetailsPopover, NSMutableArray, NSLayoutConstraint, NSImageView, NSButton, ODRecord;

@interface LUIPasswordChangeViewController : LUIPopoverViewController <NSTextFieldDelegate> {
    NSImageView *_errorImageView;
    NSMutableArray *_errorImageViewConstraints;
    int _mode;
    LUISimplePopover *_errorPopover;
    LUIPasswordPolicyDetailsPopover *_detailsPopover;
    BOOL _canShowDetailsPopover;
    ODRecord *_userRecord;
    BOOL _observing;
}

@property NSTextField *titleTextField;
@property NSTextField *instructionsTextField;
@property NSTextField *firstPasswordLabel;
@property NSSecureTextField *firstPasswordTextField;
@property NSTextField *secondPasswordLabel;
@property NSSecureTextField *secondPasswordTextField;
@property NSTextField *verifyLabel;
@property NSSecureTextField *verifyTextField;
@property NSTextField *passwordHintLabel;
@property NSTextField *recommendedLabel;
@property NSTextField *hintTextField;
@property NSButton *cancelButton;
@property NSButton *changePasswordButton;
@property (retain) NSLayoutConstraint *secondPasswordConstraint;
@property long long subMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (void)setMode:(int)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (int)mode;
- (BOOL)isTransient;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (id)hint;
- (void)_hideError;
- (void)_layoutContentView;
- (void)setCancelButtonTarget:(id)a0 andSelector:(SEL)a1;
- (void)setChangePasswordButtonTarget:(id)a0 andSelector:(SEL)a1;
- (void)_updateChangePasswordButton;
- (void)_showErrorForField:(id)a0;
- (void)showFirstPasswordError;
- (void)showNewPasswordError:(id)a0;
- (void)showVerifyPasswordError;
- (void)_updatePasswordPolicy;
- (void)_showPasswordPolicyDetailsPopover:(id)a0;
- (void)setUserRecord:(id)a0;
- (void)makeFirstResponder;
- (id)firstPassword;
- (id)updatedPassword;
- (id)verifyPassword;

@end
