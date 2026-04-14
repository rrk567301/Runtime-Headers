@class SiriSharedUIContentPlatterSeparatorView, NSAttributedString, NSTextField;

@interface SiriSharedUIAlternateUserUtteranceCellView : SiriSharedUIStandardView {
    SiriSharedUIContentPlatterSeparatorView *_separator;
    NSTextField *_textField;
}

@property (retain, nonatomic) NSAttributedString *alternativeUtterance;

- (void)layout;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void)viewDidChangeEffectiveAppearance;
- (void)_adjustCompositeFilterForCurrentAppearance;

@end
