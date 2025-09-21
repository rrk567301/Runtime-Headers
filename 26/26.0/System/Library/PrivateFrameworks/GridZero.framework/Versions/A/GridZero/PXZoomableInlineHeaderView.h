@class PXZoomableInlineHeaderViewConfiguration, NSView, NSVisualEffectView, PXLabel;

@interface PXZoomableInlineHeaderView : NSView <PXGReusableView> {
    PXZoomableInlineHeaderViewConfiguration *_configuration;
    NSVisualEffectView *_effectView;
    NSView *_tintView;
    PXLabel *_titleLabel;
    PXLabel *_subtitleLabel;
}

@property (copy, nonatomic) PXZoomableInlineHeaderViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly, nonatomic) BOOL canUnloadWhenInvisible;
@property (readonly, nonatomic) BOOL isFloating;

+ (double)_heightForStyle:(unsigned long long)a0;
+ (id)_roundedCornerMaskImageForRadius:(double)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)_subtitleFontForStyle:(unsigned long long)a0 preferredContentSizeCategory:(long long)a1;
+ (id)_titleFontForStyle:(unsigned long long)a0 preferredContentSizeCategory:(long long)a1;
+ (struct CGSize { double x0; double x1; })sizeWithConfiguration:(id)a0 preferredContentSizeCategory:(long long)a1;

- (void)setNeedsLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)_setupBackgroundView;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (BOOL)wantsUpdateLayer;
- (void)_configureViews;
- (void)_setupViews;
- (void)_updateConfiguration;
- (void)becomeReusable;
- (void)_updateButtonWithConfiguration:(id)a0;
- (void)_platformSpecificViewSetup;
- (void)_commonLayoutSubviews;
- (void)_setEffectViewCornerRadius:(double)a0;
- (id)_tintViewBackgroundColor;

@end
