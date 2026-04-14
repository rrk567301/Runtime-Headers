@class UXView, PXStoryChromeButtonConfiguration, UXLabel, PXUpdater, NSVisualEffectView, NSTrackingArea, NSImage, NSObject, NSImageView, UXImageView;
@protocol OS_os_log;

@interface PXStoryChromeButton : UXControl <PXGReusableView>

@property (readonly, nonatomic) PXUpdater *updater;
@property (retain, nonatomic) NSVisualEffectView *effectView;
@property (retain, nonatomic) UXView *backgroundView;
@property (readonly, nonatomic) NSImageView *systemImageView;
@property (readonly, nonatomic) NSImageView *badgeSystemImageView;
@property (readonly, nonatomic) UXImageView *assetImageView;
@property (readonly, nonatomic) UXLabel *label;
@property (retain, nonatomic) NSImage *assetImage;
@property (nonatomic) long long imageRequestID;
@property (nonatomic) BOOL isMenuOpen;
@property (nonatomic) BOOL isHovered;
@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (copy, nonatomic) PXStoryChromeButtonConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

+ (struct CGSize { double x0; double x1; })sizeWithConfiguration:(id)a0;
+ (struct CGSize { double x0; double x1; })_sizeForAttributedLabel:(id)a0;
+ (id)_createSystemImageView;
+ (id)_createBadgeSystemImageView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (id)accessibilityLabel;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)_updateBackgroundView;
- (void)setAlpha:(double)a0;
- (void)updateTrackingAreas;
- (void)_updateLabel;
- (void)_updateAppearance;
- (void)layoutSubviews;
- (void)_invalidateAppearance;
- (void)_setNeedsUpdate;
- (id)_createLabel;
- (void)becomeReusable;
- (void)_updateAssetImage;
- (id)_createAssetImageView;
- (void)_setEffectViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateBackgroundViewCornerRadius;
- (void)_handleImageResult:(id)a0 info:(id)a1 forDisplayAsset:(id)a2 requestID:(long long)a3 synchronous:(BOOL)a4;
- (void)_updateAssetImageView;
- (void)_updateSystemImageView;
- (void)_updateBadgeSytemImageView;
- (void)_updateVisualEffectView;
- (void)_configureActions;
- (void)_updateEffectViewCornerRadius;
- (id)_imageWithSystemName:(id)a0;
- (id)_badgeImageWithSystemName:(id)a0;
- (void)_configureVisualEffectView:(id)a0;
- (void)_configureBackgroundView:(id)a0;
- (id)_imageWithSystemName:(id)a0 symbolConfiguration:(id)a1;
- (void)_presentMenu:(id)a0;
- (void)_invalidateAssetImage;
- (void)_px_invalidatePointerInteraction;

@end
