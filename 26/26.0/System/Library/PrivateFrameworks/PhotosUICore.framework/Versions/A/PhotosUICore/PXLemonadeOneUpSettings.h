@interface PXLemonadeOneUpSettings : PXSettings

@property (class, readonly, nonatomic) BOOL isOneUpRefreshEnabled;

@property (nonatomic) BOOL chromeLibraryScrubberEnabled;
@property (nonatomic) BOOL chromeLibraryScrubberHiddenWhileZoomed;
@property (nonatomic) long long chromeEDRBoostBehavior;
@property (nonatomic) double chromeButtonsEDRBoost;
@property (nonatomic) double chromeTitleEDRBoost;
@property (nonatomic) double chromeVideoControlsEDRBoost;
@property (nonatomic) BOOL enableLegibilityBlur;
@property (nonatomic) long long legibilityBlurCurve;
@property (nonatomic) double legibilityBlurRadius;
@property (nonatomic) double legibilityBlurDistanceToBaseline;
@property (nonatomic) long long legibilityTintCurve;
@property (nonatomic) double legibilityTintOpacity;
@property (nonatomic) double minimumMarginForInsetContent;
@property (nonatomic) double insetContentCornerRadius;
@property (nonatomic) double insetContentBorderWidth;
@property (nonatomic) double insetContentBorderOpacityDarkMode;
@property (nonatomic) double insetContentBorderOpacityLightMode;
@property (nonatomic) BOOL insetAllContent;
@property (nonatomic) long long insetMode;
@property (nonatomic) long long screenshotInsetMode;
@property (nonatomic) long long regularSizeClassInsetMode;
@property (nonatomic) double minimumVideoScrubberWidth;
@property (nonatomic) BOOL showPlaybackRateButton;
@property (nonatomic) BOOL showAudioMixButton;
@property (nonatomic) BOOL loopAllVideos;
@property (nonatomic) double minimumDurationForVideoLooping;
@property (nonatomic) BOOL doubleTapFillsScreen;
@property (nonatomic) double dismissalFractionForHidingChrome;
@property (nonatomic) BOOL enableSideCommentsInLandscape;
@property (nonatomic) long long debugBarKindRawValue;
@property (nonatomic) BOOL showChromeSafeAreaBox;
@property (nonatomic) BOOL showFitAssetAreaBox;
@property (nonatomic) BOOL showScaledAssetAreaBox;
@property (nonatomic) BOOL showLegibilityGradientBorders;
@property (nonatomic) BOOL internal_isOneUpRefreshEnabled;
@property (nonatomic) BOOL showSaveVideoFrameAction;
@property (nonatomic) BOOL enableSystemBars;
@property (nonatomic) BOOL showSharedLibraryStatusInSubtitle;
@property (nonatomic) BOOL enableHideStatusBarForCameraPad;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (long long)version;
- (id)parentSettings;

@end
