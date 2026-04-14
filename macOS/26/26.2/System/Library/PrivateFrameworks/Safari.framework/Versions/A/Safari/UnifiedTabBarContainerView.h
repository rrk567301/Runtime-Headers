@class NSView, NSString;

@interface UnifiedTabBarContainerView : NSView {
    NSView *_contentClipView;
    NSView *_filterView;
    NSView *_accessibilityBorderView;
    NSView *_contentView;
}

@property (readonly, nonatomic) NSView *contentView;
@property (readonly, copy, nonatomic) NSString *contentViewGroupName;
@property (copy, nonatomic) NSString *backgroundGroupName;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)_setUpViewForAppearance;

@end
