@interface PXFooterSettings : PXSettings

@property (nonatomic) char shouldAlternateTitleWithGridCycle;
@property (nonatomic) long long alternateTitleGridCycleCount;
@property (nonatomic) double alternateTitleGridCycleDelay;
@property (nonatomic) double alternateTitleCyclingInterval;
@property (nonatomic) double animationDelay;
@property (nonatomic) float minimumDisplayedProgress;
@property (nonatomic) char simulateImportantInformation;
@property (nonatomic) char simulateAnimatedIconMode;
@property (nonatomic) long long simulatedAnimatedIconMode;
@property (nonatomic) char simulateDisplayedProgress;
@property (nonatomic) float simulatedProgressValue;
@property (nonatomic) char showFilterView;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (void)resetLastShownInfo;

- (void)setDefaultValues;
- (id)parentSettings;

@end
