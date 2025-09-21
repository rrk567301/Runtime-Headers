@class TLKLabel, TLKStackView;

@interface TLKSelectableGridButton : TLKSButton {
    BOOL _customHighlight;
}

@property (retain, nonatomic) TLKLabel *topLabel;
@property (retain, nonatomic) TLKLabel *bottomLabel;
@property (retain, nonatomic) TLKStackView *stackView;
@property (nonatomic) BOOL customHighlight;

+ (id)selectableGridButton;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layout;
- (void)tlk_updateForAppearance:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidMoveToWindow;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setTitle:(id)a0 subtitle:(id)a1;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;

@end
