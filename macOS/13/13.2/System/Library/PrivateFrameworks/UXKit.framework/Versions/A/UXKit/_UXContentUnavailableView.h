@class NSTextField, UXView, NSString, NSAttributedString, NSProgressIndicator, NSDictionary, NSMutableArray, NSButton;

@interface _UXContentUnavailableView : UXView

@property (retain, nonatomic) UXView *containerView;
@property (retain, nonatomic) NSTextField *titleLabel;
@property (retain, nonatomic) NSTextField *messageLabel;
@property (retain, nonatomic) NSMutableArray *containerViewContraints;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSAttributedString *attributedMessage;
@property (readonly, nonatomic) NSDictionary *messageTextAttributes;
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
- (id)titleTextAttributes;
- (void)_actionButtonPressed:(id)a0;
- (id)_vibrantBaseColor;
- (double)_labelAlpha;
- (double)_buttonAlpha;
- (BOOL)_hasVibrantText;
- (BOOL)_hasVibrantButton;
- (id)_textFieldWithFontSize:(double)a0;
- (void)_updateTextField:(id)a0 withAttributedText:(id)a1;
- (void)_updateProgressLayout;

@end
