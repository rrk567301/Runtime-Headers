@class NSTextField, NSString, NSProgressIndicator, NSSecureTextField, NSButton;

@interface LUIAppleIDViewController : LUIPopoverViewController <NSTextFieldDelegate>

@property (retain) NSTextField *titleTextField;
@property (retain) NSTextField *infoTextField;
@property (retain) NSTextField *appleIDLabel;
@property (retain) NSTextField *appleIDTextField;
@property (retain) NSTextField *passwordLabel;
@property (retain) NSSecureTextField *passwordSecureTextField;
@property (retain) NSButton *cancelButton;
@property (retain) NSButton *resetPasswordButton;
@property (retain) NSProgressIndicator *progressIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controlTextDidChange:(id)a0;
- (id)appleID;
- (BOOL)isTransient;
- (void)dealloc;
- (void)prepareForDisplay;
- (void)setEnabled:(BOOL)a0;
- (void)_layoutContentView;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)selectAppropriateFirstResponder;
- (id)appleIDPassword;
- (void)_updateResetPasswordButton;
- (void)setCancelButtonTarget:(id)a0 andSelector:(SEL)a1;
- (void)setResetPasswordButtonTarget:(id)a0 andSelector:(SEL)a1;
- (void)startProgressIndicator;
- (void)stopProgressIndicator;

@end
