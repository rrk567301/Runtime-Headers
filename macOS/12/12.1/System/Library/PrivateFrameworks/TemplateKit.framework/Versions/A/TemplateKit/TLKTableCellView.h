@class NSView;

@interface TLKTableCellView : NSTableCellView <TLKCustomEdgeInsets>

@property (retain, nonatomic) NSView *contentView;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } customEdgeInsets;

+ (double)separatorHeightForWindow:(id)a0;

- (void).cxx_destruct;
- (void)layout;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)setBackgroundStyle:(long long)a0;
- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (id)initWithContentView:(id)a0;
- (void)tlk_updateForAppearance:(id)a0;

@end
