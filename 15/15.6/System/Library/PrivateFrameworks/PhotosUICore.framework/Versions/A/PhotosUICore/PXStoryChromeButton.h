@class UXView, PXStoryChromeButtonConfiguration, UXLabel, PXUpdater, NSVisualEffectView, NSTrackingArea, NSImage, NSObject, NSImageView, UXImageView;
@protocol OS_os_log;

@interface PXStoryChromeButton : UXControl <PXGReusableView>

@property (readonly, nonatomic) PXUpdater *updater;
@property (retain, nonatomic) NSVisualEffectView *effectView;
@property (retain, nonatomic) UXView *backgroundView;
@property (readonly, nonatomic) NSImageView *systemImageView;
@property (readonly, nonatomic) NSVisualEffectView *systemImageVisualEffectView;
@property (readonly, nonatomic) NSImageView *badgeSystemImageView;
@property (readonly, nonatomic) UXImageView *assetImageView;
@property (readonly, nonatomic) UXLabel *label;
@property (retain, nonatomic) NSImage *assetImage;
@property (nonatomic) long long imageRequestID;
@property (nonatomic) char isMenuOpen;
@property (nonatomic) char isHovered;
@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (copy, nonatomic) PXStoryChromeButtonConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) char shouldReuseWhenInvisible;
@property (readonly, nonatomic) char canUnloadWhenInvisible;
@property (readonly, nonatomic) char isFloating;

+ (id)_createBadgeSystemImageView;
+ (id)_createSystemImageView;
+ (id)_createSystemImageVisualEffectView;
+ (struct CGSize { double x0; double x1; })_sizeForAttributedLabel:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeWithConfiguration:(id)a0;
+ (char)usesButtonSystem;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setHighlighted:(char)a0;
- (void)_updateBackgroundView;
- (void)_updateLabel;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setAlpha:(double)a0;
- (void)updateTrackingAreas;
- (void)_updateAppearance;
- (void)_invalidateAppearance;
- (void)_setNeedsUpdate;
- (id)_createLabel;
- (void)becomeReusable;
- (id)_badgeImageWithSystemName:(id)a0;
- (void)_configureActions;
- (void)_configureBackgroundView:(id)a0;
- (void)_configureVisualEffectView:(id)a0;
- (id)_createAssetImageView;
- (void)_handleImageResult:(id)a0 info:(id)a1 forDisplayAsset:(id)a2 requestID:(long long)a3 synchronous:(char)a4;
- (id)_imageWithSystemName:(id)a0;
- (id)_imageWithSystemName:(id)a0 symbolConfiguration:(id)a1;
- (void)_invalidateAssetImage;
- (void)_presentMenu:(id)a0;
- (void)_px_invalidatePointerInteraction;
- (void)_setEffectViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateAssetImage;
- (void)_updateAssetImageView;
- (void)_updateBackgroundViewCornerRadius;
- (void)_updateBadgeSystemImageView;
- (void)_updateEffectViewCornerRadius;
- (void)_updateSystemImageView;
- (void)_updateSystemImageVisualEffectView;
- (void)_updateVisualEffectView;

@end
