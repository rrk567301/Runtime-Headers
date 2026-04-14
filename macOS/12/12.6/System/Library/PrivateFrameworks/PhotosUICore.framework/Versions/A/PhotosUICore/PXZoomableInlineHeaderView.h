@class PXZoomableInlineHeaderViewConfiguration, UXView, NSVisualEffectView, UXLabel;

@interface PXZoomableInlineHeaderView : UXView <PXGReusableView> {
    PXZoomableInlineHeaderViewConfiguration *_configuration;
    NSVisualEffectView *_effectView;
    UXView *_tintView;
    UXLabel *_titleLabel;
    UXLabel *_subtitleLabel;
}

@property (copy, nonatomic) PXZoomableInlineHeaderViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

+ (struct CGSize { double x0; double x1; })sizeWithConfiguration:(id)a0;
+ (id)_titleFontForStyle:(unsigned long long)a0;
+ (double)_heightForStyle:(unsigned long long)a0;
+ (id)_subtitleFontForStyle:(unsigned long long)a0;
+ (id)_roundedCornerMaskImageForRadius:(double)a0 size:(struct CGSize { double x0; double x1; })a1;

- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureViews;
- (void)layoutSubviews;
- (void)_setupBackgroundView;
- (void)_setupViews;
- (void)becomeReusable;
- (void)_updateConfiguration;
- (void)_updateButtonWithConfiguration:(id)a0;
- (void)_platformSpecificViewSetup;
- (id)_tintViewBackgroundColor;
- (void)_setEffectViewCornerRadius:(double)a0;

@end
