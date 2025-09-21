@interface LPSettings : NSObject

@property (class, readonly, nonatomic) BOOL showDebugIndicators;
@property (class, readonly, nonatomic) BOOL disableLegacyStoreLookups;
@property (class, readonly, nonatomic) BOOL disableAutoPlay;
@property (class, readonly, nonatomic) BOOL disableAnimations;
@property (class, readonly, nonatomic) BOOL subsampleImagesToScreenSize;
@property (class, readonly, nonatomic) BOOL useLightweightMaterials;
@property (class, readonly, nonatomic) BOOL useOnGlassShareSheetAppearance;

+ (void)initialize;
+ (BOOL)solariumIsEnabledForView:(id)a0;
+ (void)updateFromDefaults;

@end
