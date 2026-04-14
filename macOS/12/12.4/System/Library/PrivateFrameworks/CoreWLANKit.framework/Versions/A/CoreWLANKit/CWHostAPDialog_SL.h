@class NSTextField, NSString, NSView, CWInterface, NSSecureTextField, NSProgressIndicator, NSPopUpButton, NSGridView, SFAuthorization, NSLayoutConstraint, NSButton, NSImageView;

@interface CWHostAPDialog_SL : NSWindowController <NSTextFieldDelegate> {
    SFAuthorization *_authorization;
    BOOL _showingOpen;
    BOOL _showingPassword;
    BOOL _showingManual;
    unsigned long long _caps;
    NSTextField *windowTitleLabel;
    NSTextField *windowDescriptionLabel;
    NSButton *okButton;
    NSButton *cancelButton;
    NSView *securityTypeView;
    NSPopUpButton *securityTypePopupButton;
    NSView *channelSelectorView;
    NSPopUpButton *channelSelectorPopupButton;
    NSView *networkNameView;
    NSTextField *networkNameField;
    NSView *passwordView;
    NSSecureTextField *passwordField;
    NSTextField *revealedPasswordField;
    NSView *showPasswordView;
    NSButton *showPasswordCheckboxButton;
    NSView *securityHintView;
    NSTextField *securityText;
    NSTextField *statusMessageLabel;
    NSButton *warningButton;
    NSProgressIndicator *progressIndicator;
    NSButton *helpButton;
    NSImageView *imageView;
    NSGridView *gridView;
    NSLayoutConstraint *okButtonBottomConstrain;
}

@property (retain) CWInterface *interface;
@property id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hostAPDialogWithInterface:(id)a0 authorization:(id)a1;
+ (id)hostAPDialogWithInterface:(id)a0;

- (void)dealloc;
- (void)close;
- (id)initWithInterface:(id)a0;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (void)windowDidLoad;
- (id)localizedStringForKey:(id)a0;
- (void)onOKButton:(id)a0;
- (void)onHelpButton:(id)a0;
- (void)onCancelButton:(id)a0;
- (void)populateSecurityTypes;
- (id)errorStringForErrorCode:(long long)a0;
- (BOOL)validateEntries;
- (void)setSecurityTypeViewForTag:(long long)a0;
- (void)resetSecurityEntries;
- (void)onChannelPopupButton:(id)a0;
- (void)onSecurityTypePopupButton:(id)a0;
- (void)__updateWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 complete:(id /* block */)a1;
- (void)onShowPasswordCheckboxButton:(id)a0;
- (id)initWithInterface:(id)a0 authorization:(id)a1;
- (void)securityPopUpWillPopUp:(id)a0;
- (void)populateHostAPChannels;
- (void)_applyDefaultPassword;
- (void)populateWiFiOptions;
- (id)_getGeneratedDefaultPassword;

@end
