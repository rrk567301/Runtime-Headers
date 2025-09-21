@class NSArray;

@interface PXZoomablePhotosSettings : PXSettings

@property (class, readonly, nonatomic) NSArray *validColumns;
@property (class, readonly, nonatomic) NSArray *columnChoices;

@property (nonatomic) char enablePinch;
@property (nonatomic) char enableBadges;
@property (nonatomic) char enableInlineVideo;
@property (nonatomic) char enableOneColumn;
@property (nonatomic) char enableDecadesDensity;
@property (nonatomic) char forceSaliency;
@property (nonatomic) char enableAutoCrossfade;
@property (nonatomic) char enableDebugLayers;
@property (nonatomic) char enableDebugSprites;
@property (nonatomic) char enableHeaderBlur;
@property (nonatomic) char enableCrossfadeFallback;
@property (nonatomic) char enableDenseLevelsInSelectMode;
@property (nonatomic) char titleUseDateRange;
@property (nonatomic) char tapsZoomsToLastIndividualDensity;
@property (nonatomic) char hideBadgesDuringZoom;
@property (nonatomic) double decadesDensityScale;
@property (nonatomic) double denseLevelMinimumScreensOfContent;
@property (nonatomic) double individualLevelMinimumScreensOfContent;
@property (nonatomic) double headerSpaceMinimumScreensOfContent;
@property (nonatomic) double shiftingRequiredScreensTopDistance;
@property (nonatomic) double zoomingHeaderTintOpacity;
@property (nonatomic) long long columnsChoiceIndex;
@property (retain, nonatomic) NSArray *columns;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) double darkModeInteritemSpacing;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double darkModeCornerRadius;
@property (nonatomic) double panoramaCompactInteritemSpacing;
@property (nonatomic) double panoramaRegularInteritemSpacing;
@property (nonatomic) double cardsInteritemSpacing;
@property (nonatomic) double cardsCornerRadius;
@property (nonatomic) double cardsAspectRatio;
@property (nonatomic) long long rubberBandEffect;
@property (nonatomic) double zoomOutRubberBanding;
@property (nonatomic) double zoomInRubberBanding;
@property (nonatomic) double zoomDecelerationRate;
@property (nonatomic) double zoomSpringStiffness;
@property (nonatomic) double zoomSpringDamping;
@property (nonatomic) double recenterSpringStiffness;
@property (nonatomic) double recenterSpringDamping;
@property (nonatomic) double pinchSmoothingDuration;
@property (nonatomic) double sliderSmoothingDuration;
@property (nonatomic) double macPinchGestureDampening;
@property (nonatomic) char simulateEmptyLibrary;
@property (nonatomic) long long simulateMinimumPhotoCount;
@property (nonatomic) long long maxPhotoCount;
@property (nonatomic) long long onlyPhotosFromToday;
@property (nonatomic) long long maxColumnsForSaliency;
@property (nonatomic) long long maxColumnsForSingleDate;
@property (nonatomic) char enableBlurEffect;
@property (nonatomic) double maxBlurRadius;
@property (nonatomic) double blurDimmingStrength;
@property (nonatomic) double unfoldInitialPercentage;
@property (nonatomic) double unfoldVerticalShiftCompensation;
@property (nonatomic) double unfoldEaseOutAmount;
@property (nonatomic) char unfoldDebugLogging;
@property (nonatomic) char enableBlurDebugLayers;
@property (nonatomic) long long preheatDenserZoomLevels;
@property (nonatomic) char preheatThumbnailsWhenIdle;
@property (nonatomic) double alphaMaxAcceptableScale;
@property (nonatomic) double alphaMinAcceptableCoverage;
@property (nonatomic) double minAcceptableCoverage;
@property (nonatomic) double alphaDistanceForDirectionChange;
@property (nonatomic) double alphaModeTransitionDuration;
@property (nonatomic) double alphaCrossfadeMinDuration;
@property (nonatomic) double alphaCrossfadeMaxDuration;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;
- (id)parentSettings;

@end
