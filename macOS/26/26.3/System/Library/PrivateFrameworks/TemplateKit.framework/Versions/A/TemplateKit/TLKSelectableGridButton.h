@class TLKLabel, TLKStackView;

@interface TLKSelectableGridButton : TLKSButton {
    BOOL _customHighlight;
}

@property (retain, nonatomic) TLKLabel *topLabel;
@property (retain, nonatomic) TLKLabel *bottomLabel;
@property (retain, nonatomic) TLKStackView *stackView;
@property (nonatomic) BOOL customHighlight;

+ (id)selectableGridButton;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)layout;
- (void)tlk_updateForAppearance:(id)a0;
- (void)viewDidMoveToWindow;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setTitle:(id)a0 subtitle:(id)a1;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;

@end
