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

- (void)setBackgroundStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setFont:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)accessibilityTitle;
- (void)viewDidChangeEffectiveAppearance;
- (void)layout;
- (id)init;
- (void)tlk_updateForAppearance:(id)a0;
- (void)viewDidMoveToWindow;
- (id)title;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setTitle:(id)a0;
- (BOOL)allowsVibrancy;
- (id)font;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;

@end
