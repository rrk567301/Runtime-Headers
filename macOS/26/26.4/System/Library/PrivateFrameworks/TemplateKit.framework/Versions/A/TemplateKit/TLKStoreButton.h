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

- (void)tlk_updateForAppearance:(id)a0;
- (void)setTitle:(id)a0;
- (void)layout;
- (void)setFont:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)font;
- (id)title;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)accessibilityTitle;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidChangeEffectiveAppearance;
- (void)setBackgroundStyle:(long long)a0;
- (id)init;
- (BOOL)allowsVibrancy;
- (void)viewDidMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;

@end
