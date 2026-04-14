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
- (id)title;
- (void)viewDidMoveToWindow;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layout;
- (id)font;
- (void)setBackgroundStyle:(long long)a0;
- (void)setFont:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityTitle;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setTitle:(id)a0;
- (void)tlk_updateForAppearance:(id)a0;
- (BOOL)allowsVibrancy;
- (id)init;
- (void)viewDidChangeEffectiveAppearance;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;

@end
