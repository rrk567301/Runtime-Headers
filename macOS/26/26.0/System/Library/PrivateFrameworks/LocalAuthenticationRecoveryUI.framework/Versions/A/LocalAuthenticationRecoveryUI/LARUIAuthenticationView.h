@class NSView, NSString, NSArray, NSTextField, NSSecureTextField, LARUIAuthenticationLabel, NSStackView, NSColor, NSPopUpButton, NSLayoutConstraint;

@interface LARUIAuthenticationView : LARUIAuthenticationAlert <NSTextFieldDelegate, LARUIAuthenticationView> {
    NSStackView *_formStackView;
    LARUIAuthenticationLabel *_promptLabel;
    NSStackView *_usernameStackView;
    NSTextField *_usernameField;
    NSPopUpButton *_usernamePopUp;
    NSStackView *_passwordStackView;
    NSSecureTextField *_passwordField;
    LARUIAuthenticationLabel *_passwordHint;
    NSLayoutConstraint *_passwordStackViewZeroHeightConstraint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSColor *promptColor;
@property (retain, nonatomic) NSString *usernameLabelText;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSArray *usernames;
@property (readonly, nonatomic) long long indexOfSelectedUsername;
@property (retain, nonatomic) NSString *passwordLabelText;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *passwordHintText;
@property (copy) NSString *title;
@property (copy) NSColor *titleColor;
@property (retain, nonatomic) NSString *titleTooltip;
@property (retain, nonatomic) NSString *text;
@property (copy, nonatomic) NSColor *textColor;
@property (retain, nonatomic) NSView *accessoryView;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL useCustomTouchBar;

@end
