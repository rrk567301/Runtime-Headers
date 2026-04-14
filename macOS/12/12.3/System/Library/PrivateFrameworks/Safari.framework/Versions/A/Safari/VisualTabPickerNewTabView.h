@class BackgroundColorView, ConfigurableVibrancyImageView;
@protocol VisualTabPickerNewTabViewDelegate;

@interface VisualTabPickerNewTabView : VisualTabPickerShadowTileView {
    BackgroundColorView *_contentView;
    ConfigurableVibrancyImageView *_imageView;
}

@property (weak, nonatomic) id<VisualTabPickerNewTabViewDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (BOOL)accessibilityPerformPress;
- (void)mouseUp:(id)a0;
- (void)magnifyWithEvent:(id)a0;
- (void)animateSidebarImage:(id)a0 width:(double)a1 gridAnimation:(long long)a2;
- (void)animateToolbarImage:(id)a0 height:(double)a1 gridAnimation:(long long)a2;
- (void)_setUpSubviews;

@end
