@class NSProgressIndicator, TLKLabel, TLKMultilineText;

@interface TLKActivityIndicatorView : TLKView

@property (retain, nonatomic) NSProgressIndicator *activityIndicator;
@property (retain, nonatomic) TLKLabel *subtitleLabel;
@property (retain, nonatomic) TLKMultilineText *subtitle;

- (void)viewDidMoveToWindow;
- (void).cxx_destruct;
- (void)tlk_updateForAppearance:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)observedPropertiesChanged;
- (id)setupContentView;
- (id)subtitleLabelText;
- (BOOL)usesDefaultLayoutMargins;

@end
