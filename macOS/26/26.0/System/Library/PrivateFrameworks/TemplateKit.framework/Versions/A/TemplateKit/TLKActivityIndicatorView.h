@class NSProgressIndicator, TLKLabel, TLKMultilineText;

@interface TLKActivityIndicatorView : TLKView

@property (retain, nonatomic) NSProgressIndicator *activityIndicator;
@property (retain, nonatomic) TLKLabel *subtitleLabel;
@property (retain, nonatomic) TLKMultilineText *subtitle;

- (void)tlk_updateForAppearance:(id)a0;
- (void)viewDidMoveToWindow;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (void)observedPropertiesChanged;
- (id)setupContentView;
- (id)subtitleLabelText;
- (BOOL)usesDefaultLayoutMargins;

@end
