@class NSTextField, UXView, NSString, NSProgressIndicator, NSMutableArray, NSButton;

@interface _UXContentUnavailableView : UXView

@property (retain, nonatomic) UXView *containerView;
@property (retain, nonatomic) NSTextField *titleLabel;
@property (retain, nonatomic) NSTextField *messageLabel;
@property (retain, nonatomic) NSMutableArray *containerViewContraints;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) NSButton *actionButton;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (nonatomic) BOOL showProgress;
@property (retain, nonatomic) NSProgressIndicator *progressIndicator;
@property (nonatomic) unsigned long long progressIndicatorStyle;
@property (nonatomic) unsigned long long vibrantOptions;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (id)_tintColor;
- (id)_textColor;
- (void)commonInit;
- (BOOL)_hasVibrantButton;
- (BOOL)_hasVibrantText;
- (id)_vibrantBaseColor;
- (double)_labelAlpha;
- (void)_actionButtonPressed:(id)a0;
- (double)_buttonAlpha;
- (id)_textFieldWithFontSize:(double)a0;
- (id)placeholderTitleTextAttributes;
- (void)_updateTextField:(id)a0 withAttributedText:(id)a1;
- (id)placeholderMessageTextAttributes;
- (id)_buttonTitleAttributes;
- (void)_updateProgressLayout;

@end
