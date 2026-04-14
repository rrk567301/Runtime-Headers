@class NSBox, NSImageView;
@protocol NSVisualTabPickerNewTabViewDelegate;

@interface NSVisualTabPickerNewTabView : NSVisualTabPickerShadowTileView {
    NSBox *_contentView;
    NSImageView *_imageView;
}

@property (weak, nonatomic) id<NSVisualTabPickerNewTabViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)_setUpSubviews;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (void)animateTitlebarImage:(id)a0 height:(double)a1 width:(double)a2 gridAnimation:(long long)a3;
- (void)magnifyWithEvent:(id)a0;

@end
