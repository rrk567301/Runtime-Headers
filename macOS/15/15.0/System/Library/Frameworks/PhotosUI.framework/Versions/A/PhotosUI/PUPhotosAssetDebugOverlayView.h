@class UXView, NSString, UXImageView, NSButton, UXLabel;
@protocol PUPhotosAssetDebugOverlayViewDelegate;

@interface PUPhotosAssetDebugOverlayView : UXView <PUMutablePhotosAssetDebugOverlayViewConfiguration>

@property (readonly, nonatomic) UXView *buttonContainerView;
@property (readonly, nonatomic) UXImageView *buttonImageView;
@property (readonly, nonatomic) NSButton *overlayButton;
@property (readonly, nonatomic) UXView *infoOverlayView;
@property (readonly, nonatomic) UXLabel *infoLabel;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (nonatomic) BOOL showInfoOverlay;
@property (nonatomic) long long preferredImageDynamicRange;
@property (nonatomic) long long effectivePreferredImageDynamicRange;
@property (weak, nonatomic) id<PUPhotosAssetDebugOverlayViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_openURL:(id)a0;
- (void)_setupView;
- (id)_debugDescription;
- (id)initWithClientIdentifier:(id)a0 configuration:(id /* block */)a1;
- (void)_updateImageDynamicRangeOption:(long long)a0;
- (void)_configureButtonContainerView;
- (void)_configureButtonImageView;
- (void)_didTapButton:(id)a0;
- (void)_fileRadar;
- (id)_hdrImageTextForCurrentlyDisplayedImage;
- (void)_toggleInfoOverlay;
- (void)_updateImageDynamicRangeOptionWithMenuItem:(id)a0;
- (void)_updateInfoLabel;
- (void)_updateInfoOverlayAppearance;
- (void)_updateOverlayButton;

@end
