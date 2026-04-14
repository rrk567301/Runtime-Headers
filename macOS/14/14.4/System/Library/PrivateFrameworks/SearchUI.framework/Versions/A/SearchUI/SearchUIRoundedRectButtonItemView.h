@class SearchUIImageView, NSString, NUIContainerStackView, TLKLabel;

@interface SearchUIRoundedRectButtonItemView : SearchUIButtonItemView

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) TLKLabel *textLabel;
@property (retain, nonatomic) SearchUIImageView *customImageView;
@property (retain, nonatomic) NUIContainerStackView *stackView;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (void)setButtonTitle:(id)a0;
- (BOOL)allowsVibrancy;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)tlk_updateForAppearance:(id)a0;
- (void)setSfImage:(id)a0;

@end
