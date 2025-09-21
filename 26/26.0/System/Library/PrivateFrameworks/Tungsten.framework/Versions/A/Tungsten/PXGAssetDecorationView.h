@class PXGAssetDecorationViewConfiguration, PXUpdater, NSTimer;

@interface PXGAssetDecorationView : NSView <PXGReusableView> {
    PXUpdater *_updater;
    NSTimer *_progressIndicatorDelayTimer;
}

@property (copy, nonatomic) PXGAssetDecorationViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly, nonatomic) BOOL canUnloadWhenInvisible;
@property (readonly, nonatomic) BOOL isFloating;

+ (BOOL)_wantsActivityIndicatorForConfiguration:(id)a0;
+ (BOOL)_wantsProgressIndicatorForConfiguration:(id)a0;
+ (BOOL)wantsDecorationViewForConfiguration:(id)a0;

- (void)_setNeedsUpdate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)accessibilityRole;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)becomeReusable;
- (void)_invalidateProgressIndicator;
- (void)_updateProgressIndicator;

@end
