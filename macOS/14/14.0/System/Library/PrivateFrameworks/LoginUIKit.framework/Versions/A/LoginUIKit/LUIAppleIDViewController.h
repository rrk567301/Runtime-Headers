@class NSTextField, NSString, NSProgressIndicator, NSSecureTextField, NSButton;

@interface LUIAppleIDViewController : LUIPopoverViewController <NSTextFieldDelegate>

@property NSTextField *titleTextField;
@property NSTextField *infoTextField;
@property NSTextField *appleIDLabel;
@property NSTextField *appleIDTextField;
@property NSTextField *passwordLabel;
@property NSSecureTextField *passwordSecureTextField;
@property NSButton *cancelButton;
@property NSButton *resetPasswordButton;
@property NSProgressIndicator *progressIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (BOOL)isTransient;
- (id)appleID;
- (void)prepareForDisplay;
- (void)selectAppropriateFirstResponder;
- (id)appleIDPassword;
- (void)_layoutContentView;
- (void)_updateResetPasswordButton;
- (void)setCancelButtonTarget:(id)a0 andSelector:(SEL)a1;
- (void)setResetPasswordButtonTarget:(id)a0 andSelector:(SEL)a1;
- (void)startProgressIndicator;
- (void)stopProgressIndicator;

@end
