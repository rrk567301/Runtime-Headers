@class NSView, NSString, NSArray, LARUIAuthenticationLabel, NSStackView, NSColor, NSImageView, NSButton, NSMapTable;

@interface LARUIAuthenticationAlert : NSViewController <LARUIAuthenticationAlert> {
    NSStackView *_stackView;
    NSImageView *_iconView;
    LARUIAuthenticationLabel *_titleTextField;
    LARUIAuthenticationLabel *_informativeTextField;
    NSView *_buttonStackContainer;
    NSStackView *_buttonStack;
    NSArray *_buttons;
    NSButton *_buttonPositive;
    NSButton *_buttonPositivePlain;
    NSButton *_buttonNegative;
    NSButton *_buttonAlternative;
    NSView *_accessoryViewContainer;
    NSView *_accessoryView;
    BOOL _enabled;
    NSMapTable *_inactiveControls;
    NSView *_lastFirstResponder;
}

@property (copy) NSString *title;
@property (copy) NSColor *titleColor;
@property (retain, nonatomic) NSString *titleTooltip;
@property (retain, nonatomic) NSString *text;
@property (copy, nonatomic) NSColor *textColor;
@property (retain, nonatomic) NSView *accessoryView;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL useCustomTouchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)loadView;
- (void)setup;
- (id)init;
- (void)viewDidLayout;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)setButton:(long long)a0 enabled:(BOOL)a1;
- (BOOL)isButtonHidden:(long long)a0;
- (void)showButton:(long long)a0 title:(id)a1 target:(id)a2 action:(SEL)a3;
- (void)hideButton:(long long)a0;
- (void)setIcon:(id)a0 badge:(id)a1;
- (void)_updateTouchBar;
- (void)_assertButtonIndexIsValid:(long long)a0;
- (void)_configureAccessoryStackView:(id)a0;
- (void)_configurePaddingForLabel:(id)a0;
- (void)_configurePopUp:(id)a0;
- (void)_configureSecureTextField:(id)a0;
- (void)_configureTextField:(id)a0;
- (void)_restoreCurrentFirstResponder;
- (void)_saveCurrentFirstResponder;
- (void)_updateButtonStack;
- (id)positiveButtonIn:(id)a0;
- (void)resolveAccessoryViewHidden;

@end
