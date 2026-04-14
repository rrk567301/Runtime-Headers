@class BackdropView, NSString, NSView, NSArray, NSColor;

@interface UnifiedTabBarSeparator : NSView {
    BackdropView *_backdropView;
    NSView *_filterView;
    NSView *_separatorView;
    NSArray *_separatorLayoutConstraints;
}

@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSColor *separatorColor;
@property (nonatomic) double separatorAlphaValue;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } separatorEdgeInsets;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (void)_commonUnifiedTabBarSeparatorInit;
- (void)_resetSeparatorConstraints;

@end
