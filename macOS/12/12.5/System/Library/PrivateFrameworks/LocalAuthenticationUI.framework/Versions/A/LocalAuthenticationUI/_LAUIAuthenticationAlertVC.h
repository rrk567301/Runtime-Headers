@class NSView, NSString, NSTextField, NSArray, NSStackView, NSColor, NSImageView, NSButton, NSMapTable;

@interface _LAUIAuthenticationAlertVC : NSViewController <_LAUIAuthenticationAlert> {
    NSStackView *_stackView;
    NSImageView *_iconView;
    NSTextField *_titleTextField;
    NSTextField *_informativeTextField;
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

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)setButton:(unsigned long long)a0 enabled:(BOOL)a1;
- (void)setup;
- (void)setIcon:(id)a0 badge:(id)a1;
- (void)showButton:(unsigned long long)a0 title:(id)a1 target:(id)a2 action:(SEL)a3;
- (void)_updateTouchBar;
- (void)_assertButtonIndexIsValid:(unsigned long long)a0;
- (void)hideButton:(unsigned long long)a0;
- (void)_updateButtonStack;
- (void)_saveCurrentFirstResponder;
- (void)_restoreCurrentFirstResponder;
- (id)positiveButtonIn:(id)a0;
- (BOOL)isButtonHidden:(unsigned long long)a0;

@end
