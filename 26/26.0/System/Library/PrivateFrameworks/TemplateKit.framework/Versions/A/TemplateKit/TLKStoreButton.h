@class NSView, TLKProminenceView, TLKLabel, TLKRichText;

@interface TLKStoreButton : TLKSButton

@property (retain) TLKLabel *label;
@property (retain) NSView *backgroundView;
@property (retain) TLKProminenceView *highlightView;
@property BOOL isEmphasized;
@property (nonatomic) BOOL useCompactMode;
@property (copy, nonatomic) TLKRichText *richTitle;
@property (nonatomic) double cornerRadius;

+ (Class)cellClass;

- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)font;
- (BOOL)allowsVibrancy;
- (void)layout;
- (void)setFont:(id)a0;
- (id)init;
- (void)tlk_updateForAppearance:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)accessibilityTitle;
- (id)title;
- (void)viewDidMoveToWindow;
- (void)setTitle:(id)a0;
- (void)setBackgroundStyle:(long long)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;

@end
