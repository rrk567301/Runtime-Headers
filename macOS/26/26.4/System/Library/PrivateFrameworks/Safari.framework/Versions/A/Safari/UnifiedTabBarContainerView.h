@class NSView, NSString, UnifiedTabBarFilterView;

@interface UnifiedTabBarContainerView : NSView {
    NSString *_backgroundGroupName;
    NSView *_contentClipView;
    UnifiedTabBarFilterView *_filterView;
    NSView *_accessibilityBorderView;
    NSView *_contentView;
}

@property (readonly, nonatomic) NSView *contentView;
@property (readonly, copy, nonatomic) NSString *contentViewGroupName;
@property (copy, nonatomic) NSString *backgroundGroupName;

- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)_scrollPocketElementStyle;
- (void)_setUpViewForAppearance;

@end
