@class NSView;

@interface TLKTableCellView : NSTableCellView <TLKCustomEdgeInsets>

@property (retain, nonatomic) NSView *contentView;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } customEdgeInsets;

+ (double)separatorHeightForWindow:(id)a0;

- (id)initWithContentView:(id)a0;
- (void)viewDidMoveToWindow;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layout;
- (id)accessibilityRole;
- (void)setBackgroundStyle:(long long)a0;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tlk_updateForAppearance:(id)a0;
- (BOOL)isAccessibilityElement;
- (void)viewDidChangeEffectiveAppearance;

@end
