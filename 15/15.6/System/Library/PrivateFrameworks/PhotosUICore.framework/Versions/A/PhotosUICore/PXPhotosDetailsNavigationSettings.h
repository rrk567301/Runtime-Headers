@interface PXPhotosDetailsNavigationSettings : PXSettings <PXPhotosDetailsNavigationSettingsProtocol>

@property (class, nonatomic, readonly) char canEnableZoomBounce;

@property (nonatomic) char useZoomTransition;
@property (nonatomic) char customZoomTransitionDimming;
@property (nonatomic) double zoomTransitionDimmingWhite;
@property (nonatomic) double zoomTransitionDimmingOpacity;
@property (nonatomic) char customZoomTransitionDimmingBlurEffect;
@property (nonatomic) long long zoomTransitionDimmingBlurEffectStyle;
@property (nonatomic) char allowZoomBounce;
@property (nonatomic) double zoomBounceScale;
@property (nonatomic) double zoomBounceDelay;
@property (nonatomic) double zoomBounceRefractoryPeriod;
@property (nonatomic) char useSystemSwipeToDismiss;
@property (nonatomic) char ensureOpaqueDestination;
@property (nonatomic) char useDebugColors;
@property (nonatomic) char showDebugOverlays;
@property (nonatomic) char allowScreenEdgeSwipeToDismiss;
@property (nonatomic) double screenEdgeSwipeForegroundInset;
@property (nonatomic) double screenEdgeSwipeSlideDownDuration;
@property (nonatomic) double screenEdgeSwipeInteractionRelativeDistance;
@property (nonatomic) double screenEdgeSwipeInteractiveFraction;
@property (nonatomic) char workAround123679412;
@property (nonatomic) char allowZoomFromSheets;
@property (nonatomic) char workAround125263280;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
