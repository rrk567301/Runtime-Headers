@class PXGAssetDecorationViewConfiguration, PXUpdater, NSTimer;

@interface PXGAssetDecorationView : UXView <PXGReusableView> {
    PXUpdater *_updater;
    NSTimer *_progressIndicatorDelayTimer;
}

@property (copy, nonatomic) PXGAssetDecorationViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) char shouldReuseWhenInvisible;
@property (readonly, nonatomic) char canUnloadWhenInvisible;
@property (readonly, nonatomic) char isFloating;

+ (char)_wantsActivityIndicatorForConfiguration:(id)a0;
+ (char)_wantsProgressIndicatorForConfiguration:(id)a0;
+ (char)wantsDecorationViewForConfiguration:(id)a0;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)accessibilityRole;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_setNeedsUpdate;
- (void)becomeReusable;
- (void)_invalidateProgressIndicator;
- (void)_updateProgressIndicator;

@end
