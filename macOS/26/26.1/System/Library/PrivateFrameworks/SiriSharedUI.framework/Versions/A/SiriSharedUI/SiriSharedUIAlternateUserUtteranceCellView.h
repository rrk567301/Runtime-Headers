@class SiriSharedUIContentPlatterSeparatorView, NSAttributedString, NSTextField;

@interface SiriSharedUIAlternateUserUtteranceCellView : SiriSharedUIStandardView {
    SiriSharedUIContentPlatterSeparatorView *_separator;
    NSTextField *_textField;
}

@property (retain, nonatomic) NSAttributedString *alternativeUtterance;

- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (id)init;
- (void)_adjustCompositeFilterForCurrentAppearance;

@end
