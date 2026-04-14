@class NSTextField, UXView, NSString, NSProgressIndicator, NSAttributedString, NSDictionary, NSMutableArray, NSButton;

@interface _UXContentUnavailableView : UXView

@property (retain, nonatomic) UXView *containerView;
@property (retain, nonatomic) NSTextField *titleLabel;
@property (retain, nonatomic) NSTextField *messageLabel;
@property (retain, nonatomic) NSMutableArray *containerViewContraints;
@property (retain, nonatomic) NSProgressIndicator *progressIndicator;
@property (nonatomic) unsigned long long vibrantOptions;
@property (retain, nonatomic) NSButton *actionButton;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSAttributedString *attributedMessage;
@property (readonly, nonatomic) NSDictionary *messageTextAttributes;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (nonatomic) BOOL showProgress;
@property (nonatomic) unsigned long long progressIndicatorStyle;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)_commonInit;
- (id)_textColor;
- (id)_tintColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (BOOL)_hasVibrantText;
- (void)_actionButtonPressed:(id)a0;
- (double)_buttonAlpha;
- (BOOL)_hasVibrantButton;
- (double)_labelAlpha;
- (id)_vibrantBaseColor;
- (id)titleTextAttributes;
- (id)_textFieldWithFontSize:(double)a0;
- (void)_updateProgressLayout;
- (void)_updateTextField:(id)a0 withAttributedText:(id)a1;

@end
