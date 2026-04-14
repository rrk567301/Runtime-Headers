@class NSView;

@interface TLKTableCellView : NSTableCellView <TLKCustomEdgeInsets>

@property (retain, nonatomic) NSView *contentView;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } customEdgeInsets;

+ (double)separatorHeightForWindow:(id)a0;

- (id)initWithContentView:(id)a0;
- (void)tlk_updateForAppearance:(id)a0;
- (void)layout;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidChangeEffectiveAppearance;
- (void)setBackgroundStyle:(long long)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)viewDidMoveToWindow;

@end
