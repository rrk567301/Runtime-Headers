@interface PXInlineVideoStabilizationSettings : PXSettings

@property (nonatomic) char useMediaAnalysisRecipe;
@property (nonatomic) char localCacheForMediaAnalysisRecipes;
@property (nonatomic) double allowedCropFraction;
@property (nonatomic) char crossfadeEnabled;
@property (nonatomic) char timeRangeEnabled;
@property (nonatomic) char gyroStabilizationEnabled;
@property (nonatomic) char pixelStabilizationEnabled;
@property (nonatomic) char showDiagnosticUI;
@property (readonly, nonatomic) unsigned long long allowedAnalysisTypes;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)transientProperties;

- (void)setDefaultValues;
- (id)parentSettings;

@end
