@interface PXSolariumSettings : PXSettings

@property (class, nonatomic, readonly) BOOL hasBarAppearanceSPI;

@property (nonatomic) BOOL pinCollectionsTabTitle;
@property (nonatomic) BOOL pinSearchTabTitle;
@property (nonatomic) BOOL useNewSearch;
@property (nonatomic) BOOL enableAdaptiveDarkBiasInGrid;
@property (nonatomic) BOOL disableInfoButtonMonochromaticWorkaround;
@property (nonatomic) BOOL enableStatusBarsHiddenFromCameraPadOneUp;
@property (nonatomic) BOOL useNewMainViewLayout;
@property (nonatomic) BOOL showShelvesOrderResetButton;
@property (nonatomic) long long oneShelfExpandingMovementAnimationType;
@property (nonatomic) double oneShelfExpandingMovementAnimationDuration;
@property (nonatomic) double oneShelfExpandingMovementAnimationDelay;
@property (nonatomic) long long oneShelfExpandingOpacityAnimationType;
@property (nonatomic) double oneShelfExpandingOpacityAnimationDuration;
@property (nonatomic) double oneShelfExpandingOpacityAnimationDelay;
@property (nonatomic) long long oneShelfCollapsingMovementAnimationType;
@property (nonatomic) double oneShelfCollapsingMovementAnimationDuration;
@property (nonatomic) double oneShelfCollapsingMovementAnimationDelay;
@property (nonatomic) long long oneShelfCollapsingOpacityAnimationType;
@property (nonatomic) double oneShelfCollapsingOpacityAnimationDuration;
@property (nonatomic) double oneShelfCollapsingOpacityAnimationDelay;
@property (nonatomic) long long allShelvesExpandingMovementAnimationType;
@property (nonatomic) double allShelvesExpandingMovementAnimationDuration;
@property (nonatomic) double allShelvesExpandingMovementAnimationDelay;
@property (nonatomic) long long allShelvesExpandingOpacityAnimationType;
@property (nonatomic) double allShelvesExpandingOpacityAnimationDuration;
@property (nonatomic) double allShelvesExpandingOpacityAnimationDelay;
@property (nonatomic) long long allShelvesCollapsingMovementAnimationType;
@property (nonatomic) double allShelvesCollapsingMovementAnimationDuration;
@property (nonatomic) double allShelvesCollapsingMovementAnimationDelay;
@property (nonatomic) long long allShelvesCollapsingOpacityAnimationType;
@property (nonatomic) double allShelvesCollapsingOpacityAnimationDuration;
@property (nonatomic) double allShelvesCollapsingOpacityAnimationDelay;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
