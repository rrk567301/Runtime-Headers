@interface PXLemonadeOneUpSettings : PXSettings

@property (class, readonly, nonatomic) char isOneUpRefreshEnabled;

@property (nonatomic) char chromeLibraryScrubberEnabled;
@property (nonatomic) char chromeLibraryScrubberHiddenWhileZoomed;
@property (nonatomic) long long chromeEDRBoostBehavior;
@property (nonatomic) double chromeButtonsEDRBoost;
@property (nonatomic) double chromeTitleEDRBoost;
@property (nonatomic) double chromeVideoControlsEDRBoost;
@property (nonatomic) char enableLegibilityBlur;
@property (nonatomic) long long legibilityBlurCurve;
@property (nonatomic) double legibilityBlurRadius;
@property (nonatomic) double legibilityBlurDistanceToBaseline;
@property (nonatomic) long long legibilityTintCurve;
@property (nonatomic) double legibilityTintOpacity;
@property (nonatomic) char enableChromeDebugHorizontalCenterGuides;
@property (nonatomic) double chromeDebugHorizontalCenterRadius;
@property (nonatomic) double minimumMarginForInsetContent;
@property (nonatomic) double insetContentCornerRadius;
@property (nonatomic) double insetContentBorderWidth;
@property (nonatomic) double insetContentBorderOpacityDarkMode;
@property (nonatomic) double insetContentBorderOpacityLightMode;
@property (nonatomic) char insetAllContent;
@property (nonatomic) long long insetMode;
@property (nonatomic) long long screenshotInsetMode;
@property (nonatomic) long long regularSizeClassInsetMode;
@property (nonatomic) double minimumVideoScrubberWidth;
@property (nonatomic) char showPlaybackRateButton;
@property (nonatomic) char showAudioMixButton;
@property (nonatomic) char loopAllVideos;
@property (nonatomic) double minimumDurationForVideoLooping;
@property (nonatomic) char doubleTapFillsScreen;
@property (nonatomic) double dismissalFractionForHidingChrome;
@property (nonatomic) char enableSideCommentsInLandscape;
@property (nonatomic) long long debugBarKindRawValue;
@property (nonatomic) char showChromeSafeAreaBox;
@property (nonatomic) char showLegibilityGradientBorders;
@property (nonatomic) char internal_isOneUpRefreshEnabled;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (long long)version;
- (void)setDefaultValues;
- (id)parentSettings;

@end
