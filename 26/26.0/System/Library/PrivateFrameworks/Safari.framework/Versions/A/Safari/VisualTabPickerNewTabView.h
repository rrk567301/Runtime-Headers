@class BackgroundColorView, ConfigurableVibrancyImageView;
@protocol VisualTabPickerNewTabViewDelegate;

@interface VisualTabPickerNewTabView : VisualTabPickerShadowTileView {
    BackgroundColorView *_contentView;
    ConfigurableVibrancyImageView *_imageView;
}

@property (weak, nonatomic) id<VisualTabPickerNewTabViewDelegate> delegate;

- (id)accessibilityLabel;
- (void)mouseUp:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityIdentifier;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (void)_setUpSubviews;
- (BOOL)accessibilityPerformPress;
- (void)animateSidebarImage:(id)a0 width:(double)a1 gridAnimation:(long long)a2;
- (void)animateToolbarImage:(id)a0 height:(double)a1 gridAnimation:(long long)a2;
- (void)magnifyWithEvent:(id)a0;

@end
