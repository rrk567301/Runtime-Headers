@class NSArray, NSImageView, NSTextField;

@interface AVFullscreenPlaceholderView : NSView {
    BOOL _viewHasBeenSetUp;
    BOOL _scaleHasBeenSetUp;
    unsigned long long _activeIndicatorScale;
    NSArray *_variableConstraints;
    NSImageView *_imageView;
    NSTextField *_infoTextLabel;
}

+ (unsigned long long)_indicatorScaleForSize:(struct CGSize { double x0; double x1; })a0;

- (id)init;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityLabel;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_updateIndicatorScaleIfNeeded;
- (void)_setUpViewIfNeeded;
- (void)_updateIndicatorScaleConstraints;
- (void)_updateIndicatorVisibilityState;
- (id)_smallScaleIndicatorLayoutConstraints;
- (id)_mediumScaleIndicatorLayoutConstraints;
- (id)_largeScaleIndicatorLayoutConstraints;

@end
