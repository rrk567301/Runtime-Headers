@class LPImageViewStyle, NSImageView, LPImagePresentationProperties, NSView, LPImage;

@interface LPImageView : LPComponentView {
    LPImage *_image;
    LPImage *_filteredImage;
    LPImagePresentationProperties *_properties;
    LPImageViewStyle *_style;
    LPImageViewStyle *_originalStyle;
    long long _currentScalingMode;
    long long _platterReason;
    NSImageView *_imageView;
    NSView *_overlayView;
    NSView *_backgroundView;
}

- (void).cxx_destruct;
- (long long)_filter;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateCornerRadius;
- (id)initWithHost:(id)a0;
- (void)layoutComponentView;
- (id)initWithHost:(id)a0 image:(id)a1 properties:(id)a2 style:(id)a3;
- (BOOL)shouldApplyBackground;
- (void)installDarkeningViewIfNeeded;
- (id)_createImageViewWithImage:(id)a0;
- (void)_updateScalingMode;
- (void)updateShadowPath;
- (void)ensureImageView;
- (id)_createOverlayViewWithOpacity:(double)a0;
- (struct CGSize { double x0; double x1; })imageSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (long long)scalingModeForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setImageViewScalingMode:(long long)a0;

@end
