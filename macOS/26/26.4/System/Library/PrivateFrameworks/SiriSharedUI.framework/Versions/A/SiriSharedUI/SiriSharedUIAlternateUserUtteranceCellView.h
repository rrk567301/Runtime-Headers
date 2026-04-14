@class SiriSharedUIContentPlatterSeparatorView, NSAttributedString, NSTextField;

@interface SiriSharedUIAlternateUserUtteranceCellView : SiriSharedUIStandardView {
    SiriSharedUIContentPlatterSeparatorView *_separator;
    NSTextField *_textField;
}

@property (retain, nonatomic) NSAttributedString *alternativeUtterance;

- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (id)init;
- (void)_adjustCompositeFilterForCurrentAppearance;

@end
